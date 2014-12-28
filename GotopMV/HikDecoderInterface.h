/*****************************************************
Copyright 2008-2011 Hikvision Digital Technology Co., Ltd.

FileName: HikDecoderInterface.h

Description: µ•œﬂ≥ÃΩ‚¬Îø‚Õ∑Œƒº˛

Modification History: 2008/10/22 by ∫ÈË§
*****************************************************/

#ifndef __HIK_DECODER_INTERFACE__
#define __HIK_DECODER_INTERFACE__
//Error code
#define  HIK_DECODER_NOERROR					0	//no error
#define	 HIK_DECODER_PARA_OVER					1	//input parameter is invalid;
#define  HIK_DECODER_ORDER_ERROR				2	//The order of the function to be called is error.
#define	 HIK_DECODER_ALLOC_MEMORY_ERROR			3	//Allocate memory failed.
#define  HIK_DECODER_FILE_HDR_UNKNOWN			4   //File Hdr unkonwn
#define  HIK_DECODER_VERSION_INCORRECT			5	//The version of decoder and encoder is not adapted.
#define  HIK_DECODER_SYS_NOT_SUPPORT			6   //Sys error
#define  HIK_DECODER_INIT_VDECODER_ERROR		7	//Initialize VDecoder failed.
#define  HIK_DECODER_INIT_ADECODER_ERROR		8   //Initialize ADecoder failed.
#define  HIK_DECODER_DEC_ERROR					9	//Decode data failed.
#define  HIK_DECODER_BUF_OVER					10  //Source buffer over, need to GetOneFrame
#define  HIK_DECODER_BUF_LACK					11  //Source buffer lack, need to InputData
#define  HIK_DECODER_INVALID_HANDLE				12  //Decoder handle is invalid

//Used by HK_STD_GetOneFrame
#define  AUDIO_TYPE                             0	// audio group
#define  VIDEO_TYPE                             1   // video group


typedef unsigned char  BYTE ;
typedef BYTE *         PBYTE;
typedef void*          HANDLE;

#define __stdcall
#define IN
#define OUT

typedef struct _SYSTEMTIME
{
	long wYear;
	long wMonth;
	long wDayOfWeek;
	long wDay;
	long wHour;
	long wMinute;
	long wSecond;
	long wMilliseconds;
	
	
} SYSTEMTIME;

typedef struct
{
	unsigned long		dwFrameType;				// ÷°¿‡–Õ							Frame type
											// 0-“Ù∆µ÷°							AUDIO_TYPE-(WAVE_FORMAT_PCM)
											// 1- ”∆µ÷°						    VIDEO_TYPE-(YUV_FOMAT_YV12)
	PBYTE		pFrameBuffer;				// ª∫¥Ê«¯µÿ÷∑						OutPut Frame Buffer
	unsigned long		dwWidthOrChannels;			//  ”∆µøÌªÚ’ﬂ“Ù∆µÕ®µ¿ ˝				Video: width;		Audio: channels
	unsigned long		dwHeightOrBPS;				//  ”∆µ∏ﬂªÚ’ﬂ“Ù∆µ≤…—˘µ„∏ˆ ˝			Video: height;		Audio: bits/sample
	unsigned long		dwFrameRate;				// ÷°¬ /≤…—˘¬ 						Video: framerate;	Audio: samples/sec
	unsigned long		dwFrameSize;				// ÷°µƒ¥Û–°							Frame size
	unsigned long	    dwFrameNum;					// ÷°∫≈
	unsigned long       dwTimeStamp;				// œ‡∂‘ ±º‰¥¡£¨µ•Œª∫¡√Î			    Comparative time stamp in ms
	unsigned long	    dwReserved[4];				// ‘§¡Ù								Reserved
	SYSTEMTIME  strSysTime;					// æ¯∂‘ ±º‰(ƒÍ:‘¬:»’: ±:∑÷:√Î:∫¡√Î) AbsoluteTime

} STD_FRAME_INFO;

/******************************************************************************
* Function£∫
		Initialize DycHikSingleThreadDecode SDK.

* Parameter£∫
		[in]  pFileHdrBuffer - Pointer to the buffer of file header.
        [in]  dwFileHdrSize - Size of file header.
        [in]  dwBufferSize - The parameter set the size of buffer allocate by the
		                     SDK to buffer the data input. Suggested value
							 for reference:
								°‹CIF: °‹200KB;
								°‹4CIF: °‹1MB;.

		[out] hHanlde - Handle to operate decoder.

*
* Return Values£∫
		TRUE - Initialize succeed.
		FALSE - Initialize failed.

* Remarks£∫
******************************************************************************/
BOOL __stdcall HK_STD_CreateHandle(IN PBYTE pFileHdrBuffer, IN unsigned long dwFileHdrSize, IN unsigned long dwBufferSize, OUT HANDLE & hHandle);

/******************************************************************************
* Function£∫
		Send data to the buffer of SDK , data input cannot exceed dwBufferSize
		defined in HK_STD_CreateHandle per time.

* Parameter£∫
		[in]  hHandle - Handle of decoder.
		[in]  pDataBuf - Pointer to the buffer for data to decode.
		[in]  dwDataBufSize - Size of data in buffer pointed by pDataBuf.
*
* Return Values£∫
		TRUE - Input data succeed.
		FALSE - Input data failed. To get extended error information, call
		        HK_STD_GetLastError.

* Remarks£∫
******************************************************************************/
BOOL __stdcall HK_STD_InputData(IN HANDLE hHandle, IN PBYTE pDataBuf, IN unsigned long dwDataBufSize);

/******************************************************************************
* Function£∫
		Get data decoded frame by frame via structure STD_FRAME_INFO.

* Parameter£∫
		[in]  hHandle - Handle of decoder.
	    [out] pFrameInfo - Pointer to structure STD_FRAME_INFO.
*
* Return Values£∫
		TRUE - Get one frame data decoded succeed.
        FALSE - No more frame decoded in buffer of decoder.

* Remarks£∫
        This function should be called incessantly after HK_STD_InputData until
		it return FALSE
******************************************************************************/
BOOL __stdcall HK_STD_GetOneFrame(IN HANDLE hHandle, OUT STD_FRAME_INFO* pFrameInfo);

/******************************************************************************
* Function£∫
		Release resource of decoder when it is not needed any more.

* Parameter£∫
		[in]  hHandle - Handle of decoder.
*
* Return Values£∫
		TRUE - Function succeeds.
		FALSE - Function failed. To get extended error information, call
		        HK_STD_GetLastError.

* Remarks£∫
******************************************************************************/
BOOL __stdcall HK_STD_DestroyHandle(IN HANDLE hHandle);

/******************************************************************************
* Function£∫
		Get last-error code

* Parameter£∫
		[in]  hHandle - Handle of decoder.
		[out] dwErrorCode - The reference will return last-error code if
		                    function succeeds.
*
* Return Values£∫
		TRUE - Function succeeds.
		FALSE - Function failed.

* Remarks£∫
******************************************************************************/
BOOL __stdcall HK_STD_GetLastError(IN HANDLE hHandle, OUT unsigned long & dwErrorCode);

/******************************************************************************
* Function£∫
		Decoder can give up decoding one or both two B frames in a 'PBB'
		group. This function can set the number of B frame not to decode.
* Parameter£∫
		[in]  hHandle - Handle of decoder.
		[in]  nNum - Number of B frames to be thrown(not to decode).
		             Range for reference:
						0  Not to throw any B frame in a 'PBB' group
						1  Throw one B frame each 'PBB' group
						2  Throw both two B frames each 'PBB' group
*
* Return Values£∫
		The function return previous throw-B-frame number.

* Remarks£∫
******************************************************************************/
unsigned long __stdcall HK_STD_SetThrowBFrameNum(IN HANDLE hHandle, IN unsigned long nNum);

/******************************************************************************
* Function£∫
		This function can skip audio frame data in decode process.
* Parameter£∫
		[in]  hHandle - Handle of decoder.
		[in]  bState  - Statement of the skip audio:
		                  TRUE   skip
						  FALSE  not skip
*
* Return Values£∫
		TRUE - Function succeeds.
		FALSE - Function failed.

* Remarks£∫
******************************************************************************/
BOOL __stdcall HK_STD_SetSkipAudio(IN HANDLE hHandle, IN BOOL bSkip);

/******************************************************************************
* Function£∫
		This function set secretkey.
* Parameter£∫
		[in]  hHandle - Handle of decoder.
		[in]  lKeyType - Type of secretkey.
		[in]  pSecretKey - Pointer to secretkey
		[in]  lKeyLen - Length of secretkey
*
* Return Values£∫
		TRUE - Function succeeds.
		FALSE - Function failed.

* Remarks£∫
******************************************************************************/
BOOL __stdcall HK_STD_SetSecretKey(IN HANDLE hHandle, IN long lKeyType, IN char* pSecretKey, IN long lKeyLen);

/******************************************************************************
* Function£∫
		This function can skip video frame data in decode process.
* Parameter£∫
		[in]  hHandle - Handle of decoder.
		[in]  bState  - Statement of the skip audio:
		                  TRUE   skip
						  FALSE  not skip
*
* Return Values£∫
		TRUE - Function succeeds.
		FALSE - Function failed.

* Remarks£∫
******************************************************************************/
BOOL __stdcall HK_STD_SetSkipVideo(IN HANDLE hHandle, IN BOOL bSkip);

#endif
