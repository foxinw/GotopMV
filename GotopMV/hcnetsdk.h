#ifndef _HC_NET_SDK_H_
#define _HC_NET_SDK_H_


#ifdef __cpluscplus
#define NET_DVR_API extern
#else
#define NET_DVR_API
#endif




#ifdef __cplusplus
extern "C"
{
#endif
    
#ifndef __PLAYRECT_defined
#define __PLAYRECT_defined
    typedef struct __PLAYRECT
    {
        int x;                               
        int y;                                  
        int uWidth;                            
        int uHeight;                            
    }PLAYRECT;
#endif
    
#ifndef __HWND_defined
#define __HWND_defined
    typedef PLAYRECT HWND;
#endif
    
    typedef struct tagInitInfo
    {
        int uWidth;
        int uHeight;
    }INITINFO;
    
    
    typedef 	uint32_t  		DWORD ;
    typedef   	uint16_t 		WORD;
    typedef		uint16_t  		USHORT ;
//    typedef  	unsigned char	BYTE ;
    typedef 	int32_t			LONG ;
    //typedef 	uint32_t		BOOL ;   //typedef signed char BOOL   in objc.h
    
    typedef     uint32_t    	UINT;
    typedef 	void* 			LPVOID;
//    typedef 	void* 			HANDLE;
    typedef     uint32_t* 	    LPDWORD;
    typedef     uint16_t*       LPWORD;
    
#define 	TRUE	1
#define		FALSE	0
#define     __stdcall 
#define     CALLBACK 
    
    
    
    //�궨��
#define MAX_NAMELEN			    16		//DVR���ص�½��
#define MAX_RIGHT			    32		//�豸֧�ֵ�Ȩ�ޣ�1-12��ʾ����Ȩ�ޣ�13-32��ʾԶ��Ȩ�ޣ�
#define NAME_LEN			    32      //�û�������
#define PASSWD_LEN			    16      //���볤��
#define SERIALNO_LEN		    48      //���кų���
#define MACADDR_LEN			    6       //mac��ַ����
#define MAX_ETHERNET		    2       //�豸������̫����
#define PATHNAME_LEN		    128     //·������
    
#define MAX_TIMESEGMENT_V30	    8       //9000�豸���ʱ�����
#define MAX_TIMESEGMENT		    4       //8000�豸���ʱ�����
    
#define MAX_SHELTERNUM			4       //8000�豸����ڵ�������
#define MAX_DAYS				7       //ÿ������
#define PHONENUMBER_LEN			32      //pppoe���ź�����󳤶�
    
#define MAX_DISKNUM_V30			33		//9000�豸���Ӳ����/* ���33��Ӳ��(����16������SATAӲ�̡�1��eSATAӲ�̺�16��NFS��) */
#define MAX_DISKNUM		        16      //8000�豸���Ӳ����
#define MAX_DISKNUM_V10		    8       //1.2�汾֮ǰ�汾
    
#define MAX_WINDOW_V30			32      //9000�豸������ʾ��󲥷Ŵ�����
#define MAX_WINDOW				16      //8000�豸���Ӳ����
#define MAX_VGA_V30				4       //9000�豸���ɽ�VGA��
#define MAX_VGA			    	1       //8000�豸���ɽ�VGA��
    
#define MAX_USERNUM_V30			32      //9000�豸����û���
#define MAX_USERNUM			    16      //8000�豸����û���
#define MAX_EXCEPTIONNUM_V30	32      //9000�豸����쳣������
#define MAX_EXCEPTIONNUM		16      //8000�豸����쳣������
#define MAX_LINK				6       //8000�豸��ͨ�������Ƶ��������
    
#define MAX_DECPOOLNUM			4       //��·������ÿ������ͨ������ѭ��������
#define MAX_DECNUM				4       //��·��������������ͨ������ʵ��ֻ��һ������������������
#define MAX_TRANSPARENTNUM		2       //��·���������������͸��ͨ����
#define MAX_CYCLE_CHAN			16      //��·�����������ѭͨ����
#define MAX_DIRNAME_LENGTH		80      //���Ŀ¼����
    
#define MAX_STRINGNUM_V30		8		//9000�豸���OSD�ַ�������
#define MAX_STRINGNUM			4       //8000�豸���OSD�ַ�������
#define MAX_STRINGNUM_EX		8       //8000������չ
#define MAX_AUXOUT_V30			16      //9000�豸����������
#define MAX_AUXOUT			    4       //8000�豸����������
#define MAX_HD_GROUP			16      //9000�豸���Ӳ������
#define MAX_NFS_DISK			8       //8000�豸���NFSӲ����
    
#define IW_ESSID_MAX_SIZE	    32      //WIFI��SSID�ų���
#define IW_ENCODING_TOKEN_MAX	32      //WIFI��������ֽ���
#define MAX_SERIAL_NUM			64	    //���֧�ֵ�͸��ͨ��·��
#define MAX_DDNS_NUMS	        10      //9000�豸������ddns��
#define MAX_DOMAIN_NAME		    64		/* ����������� */
#define MAX_EMAIL_ADDR_LEN	    48      //���email��ַ����
#define MAX_EMAIL_PWD_LEN		32      //���email���볤��
    
#define MAXPROGRESS		        100     //�ط�ʱ�����ٷ���
#define MAX_SERIALNUM	        2       //8000�豸֧�ֵĴ����� 1-232�� 2-485
#define CARDNUM_LEN		        20      //���ų���
#define MAX_VIDEOOUT_V30        4       //9000�豸����Ƶ�����
#define MAX_VIDEOOUT	        2       //8000�豸����Ƶ�����
    
#define MAX_PRESET_V30			    256		/* 9000�豸֧�ֵ���̨Ԥ�õ��� */
#define MAX_TRACK_V30			    256		/* 9000�豸֧�ֵ���̨�켣�� */
#define MAX_CRUISE_V30			    256		/* 9000�豸֧�ֵ���̨Ѳ���� */
#define MAX_PRESET				    128		/* 8000�豸֧�ֵ���̨Ԥ�õ��� */
#define MAX_TRACK				    128		/* 8000�豸֧�ֵ���̨�켣�� */
#define MAX_CRUISE				    128		/* 8000�豸֧�ֵ���̨Ѳ���� */
    
#define CRUISE_MAX_PRESET_NUMS	    32 	    /* һ��Ѳ������Ѳ���� */
    
#define MAX_SERIAL_PORT             8       //9000�豸֧��232������
#define MAX_PREVIEW_MODE            8       /* �豸֧�����Ԥ��ģʽ��Ŀ 1����,4����,9����,16����.... */
#define MAX_MATRIXOUT               16      /* ���ģ������������ */
#define LOG_INFO_LEN                11840   /* ��־������Ϣ */
#define DESC_LEN                    16      /* ��̨�����ַ������� */
#define PTZ_PROTOCOL_NUM            200     /* 9000���֧�ֵ���̨Э���� */
    
#define MAX_AUDIO			        1       //8000�����Խ�ͨ����
#define MAX_AUDIO_V30			    2       //9000�����Խ�ͨ����
#define MAX_CHANNUM			        16      //8000�豸���ͨ����
#define MAX_ALARMIN			        16      //8000�豸��󱨾�������
#define MAX_ALARMOUT		        4       //8000�豸��󱨾������
    //9000 IPC����
#define MAX_ANALOG_CHANNUM          32      //���32��ģ��ͨ��
#define MAX_ANALOG_ALARMOUT         32      //���32·ģ�ⱨ����� 
#define MAX_ANALOG_ALARMIN          32      //���32·ģ�ⱨ������
    
#define MAX_IP_DEVICE               32      //�����������IP�豸��
#define MAX_IP_CHANNEL              32      //�����������IPͨ����
#define MAX_IP_ALARMIN              128     //����������౨��������
#define MAX_IP_ALARMOUT             64      //����������౨�������
    
    /* ���֧�ֵ�ͨ���� ���ģ��������IP֧�� */
#define MAX_CHANNUM_V30               ( MAX_ANALOG_CHANNUM + MAX_IP_CHANNEL )//64
#define MAX_ALARMOUT_V30              ( MAX_ANALOG_ALARMOUT + MAX_IP_ALARMOUT )//96
#define MAX_ALARMIN_V30               ( MAX_ANALOG_ALARMIN + MAX_IP_ALARMIN )//160
    
    /*******************ȫ�ִ����� begin**********************/	
#define NET_DVR_FAIL 						-1
#define NET_DVR_NOERROR 					0	//û�д���
#define NET_DVR_PASSWORD_ERROR 				1	//�û����������
#define NET_DVR_NOENOUGHPRI 				2	//Ȩ�޲���
#define NET_DVR_NOINIT 						3	//û�г�ʼ��
#define NET_DVR_CHANNEL_ERROR 				4	//ͨ���Ŵ���
#define NET_DVR_OVER_MAXLINK 				5	//���ӵ�DVR�Ŀͻ��˸����������
#define NET_DVR_VERSIONNOMATCH				6	//�汾��ƥ��
#define NET_DVR_NETWORK_FAIL_CONNECT		7	//���ӷ�����ʧ��
#define NET_DVR_NETWORK_SEND_ERROR			8	//�����������ʧ��
#define NET_DVR_NETWORK_RECV_ERROR			9	//�ӷ�������������ʧ��
#define NET_DVR_NETWORK_RECV_TIMEOUT		10	//�ӷ������������ݳ�ʱ
#define NET_DVR_NETWORK_ERRORDATA			11	//���͵���������
#define NET_DVR_ORDER_ERROR					12	//���ô������
#define NET_DVR_OPERNOPERMIT				13	//�޴�Ȩ��
#define NET_DVR_COMMANDTIMEOUT				14	//DVR����ִ�г�ʱ
#define NET_DVR_ERRORSERIALPORT				15	//���ںŴ���
#define NET_DVR_ERRORALARMPORT				16	//�����˿ڴ���
#define NET_DVR_PARAMETER_ERROR 			17  //��������
#define NET_DVR_CHAN_EXCEPTION				18	//������ͨ�����ڴ���״̬
#define NET_DVR_NODISK						19	//û��Ӳ��
#define NET_DVR_ERRORDISKNUM				20	//Ӳ�̺Ŵ���
#define NET_DVR_DISK_FULL					21	//������Ӳ����
#define NET_DVR_DISK_ERROR					22	//������Ӳ�̳���
#define NET_DVR_NOSUPPORT					23	//��������֧��
#define NET_DVR_BUSY						24	//������æ
#define NET_DVR_MODIFY_FAIL					25	//�������޸Ĳ��ɹ�
#define NET_DVR_PASSWORD_FORMAT_ERROR		26	//���������ʽ����ȷ
#define NET_DVR_DISK_FORMATING				27	//Ӳ�����ڸ�ʽ����������������
#define NET_DVR_DVRNORESOURCE				28	//DVR��Դ����
#define	NET_DVR_DVROPRATEFAILED				29  //DVR����ʧ��
#define NET_DVR_OPENHOSTSOUND_FAIL 			30  //��PC����ʧ��
#define NET_DVR_DVRVOICEOPENED 				31  //�����������Խ���ռ��
#define	NET_DVR_TIMEINPUTERROR				32  //ʱ�����벻��ȷ
#define	NET_DVR_NOSPECFILE					33  //�ط�ʱ������û��ָ�����ļ�
#define NET_DVR_CREATEFILE_ERROR			34	//�����ļ�����
#define	NET_DVR_FILEOPENFAIL				35  //���ļ�����
#define	NET_DVR_OPERNOTFINISH				36  //�ϴεĲ�����û�����
#define	NET_DVR_GETPLAYTIMEFAIL				37  //��ȡ��ǰ���ŵ�ʱ�����
#define	NET_DVR_PLAYFAIL					38  //���ų���
#define NET_DVR_FILEFORMAT_ERROR			39  //�ļ���ʽ����ȷ
#define NET_DVR_DIR_ERROR					40	//·������
#define NET_DVR_ALLOC_RESOURCE_ERROR		41  //��Դ�������
#define NET_DVR_AUDIO_MODE_ERROR			42	//����ģʽ����
#define NET_DVR_NOENOUGH_BUF				43	//������̫С
#define NET_DVR_CREATESOCKET_ERROR		 	44	//����SOCKET����
#define NET_DVR_SETSOCKET_ERROR				45	//����SOCKET����
#define NET_DVR_MAX_NUM						46	//�����ﵽ���
#define NET_DVR_USERNOTEXIST				47	//�û�������
#define NET_DVR_WRITEFLASHERROR				48  //дFLASH����
#define NET_DVR_UPGRADEFAIL					49  //DVR����ʧ��
#define NET_DVR_CARDHAVEINIT				50  //���뿨�Ѿ���ʼ����
#define NET_DVR_PLAYERFAILED				51	//���ò��ſ���ĳ������ʧ��
#define NET_DVR_MAX_USERNUM					52  //�豸���û����ﵽ���
#define NET_DVR_GETLOCALIPANDMACFAIL		53  //��ÿͻ��˵�IP��ַ�������ַʧ��
#define NET_DVR_NOENCODEING					54	//��ͨ��û�б���
#define NET_DVR_IPMISMATCH					55	//IP��ַ��ƥ��
#define NET_DVR_MACMISMATCH					56	//MAC��ַ��ƥ��
#define NET_DVR_UPGRADELANGMISMATCH			57	//�����ļ����Բ�ƥ��
#define NET_DVR_MAX_PLAYERPORT				58	//������·���ﵽ���
#define NET_DVR_NOSPACEBACKUP				59	//�����豸��û���㹻�ռ���б���
#define NET_DVR_NODEVICEBACKUP				60	//û���ҵ�ָ���ı����豸
#define NET_DVR_PICTURE_BITS_ERROR			61	//ͼ����λ����������24ɫ
#define NET_DVR_PICTURE_DIMENSION_ERROR		62	//ͼƬ��*���ޣ� ��128*256
#define NET_DVR_PICTURE_SIZ_ERROR			63	//ͼƬ��С���ޣ���100K
#define NET_DVR_LOADPLAYERSDKFAILED			64	//���뵱ǰĿ¼��Player Sdk����
#define NET_DVR_LOADPLAYERSDKPROC_ERROR		65	//�Ҳ���Player Sdk��ĳ���������
#define NET_DVR_LOADDSSDKFAILED				66	//���뵱ǰĿ¼��DSsdk����
#define NET_DVR_LOADDSSDKPROC_ERROR		    67	//�Ҳ���DsSdk��ĳ���������
#define NET_DVR_DSSDK_ERROR					68	//����Ӳ�����DsSdk��ĳ������ʧ��
#define NET_DVR_VOICEMONOPOLIZE				69	//��������ռ
#define NET_DVR_JOINMULTICASTFAILED			70	//����ಥ��ʧ��
#define NET_DVR_CREATEDIR_ERROR				71	//������־�ļ�Ŀ¼ʧ��
#define NET_DVR_BINDSOCKET_ERROR			72	//���׽���ʧ��
#define NET_DVR_SOCKETCLOSE_ERROR			73	//socket�����жϣ��˴���ͨ�������������жϻ�Ŀ�ĵز��ɴ�
#define NET_DVR_USERID_ISUSING			    74	//ע��ʱ�û�ID���ڽ���ĳ����
#define NET_DVR_SOCKETLISTEN_ERROR			75	//����ʧ��
#define NET_DVR_PROGRAM_EXCEPTION			76	//�����쳣
#define NET_DVR_WRITEFILE_FAILED			77	//д�ļ�ʧ��
#define NET_DVR_FORMAT_READONLY				78  //��ֹ��ʽ��ֻ��Ӳ��
#define NET_DVR_WITHSAMEUSERNAME		    79  //�û����ýṹ�д�����ͬ���û���
#define NET_DVR_DEVICETYPE_ERROR            80  /*�������ʱ�豸�ͺŲ�ƥ��*/
#define NET_DVR_LANGUAGE_ERROR              81  /*�������ʱ���Բ�ƥ��*/
#define NET_DVR_PARAVERSION_ERROR           82  /*�������ʱ����汾��ƥ��*/
#define NET_DVR_IPCHAN_NOTALIVE             83  /*Ԥ��ʱ���IPͨ��������*/
#define NET_DVR_RTSP_SDK_ERROR				84	/*���ظ���IPCͨѶ��StreamTransClientʧ��*/
#define NET_DVR_CONVERT_SDK_ERROR			85	/*����ת���CVT_StdToHikʧ��*/
#define NET_DVR_IPC_COUNT_OVERFLOW			86  /*��������ip����ͨ����*/
    
    /*******************ȫ�ִ����� end**********************/
    
    /*************************************************
     NET_DVR_IsSupport()����ֵ
     1��9λ�ֱ��ʾ������Ϣ��λ����TRUE)��ʾ֧�֣�
     **************************************************/
#define NET_DVR_SUPPORT_DDRAW			0x01//֧��DIRECTDRAW�������֧�֣��򲥷������ܹ�����
#define NET_DVR_SUPPORT_BLT				0x02//�Կ�֧��BLT�����������֧�֣��򲥷������ܹ�����
#define NET_DVR_SUPPORT_BLTFOURCC		0x04//�Կ�BLT֧����ɫת���������֧�֣��������������������RGBת����
#define NET_DVR_SUPPORT_BLTSHRINKX		0x08//�Կ�BLT֧��X����С�������֧�֣�ϵͳ�����������ת����
#define NET_DVR_SUPPORT_BLTSHRINKY		0x10//�Կ�BLT֧��Y����С�������֧�֣�ϵͳ�����������ת����
#define NET_DVR_SUPPORT_BLTSTRETCHX		0x20//�Կ�BLT֧��X��Ŵ������֧�֣�ϵͳ�����������ת����
#define NET_DVR_SUPPORT_BLTSTRETCHY		0x40//�Կ�BLT֧��Y��Ŵ������֧�֣�ϵͳ�����������ת����
#define NET_DVR_SUPPORT_SSE				0x80//CPU֧��SSEָ�Intel Pentium3����֧��SSEָ�
#define NET_DVR_SUPPORT_MMX				0x100//CPU֧��MMXָ���Intel Pentium3����֧��SSEָ�
    
    /**********************��̨�������� begin*************************/	
#define LIGHT_PWRON		2	/* ��ͨ�ƹ��Դ */
#define WIPER_PWRON		3	/* ��ͨ��ˢ���� */
#define FAN_PWRON		4	/* ��ͨ���ȿ��� */
#define HEATER_PWRON	5	/* ��ͨ���������� */
#define AUX_PWRON1		6	/* ��ͨ�����豸���� */
#define AUX_PWRON2		7	/* ��ͨ�����豸���� */
#define SET_PRESET		8	/* ����Ԥ�õ� */
#define CLE_PRESET		9	/* ���Ԥ�õ� */
    
#define ZOOM_IN			11	/* �������ٶ�SS���(���ʱ��) */
#define ZOOM_OUT		12	/* �������ٶ�SS��С(���ʱ�С) */
#define FOCUS_NEAR      13  /* �������ٶ�SSǰ�� */
#define FOCUS_FAR       14  /* �������ٶ�SS��� */
#define IRIS_OPEN       15  /* ��Ȧ���ٶ�SS���� */
#define IRIS_CLOSE      16  /* ��Ȧ���ٶ�SS��С */
    
#define TILT_UP			21	/* ��̨��SS���ٶ����� */
#define TILT_DOWN		22	/* ��̨��SS���ٶ��¸� */
#define PAN_LEFT		23	/* ��̨��SS���ٶ���ת */
#define PAN_RIGHT		24	/* ��̨��SS���ٶ���ת */
#define UP_LEFT			25	/* ��̨��SS���ٶ���������ת */
#define UP_RIGHT		26	/* ��̨��SS���ٶ���������ת */
#define DOWN_LEFT		27	/* ��̨��SS���ٶ��¸�����ת */
#define DOWN_RIGHT		28	/* ��̨��SS���ٶ��¸�����ת */
#define PAN_AUTO		29	/* ��̨��SS���ٶ������Զ�ɨ�� */
    
#define FILL_PRE_SEQ	30	/* ��Ԥ�õ����Ѳ������ */
#define SET_SEQ_DWELL	31	/* ����Ѳ����ͣ��ʱ�� */
#define SET_SEQ_SPEED	32	/* ����Ѳ���ٶ� */
#define CLE_PRE_SEQ		33	/* ��Ԥ�õ��Ѳ��������ɾ�� */
#define STA_MEM_CRUISE	34	/* ��ʼ��¼�켣 */
#define STO_MEM_CRUISE	35	/* ֹͣ��¼�켣 */
#define RUN_CRUISE		36	/* ��ʼ�켣 */
#define RUN_SEQ			37	/* ��ʼѲ�� */
#define STOP_SEQ		38	/* ֹͣѲ�� */
#define GOTO_PRESET		39	/* ����ת��Ԥ�õ� */
    
    /**********************��̨�������� end*************************/	
    
    /*************************************************
     �ط�ʱ���ſ�������궨�� 
     NET_DVR_PlayBackControl
     NET_DVR_PlayControlLocDisplay
     NET_DVR_DecPlayBackCtrl�ĺ궨��
     ����֧�ֲ鿴����˵���ʹ���
     **************************************************/	
#define NET_DVR_PLAYSTART		1//��ʼ����
#define NET_DVR_PLAYSTOP		2//ֹͣ����
#define NET_DVR_PLAYPAUSE		3//��ͣ����
#define NET_DVR_PLAYRESTART		4//�ָ�����
#define NET_DVR_PLAYFAST		5//���
#define NET_DVR_PLAYSLOW		6//����
#define NET_DVR_PLAYNORMAL		7//�����ٶ�
#define NET_DVR_PLAYFRAME		8//��֡��
#define NET_DVR_PLAYSTARTAUDIO	9//������
#define NET_DVR_PLAYSTOPAUDIO	10//�ر�����
#define NET_DVR_PLAYAUDIOVOLUME	11//��������
#define NET_DVR_PLAYSETPOS		12//�ı��ļ��طŵĽ���
#define NET_DVR_PLAYGETPOS		13//��ȡ�ļ��طŵĽ���
#define NET_DVR_PLAYGETTIME		14//��ȡ��ǰ�Ѿ����ŵ�ʱ��(���ļ��طŵ�ʱ����Ч)
#define NET_DVR_PLAYGETFRAME	15//��ȡ��ǰ�Ѿ����ŵ�֡��(���ļ��طŵ�ʱ����Ч)
#define NET_DVR_GETTOTALFRAMES  16//��ȡ��ǰ�����ļ��ܵ�֡��(���ļ��طŵ�ʱ����Ч)
#define NET_DVR_GETTOTALTIME    17//��ȡ��ǰ�����ļ��ܵ�ʱ��(���ļ��طŵ�ʱ����Ч)
#define NET_DVR_THROWBFRAME		20//��B֡
#define NET_DVR_SETSPEED		24//���������ٶ�
#define NET_DVR_KEEPALIVE		25//�������豸������(����ص�����������2�뷢��һ��)
    
    //Զ�̰����������£�
    /* key value send to CONFIG program */
#define KEY_CODE_1 1
#define KEY_CODE_2 2
#define KEY_CODE_3 3
#define KEY_CODE_4 4
#define KEY_CODE_5 5
#define KEY_CODE_6 6
#define KEY_CODE_7 7
#define KEY_CODE_8 8
#define KEY_CODE_9 9
#define KEY_CODE_0 10
#define KEY_CODE_POWER 11
#define KEY_CODE_MENU 12
#define KEY_CODE_ENTER 13
#define KEY_CODE_CANCEL 14
#define KEY_CODE_UP 15
#define KEY_CODE_DOWN 16
#define KEY_CODE_LEFT 17
#define KEY_CODE_RIGHT 18
#define KEY_CODE_EDIT 19
#define KEY_CODE_ADD 20
#define KEY_CODE_MINUS 21
#define KEY_CODE_PLAY 22
#define KEY_CODE_REC 23
#define KEY_CODE_PAN 24
#define KEY_CODE_M 25
#define KEY_CODE_A 26
#define KEY_CODE_F1 27
#define KEY_CODE_F2 28
    
    /* for PTZ control */
#define KEY_PTZ_UP_START KEY_CODE_UP
#define KEY_PTZ_UP_STOP 32
    
#define KEY_PTZ_DOWN_START KEY_CODE_DOWN
#define KEY_PTZ_DOWN_STOP 33
    
#define KEY_PTZ_LEFT_START KEY_CODE_LEFT
#define KEY_PTZ_LEFT_STOP 34
    
#define KEY_PTZ_RIGHT_START KEY_CODE_RIGHT
#define KEY_PTZ_RIGHT_STOP 35
    
#define KEY_PTZ_AP1_START KEY_CODE_EDIT /* ��Ȧ+ */
#define KEY_PTZ_AP1_STOP 36
    
#define KEY_PTZ_AP2_START KEY_CODE_PAN /* ��Ȧ- */
#define KEY_PTZ_AP2_STOP 37
    
#define KEY_PTZ_FOCUS1_START KEY_CODE_A /* �۽�+ */
#define KEY_PTZ_FOCUS1_STOP 38
    
#define KEY_PTZ_FOCUS2_START KEY_CODE_M /* �۽�- */
#define KEY_PTZ_FOCUS2_STOP 39
    
#define KEY_PTZ_B1_START 40 /* �䱶+ */
#define KEY_PTZ_B1_STOP 41
    
#define KEY_PTZ_B2_START 42 /* �䱶- */
#define KEY_PTZ_B2_STOP 43
    
    //9000����
#define KEY_CODE_11 44
#define KEY_CODE_12 45
#define KEY_CODE_13 46
#define KEY_CODE_14 47
#define KEY_CODE_15 48
#define KEY_CODE_16 49
    
    /*************************������������ begin*******************************/
    //����NET_DVR_SetDVRConfig��NET_DVR_GetDVRConfig,ע�����Ӧ�����ýṹ
    
#define NET_DVR_GET_DEVICECFG		100		//��ȡ�豸����
#define NET_DVR_SET_DEVICECFG		101		//�����豸����
#define NET_DVR_GET_NETCFG			102		//��ȡ�������
#define NET_DVR_SET_NETCFG			103		//�����������
#define NET_DVR_GET_PICCFG			104		//��ȡͼ�����
#define NET_DVR_SET_PICCFG			105		//����ͼ�����
#define NET_DVR_GET_COMPRESSCFG		106		//��ȡѹ������
#define NET_DVR_SET_COMPRESSCFG		107		//����ѹ������
#define NET_DVR_GET_RECORDCFG		108		//��ȡ¼��ʱ�����
#define NET_DVR_SET_RECORDCFG		109		//����¼��ʱ�����
#define NET_DVR_GET_DECODERCFG		110		//��ȡ����������
#define NET_DVR_SET_DECODERCFG		111		//���ý���������
#define NET_DVR_GET_RS232CFG 		112		//��ȡ232���ڲ���
#define NET_DVR_SET_RS232CFG		113		//����232���ڲ���
#define NET_DVR_GET_ALARMINCFG 		114		//��ȡ�����������
#define NET_DVR_SET_ALARMINCFG		115		//���ñ����������
#define NET_DVR_GET_ALARMOUTCFG 	116		//��ȡ�����������
#define NET_DVR_SET_ALARMOUTCFG		117		//���ñ����������
#define NET_DVR_GET_TIMECFG 		118		//��ȡDVRʱ��
#define NET_DVR_SET_TIMECFG			119		//����DVRʱ��
#define NET_DVR_GET_PREVIEWCFG 		120		//��ȡԤ������
#define NET_DVR_SET_PREVIEWCFG		121		//����Ԥ������
#define NET_DVR_GET_VIDEOOUTCFG 	122		//��ȡ��Ƶ�������
#define NET_DVR_SET_VIDEOOUTCFG		123		//������Ƶ�������
#define NET_DVR_GET_USERCFG 		124		//��ȡ�û�����
#define NET_DVR_SET_USERCFG			125		//�����û�����
#define NET_DVR_GET_EXCEPTIONCFG 	126		//��ȡ�쳣����
#define NET_DVR_SET_EXCEPTIONCFG	127		//�����쳣����
#define NET_DVR_GET_ZONEANDDST		128		//��ȡʱ������ʱ�Ʋ���
#define NET_DVR_SET_ZONEANDDST		129		//����ʱ������ʱ�Ʋ���
#define NET_DVR_GET_SHOWSTRING		130		//��ȡ�����ַ�����
#define NET_DVR_SET_SHOWSTRING		131		//���õ����ַ�����
#define NET_DVR_GET_EVENTCOMPCFG	132		//��ȡ�¼�����¼�����
#define NET_DVR_SET_EVENTCOMPCFG	133		//�����¼�����¼�����
    
#define NET_DVR_GET_AUXOUTCFG		140		//��ȡ�������������������(HS�豸�������2006-02-28)
#define NET_DVR_SET_AUXOUTCFG		141		//���ñ������������������(HS�豸�������2006-02-28)
#define NET_DVR_GET_PREVIEWCFG_AUX 	142		//��ȡ-sϵ��˫���Ԥ������(-sϵ��˫���2006-04-13)
#define NET_DVR_SET_PREVIEWCFG_AUX	143		//����-sϵ��˫���Ԥ������(-sϵ��˫���2006-04-13)
    
#define NET_DVR_GET_PICCFG_EX		200		//��ȡͼ�����(SDK_V14��չ����)
#define NET_DVR_SET_PICCFG_EX		201		//����ͼ�����(SDK_V14��չ����)
#define NET_DVR_GET_USERCFG_EX 		202		//��ȡ�û�����(SDK_V15��չ����)
#define NET_DVR_SET_USERCFG_EX		203		//�����û�����(SDK_V15��չ����)
#define NET_DVR_GET_COMPRESSCFG_EX	204		//��ȡѹ������(SDK_V15��չ����2006-05-15)
#define NET_DVR_SET_COMPRESSCFG_EX	205		//����ѹ������(SDK_V15��չ����2006-05-15)
    
    
#define NET_DVR_GET_NETAPPCFG		222		//��ȡ����Ӧ�ò��� NTP/DDNS/EMAIL
#define NET_DVR_SET_NETAPPCFG		223		//��������Ӧ�ò��� NTP/DDNS/EMAIL
#define NET_DVR_GET_NTPCFG			224		//��ȡ����Ӧ�ò��� NTP
#define NET_DVR_SET_NTPCFG			225		//��������Ӧ�ò��� NTP
#define NET_DVR_GET_DDNSCFG			226		//��ȡ����Ӧ�ò��� DDNS
#define NET_DVR_SET_DDNSCFG			227		//��������Ӧ�ò��� DDNS
    //��ӦNET_DVR_EMAILPARA
#define NET_DVR_GET_EMAILCFG		228		//��ȡ����Ӧ�ò��� EMAIL
#define NET_DVR_SET_EMAILCFG		229		//��������Ӧ�ò��� EMAIL
    
#define NET_DVR_GET_NFSCFG			230		/* NFS disk config */
#define NET_DVR_SET_NFSCFG			231		/* NFS disk config */
    
#define NET_DVR_GET_SHOWSTRING_EX	238		//��ȡ�����ַ�������չ(֧��8���ַ�)
#define NET_DVR_SET_SHOWSTRING_EX	239		//���õ����ַ�������չ(֧��8���ַ�)
#define NET_DVR_GET_NETCFG_OTHER	244		//��ȡ�������
#define NET_DVR_SET_NETCFG_OTHER	245		//�����������
    
    //��ӦNET_DVR_EMAILCFG�ṹ
#define NET_DVR_GET_EMAILPARACFG	250		//Get EMAIL parameters
#define NET_DVR_SET_EMAILPARACFG	251		//Setup EMAIL parameters
    
    
#define NET_DVR_GET_DDNSCFG_EX		274	//��ȡ��չDDNS����
#define NET_DVR_SET_DDNSCFG_EX		275	//������չDDNS����
    
#define	NET_DVR_SET_PTZPOS			292		//��̨����PTZλ��
#define	NET_DVR_GET_PTZPOS			293		//��̨��ȡPTZλ��
#define	NET_DVR_GET_PTZSCOPE		294		//��̨��ȡPTZ��Χ
    
    //
#define NET_DVR_GET_ALLHDCFG        300		//
    
    
    /***************************DS9000��������(_V30) begin *****************************/
    //����(NET_DVR_NETCFG_V30�ṹ)
#define NET_DVR_GET_NETCFG_V30		    1000		//��ȡ�������
#define NET_DVR_SET_NETCFG_V30		    1001		//�����������
    
    //ͼ��(NET_DVR_PICCFG_V30�ṹ)
#define NET_DVR_GET_PICCFG_V30		    1002		//��ȡͼ�����
#define NET_DVR_SET_PICCFG_V30		    1003		//����ͼ�����
    
    //¼��ʱ��(NET_DVR_RECORD_V30�ṹ)
#define NET_DVR_GET_RECORDCFG_V30	    1004		//��ȡ¼�����
#define NET_DVR_SET_RECORDCFG_V30	    1005		//����¼�����
    
    //�û�(NET_DVR_USER_V30�ṹ)
#define NET_DVR_GET_USERCFG_V30 	    1006		//��ȡ�û�����
#define NET_DVR_SET_USERCFG_V30		    1007		//�����û�����
    
    //9000DDNS��������(NET_DVR_DDNSPARA_V30�ṹ)
#define     NET_DVR_GET_DDNSCFG_V30		1010		//��ȡDDNS(9000��չ)
#define     NET_DVR_SET_DDNSCFG_V30		1011		//����DDNS(9000��չ)
    
    //EMAIL����(NET_DVR_EMAILCFG_V30�ṹ)
#define NET_DVR_GET_EMAILCFG_V30		1012	//��ȡEMAIL���� 
#define NET_DVR_SET_EMAILCFG_V30		1013	//����EMAIL���� 
    
    //Ѳ������ (NET_DVR_CRUISE_PARA�ṹ)
#define 	NET_DVR_GET_CRUISE			1020		
#define 	NET_DVR_SET_CRUISE			1021		
    
    
    //��������ṹ���� (NET_DVR_ALARMINCFG_V30�ṹ)
#define 	NET_DVR_GET_ALARMINCFG_V30			1024		
#define 	NET_DVR_SET_ALARMINCFG_V30			1025
    
    //��������ṹ���� (NET_DVR_ALARMOUTCFG_V30�ṹ)
#define 	NET_DVR_GET_ALARMOUTCFG_V30			1026		
#define 	NET_DVR_SET_ALARMOUTCFG_V30			1027
    
    //��Ƶ����ṹ���� (NET_DVR_VIDEOOUT_V30�ṹ)
#define 	NET_DVR_GET_VIDEOOUTCFG_V30			1028		
#define 	NET_DVR_SET_VIDEOOUTCFG_V30			1029	
    
    //�����ַ��ṹ���� (NET_DVR_SHOWSTRING_V30�ṹ)
#define 	NET_DVR_GET_SHOWSTRING_V30			1030		
#define 	NET_DVR_SET_SHOWSTRING_V30			1031
    
    //�쳣�ṹ���� (NET_DVR_EXCEPTION_V30�ṹ)
#define 	NET_DVR_GET_EXCEPTIONCFG_V30		1034		
#define 	NET_DVR_SET_EXCEPTIONCFG_V30		1035
    
    //����232�ṹ���� (NET_DVR_RS232CFG_V30�ṹ)
#define 	NET_DVR_GET_RS232CFG_V30			1036		
#define 	NET_DVR_SET_RS232CFG_V30			1037
    
    //ѹ������ (NET_DVR_COMPRESSIONCFG_V30�ṹ)
#define     NET_DVR_GET_COMPRESSCFG_V30	        1040		
#define     NET_DVR_SET_COMPRESSCFG_V30	        1041		
    
    //��ȡ485���������� (NET_DVR_DECODERCFG_V30�ṹ)
#define     NET_DVR_GET_DECODERCFG_V30		    1042		//��ȡ����������
#define     NET_DVR_SET_DECODERCFG_V30		    1043		//���ý���������
    
    //��ȡԤ������ (NET_DVR_PREVIEWCFG_V30�ṹ)
#define     NET_DVR_GET_PREVIEWCFG_V30		    1044		//��ȡԤ������
#define     NET_DVR_SET_PREVIEWCFG_V30		    1045		//����Ԥ������
    
    //����Ԥ������ (NET_DVR_PREVIEWCFG_AUX_V30�ṹ)
#define     NET_DVR_GET_PREVIEWCFG_AUX_V30		1046		//��ȡ����Ԥ������
#define     NET_DVR_SET_PREVIEWCFG_AUX_V30		1047		//���ø���Ԥ������
    
    //IP�������ò��� ��NET_DVR_IPPARACFG�ṹ��
#define     NET_DVR_GET_IPPARACFG               1048        //��ȡIP����������Ϣ 
#define     NET_DVR_SET_IPPARACFG               1049        //����IP����������Ϣ
    
    //IP��������������ò��� ��NET_DVR_IPALARMINCFG�ṹ��
#define     NET_DVR_GET_IPALARMINCFG            1050        //��ȡIP�����������������Ϣ 
#define     NET_DVR_SET_IPALARMINCFG            1051        //����IP�����������������Ϣ
    
    //IP��������������ò��� ��NET_DVR_IPALARMOUTCFG�ṹ��
#define     NET_DVR_GET_IPALARMOUTCFG           1052        //��ȡIP�����������������Ϣ 
#define     NET_DVR_SET_IPALARMOUTCFG           1053        //����IP�����������������Ϣ
    
    //Ӳ�̹���Ĳ�����ȡ (NET_DVR_HDCFG�ṹ)
#define     NET_DVR_GET_HDCFG			        1054	    //��ȡӲ�̹������ò���
#define     NET_DVR_SET_HDCFG			        1055	    //����Ӳ�̹������ò���
    //�������Ĳ�����ȡ (NET_DVR_HDGROUP_CFG�ṹ)
#define     NET_DVR_GET_HDGROUP_CFG			    1056	    //��ȡ����������ò���
#define     NET_DVR_SET_HDGROUP_CFG			    1057	    //��������������ò���
    
    //�豸������������(NET_DVR_COMPRESSION_AUDIO�ṹ)
#define     NET_DVR_GET_COMPRESSCFG_AUD                1058        //��ȡ�豸�����Խ��������
#define     NET_DVR_SET_COMPRESSCFG_AUD                1059        //�����豸�����Խ��������
    /***************************DS9000��������(_V30) end *****************************/
    
    /*************************������������ end*******************************/
    
    
    /*******************�����ļ�����־��������ֵ*************************/
#define NET_DVR_FILE_SUCCESS		1000	//����ļ���Ϣ
#define NET_DVR_FILE_NOFIND			1001	//û���ļ�
#define NET_DVR_ISFINDING			1002	//���ڲ����ļ�
#define	NET_DVR_NOMOREFILE			1003	//�����ļ�ʱû�и�����ļ�
#define	NET_DVR_FILE_EXCEPTION		1004	//�����ļ�ʱ�쳣
    
    /*********************�ص��������� begin************************/
#define COMM_ALARM					0x1100	//8000������Ϣ�����ϴ�
#define	COMM_TRADEINFO				0x1500  //ATMDVR�����ϴ�������Ϣ
    
#define COMM_ALARM_V30				0x4000	//9000������Ϣ�����ϴ�
#define COMM_IPCCFG			        0x4001	//9000�豸IPC�������øı䱨����Ϣ�����ϴ�
    
    
    /*************�����쳣����(��Ϣ��ʽ, �ص���ʽ(����))****************/
#define EXCEPTION_EXCHANGE			0x8000	//�û�����ʱ�쳣
#define EXCEPTION_AUDIOEXCHANGE		0x8001	//�����Խ��쳣
#define EXCEPTION_ALARM				0x8002	//�����쳣
#define EXCEPTION_PREVIEW			0x8003	//����Ԥ���쳣
#define EXCEPTION_SERIAL			0x8004	//͸��ͨ���쳣
#define EXCEPTION_RECONNECT			0x8005	//Ԥ��ʱ����
#define EXCEPTION_ALARMRECONNECT	0x8006	//����ʱ����
#define EXCEPTION_SERIALRECONNECT	0x8007	//͸��ͨ������
#define EXCEPTION_PLAYBACK	        0x8010	//�ط��쳣
#define EXCEPTION_DISKFMT	        0x8011	//Ӳ�̸�ʽ��
    
    /********************Ԥ���ص�����*********************/
#define NET_DVR_SYSHEAD			1	//ϵͳͷ����
#define NET_DVR_STREAMDATA		2	//��Ƶ�����ݣ�����������������Ƶ�ֿ�����Ƶ�����ݣ�
#define NET_DVR_AUDIOSTREAMDATA	3	//��Ƶ������
#define NET_DVR_STD_VIDEODATA	4	//��׼��Ƶ������
#define NET_DVR_STD_AUDIODATA	5	//��׼��Ƶ������
    
    //�ص�Ԥ���е�״̬����Ϣ
#define NET_DVR_REALPLAYEXCEPTION	111	//Ԥ���쳣
#define NET_DVR_REALPLAYNETCLOSE	112	//Ԥ��ʱ���ӶϿ�
#define NET_DVR_REALPLAY5SNODATA	113	//Ԥ��5sû���յ�����
#define NET_DVR_REALPLAYRECONNECT	114	//Ԥ������
    
    /********************�طŻص�����*********************/
#define NET_DVR_PLAYBACKOVER		101	//�ط����ݲ������
#define NET_DVR_PLAYBACKEXCEPTION	102	//�ط��쳣
#define NET_DVR_PLAYBACKNETCLOSE	103	//�ط�ʱ�����ӶϿ�
#define NET_DVR_PLAYBACK5SNODATA	104	//�ط�5sû���յ�����
    
    /*********************�ص��������� end************************/
    
    
    //�豸�ͺ�(DVR����)
    /* �豸���� */
#define DVR							1				/*����δ�����dvr���ͷ���NETRET_DVR*/
#define ATMDVR						2				/*atm dvr*/
#define DVS							3				/*DVS*/
#define DEC							4				/* 6001D */
#define ENC_DEC						5				/* 6001F */
#define DVR_HC						6				/*8000HC*/
#define DVR_HT						7				/*8000HT*/
#define DVR_HF						8				/*8000HF*/
#define DVR_HS						9				/* 8000HS DVR(no audio) */
#define DVR_HTS						10              /* 8016HTS DVR(no audio) */
#define DVR_HB						11              /* HB DVR(SATA HD) */
#define DVR_HCS						12              /* 8000HCS DVR */
#define DVS_A						13              /* ��ATAӲ�̵�DVS */
#define DVR_HC_S					14              /* 8000HC-S */
#define DVR_HT_S					15              /* 8000HT-S */
#define DVR_HF_S					16              /* 8000HF-S */
#define DVR_HS_S					17              /* 8000HS-S */
#define ATMDVR_S					18              /* ATM-S */
#define LOWCOST_DVR					19				/*7000Hϵ��*/
#define DEC_MAT						20              /*��·������*/
#define DVR_MOBILE					21				/* mobile DVR */                 
#define DVR_HD_S					22              /* 8000HD-S */
#define DVR_HD_SL					23				/* 8000HD-SL */
#define DVR_HC_SL					24				/* 8000HC-SL */
#define DVR_HS_ST					25				/* 8000HS_ST */
#define DVS_HW						26              /* 6000HW */
#define IPCAM						30				/*IP �����*/
#define MEGA_IPCAM					31				/*X52MFϵ��,752MF,852MF*/
#define IPCAM_X62MF					32				/*X62MFϵ�пɽ���9000�豸,762MF,862MF*/
#define IPDOME						40				/*IP�������*/
#define MEGA_IPDOME                 41              /*IP�������*/
#define IPMOD						50				/*IP ģ��*/
#define DS71XX_H					71				/* DS71XXH_S */
#define DS72XX_H_S					72				/* DS72XXH_S */
#define DS73XX_H_S					73				/* DS73XXH_S */
#define DS81XX_HS_S					81				/* DS81XX_HS_S */
#define DS81XX_HL_S					82				/* DS81XX_HL_S */
#define DS81XX_HC_S					83				/* DS81XX_HC_S */
#define DS81XX_HD_S					84				/* DS81XX_HD_S */
#define DS81XX_HE_S					85				/* DS81XX_HE_S */
#define DS81XX_HF_S					86				/* DS81XX_HF_S */
#define DS81XX_AH_S					87				/* DS81XX_AH_S */
#define DS81XX_AHF_S				88				/* DS81XX_AHF_S */
#define DS90XX_HF_S		            90              /*DS90XX_HF_S*/
#define DS91XX_HF_S					91              /*DS91XX_HF_S*/
#define DS91XX_HD_S					92              /*91XXHD-S(MD)*/
    
    
    /**********************�豸���� end***********************/
    
    /*************************************************
     �������ýṹ������(����_V30Ϊ9000����)
     **************************************************/
    
    /////////////////////////////////////////////////////////////////////////
    //Уʱ�ṹ����
    typedef struct
    {
        DWORD dwYear;		//��
        DWORD dwMonth;		//��
        DWORD dwDay;		//��
        DWORD dwHour;		//ʱ
        DWORD dwMinute;		//��
        DWORD dwSecond;		//��
    }NET_DVR_TIME, *LPNET_DVR_TIME;
    
    //ʱ���(�ӽṹ)
    typedef struct
    {
        //��ʼʱ��
        BYTE byStartHour;
        BYTE byStartMin;
        //����ʱ��
        BYTE byStopHour;
        BYTE byStopMin;
    }NET_DVR_SCHEDTIME, *LPNET_DVR_SCHEDTIME;
    
    /*�豸�������쳣����ʽ*/
#define NOACTION			0x0				/*����Ӧ*/
#define WARNONMONITOR		0x1				/*�������Ͼ���*/
#define WARNONAUDIOOUT		0x2				/*��������*/
#define UPTOCENTER			0x4				/*�ϴ�����*/
#define TRIGGERALARMOUT		0x8				/*�����������*/
    
    //�������쳣����ṹ(�ӽṹ)(�ദʹ��)(9000��չ)
    typedef struct
    {
        DWORD	dwHandleType;	/*����ʽ,����ʽ��"��"���*/
        /*0x00: ����Ӧ*/
        /*0x01: �������Ͼ���*/
        /*0x02: ��������*/
        /*0x04: �ϴ�����*/
        /*0x08: �����������*/
        /*0x10: Jpegץͼ���ϴ�EMail*/
        BYTE byRelAlarmOut[MAX_ALARMOUT_V30];  
        //�������������ͨ��,�������������,Ϊ1��ʾ���������
    }NET_DVR_HANDLEEXCEPTION_V30, *LPNET_DVR_HANDLEEXCEPTION_V30;
    
    //�������쳣����ṹ(�ӽṹ)(�ദʹ��)
    typedef struct
    {
        DWORD	dwHandleType;			/*����ʽ,����ʽ��"��"���*/
        /*0x00: ����Ӧ*/
        /*0x01: �������Ͼ���*/
        /*0x02: ��������*/
        /*0x04: �ϴ�����*/
        /*0x08: �����������*/
        /*0x10: Jpegץͼ���ϴ�EMail*/
        BYTE byRelAlarmOut[MAX_ALARMOUT];  //�������������ͨ��,�������������,Ϊ1��ʾ���������
    }NET_DVR_HANDLEEXCEPTION, *LPNET_DVR_HANDLEEXCEPTION;
    
    //DVR�豸����
    typedef struct
    {
        DWORD dwSize;
        BYTE sDVRName[NAME_LEN];     //DVR����
        DWORD dwDVRID;				//DVR ID,����ң���� //V1.4(0-99), V1.5(0-255)
        DWORD dwRecycleRecord;		//�Ƿ�ѭ��¼��,0:����; 1:��
        //���²��ɸ���
        BYTE sSerialNumber[SERIALNO_LEN];  //���к�
        DWORD dwSoftwareVersion;			//����汾��,��16λ�����汾,��16λ�Ǵΰ汾
        DWORD dwSoftwareBuildDate;			//�����������,0xYYYYMMDD
        DWORD dwDSPSoftwareVersion;		    //DSP����汾,��16λ�����汾,��16λ�Ǵΰ汾
        DWORD dwDSPSoftwareBuildDate;		// DSP�����������,0xYYYYMMDD
        DWORD dwPanelVersion;				// ǰ���汾,��16λ�����汾,��16λ�Ǵΰ汾
        DWORD dwHardwareVersion;	// Ӳ���汾,��16λ�����汾,��16λ�Ǵΰ汾
        BYTE byAlarmInPortNum;		//DVR�����������
        BYTE byAlarmOutPortNum;		//DVR�����������
        BYTE byRS232Num;			//DVR 232���ڸ���
        BYTE byRS485Num;			//DVR 485���ڸ���
        BYTE byNetworkPortNum;		//����ڸ���
        BYTE byDiskCtrlNum;			//DVR Ӳ�̿���������
        BYTE byDiskNum;				//DVR Ӳ�̸���
        BYTE byDVRType;				//DVR����, 1:DVR 2:ATM DVR 3:DVS ......
        BYTE byChanNum;				//DVR ͨ������
        BYTE byStartChan;			//��ʼͨ����,����DVS-1,DVR - 1
        BYTE byDecordChans;			//DVR ����·��
        BYTE byVGANum;				//VGA�ڵĸ���
        BYTE byUSBNum;				//USB�ڵĸ���
        BYTE byAuxoutNum;			//���ڵĸ���
        BYTE byAudioNum;			//�����ڵĸ���
        BYTE byIPChanNum;			//�������ͨ����
    }NET_DVR_DEVICECFG, *LPNET_DVR_DEVICECFG;
    
    /*
     IP��ַ
     */
    typedef struct
    {		
        char	sIpV4[16];						/* IPv4��ַ */
        BYTE	byRes[128];						/* ���� */
    }NET_DVR_IPADDR, *LPNET_DVR_IPADDR;
    
    
    /*
     �������ݽṹ(�ӽṹ)(9000��չ)
     */
    typedef struct 
    {
        NET_DVR_IPADDR	struDVRIP;          					//DVR IP��ַ
        NET_DVR_IPADDR	struDVRIPMask;  //DVR IP��ַ����
        DWORD	dwNetInterface;   								//����ӿ�1-10MBase-T 2-10MBase-Tȫ˫�� 3-100MBase-TX 4-100Mȫ˫�� 5-10M/100M����Ӧ
        WORD	wDVRPort;										//�˿ں�
        WORD	wMTU;											//����MTU���ã�Ĭ��1500��
        BYTE	byMACAddr[MACADDR_LEN];							// �����ַ
    }NET_DVR_ETHERNET_V30, *LPNET_DVR_ETHERNET_V30;
    
    /*
     �������ݽṹ(�ӽṹ)
     */
    typedef struct
    {
        char sDVRIP[16];          //DVR IP��ַ
        char sDVRIPMask[16];      //DVR IP��ַ����
        DWORD dwNetInterface;     //����ӿ� 1-10MBase-T 2-10MBase-Tȫ˫�� 3-100MBase-TX 4-100Mȫ˫�� 5-10M/100M����Ӧ
        WORD wDVRPort;		      //�˿ں�
        BYTE byMACAddr[MACADDR_LEN];		//�������������ַ
    }NET_DVR_ETHERNET;
    
    //pppoe�ṹ
    typedef struct 
    {
        DWORD	dwPPPOE;										//0-������,1-����
        BYTE	sPPPoEUser[NAME_LEN];							//PPPoE�û���
        char	sPPPoEPassword[PASSWD_LEN];						// PPPoE����
        NET_DVR_IPADDR	struPPPoEIP;							//PPPoE IP��ַ
    }NET_DVR_PPPOECFG, *LPNET_DVR_PPPOECFG;
    
    //�������ýṹ(9000��չ)
    typedef struct
    {	
        DWORD dwSize;
        NET_DVR_ETHERNET_V30	struEtherNet[MAX_ETHERNET];		//��̫����
        NET_DVR_IPADDR	struRes1[2];					/*����*/
        NET_DVR_IPADDR	struAlarmHostIpAddr;					/* ��������IP��ַ */
        WORD	wRes2[2];								/* ���� */
        WORD	wAlarmHostIpPort;								/* ���������˿ں� */
        BYTE    byUseDhcp;                                      /* �Ƿ�����DHCP 0xff-��Ч 0-������ 1-����*/
        BYTE	byRes3;
        NET_DVR_IPADDR	struDnsServer1IpAddr;					/* ����������1��IP��ַ */
        NET_DVR_IPADDR	struDnsServer2IpAddr;					/* ����������2��IP��ַ */
        BYTE	byIpResolver[MAX_DOMAIN_NAME];					/* IP����������������IP��ַ */
        WORD	wIpResolverPort;								/* IP�����������˿ں� */
        WORD	wHttpPortNo;									/* HTTP�˿ں� */
        NET_DVR_IPADDR	struMulticastIpAddr;					/* �ಥ���ַ */
        NET_DVR_IPADDR	struGatewayIpAddr;						/* ���ص�ַ */
        NET_DVR_PPPOECFG struPPPoE;	
        BYTE    byRes[64];
    } NET_DVR_NETCFG_V30, *LPNET_DVR_NETCFG_V30;
    
    //�������ýṹ
    typedef struct
    {
        DWORD dwSize;
        NET_DVR_ETHERNET struEtherNet[MAX_ETHERNET];		/* ��̫���� */
        char sManageHostIP[16];		//Զ�̹���������ַ
        WORD wManageHostPort;		//Զ�̹��������˿ں�
        char sIPServerIP[16];            //IPServer��������ַ
        char sMultiCastIP[16];     //�ಥ���ַ
        char sGatewayIP[16];       	//���ص�ַ
        char sNFSIP[16];			//NFS����IP��ַ
        BYTE sNFSDirectory[PATHNAME_LEN];//NFSĿ¼
        DWORD dwPPPOE;				//0-������,1-����
        BYTE sPPPoEUser[NAME_LEN];	//PPPoE�û���
        char sPPPoEPassword[PASSWD_LEN];// PPPoE����
        char sPPPoEIP[16];			//PPPoE IP��ַ(ֻ��)
        WORD wHttpPort;				//HTTP�˿ں�
    }NET_DVR_NETCFG, *LPNET_DVR_NETCFG;
    
    //ͨ��ͼ��ṹ
    //�ƶ����(�ӽṹ)(9000��չ)
    typedef struct 
    {
        BYTE byMotionScope[64][96];									/*�������,0-96λ,��ʾ64��,����96*64��С���,Ϊ1��ʾ���ƶ��������,0-��ʾ����*/
        BYTE byMotionSensitive;										/*�ƶ����������, 0 - 5,Խ��Խ����,oxff�ر�*/
        BYTE byEnableHandleMotion;									/* �Ƿ����ƶ���� 0���� 1����*/ 
        BYTE byPrecision;											/* �ƶ�����㷨�Ľ���: 0--16*16, 1--32*32, 2--64*64 ... */
        char reservedData;	
        NET_DVR_HANDLEEXCEPTION_V30 struMotionHandleType;				/* ����ʽ */
        NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_V30]; /*����ʱ��*/
        BYTE byRelRecordChan[MAX_CHANNUM_V30];									/* ����������¼��ͨ��*/
    }NET_DVR_MOTION_V30, *LPNET_DVR_MOTION_V30;
    
    //�ƶ����(�ӽṹ)
    typedef struct 
    {
        BYTE byMotionScope[18][22];	/*�������,����22*18��С���,Ϊ1��ʾ�ĺ�����ƶ��������,0-��ʾ����*/
        BYTE byMotionSensitive;		/*�ƶ����������, 0 - 5,Խ��Խ����,0xff�ر�*/
        BYTE byEnableHandleMotion;	/* �Ƿ����ƶ���� */
        char reservedData[2];
        NET_DVR_HANDLEEXCEPTION strMotionHandleType;	/* ����ʽ */
        NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT];//����ʱ��
        BYTE byRelRecordChan[MAX_CHANNUM]; //����������¼��ͨ��,Ϊ1��ʾ������ͨ��
    }NET_DVR_MOTION, *LPNET_DVR_MOTION;
    
    //�ڵ�����(�ӽṹ)(9000��չ)  �����С704*576
    typedef struct 
    {
        DWORD dwEnableHideAlarm;				/* �Ƿ������ڵ����� ,0-��,1-�������� 2-�������� 3-��������*/
        WORD wHideAlarmAreaTopLeftX;			/* �ڵ������x���� */
        WORD wHideAlarmAreaTopLeftY;			/* �ڵ������y���� */
        WORD wHideAlarmAreaWidth;				/* �ڵ�����Ŀ� */
        WORD wHideAlarmAreaHeight;				/*�ڵ�����ĸ�*/
        NET_DVR_HANDLEEXCEPTION_V30 strHideAlarmHandleType;	/* ����ʽ */
        NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_V30];//����ʱ��
    }NET_DVR_HIDEALARM_V30, *LPNET_DVR_HIDEALARM_V30;
    //�ڵ�����(�ӽṹ)  �����С704*576
    typedef struct 
    {
        DWORD dwEnableHideAlarm;				/* �Ƿ������ڵ����� ,0-��,1-�������� 2-�������� 3-��������*/
        WORD wHideAlarmAreaTopLeftX;			/* �ڵ������x���� */
        WORD wHideAlarmAreaTopLeftY;			/* �ڵ������y���� */
        WORD wHideAlarmAreaWidth;				/* �ڵ�����Ŀ� */
        WORD wHideAlarmAreaHeight;				/*�ڵ�����ĸ�*/
        NET_DVR_HANDLEEXCEPTION strHideAlarmHandleType;	/* ����ʽ */
        NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT];//����ʱ��
    }NET_DVR_HIDEALARM, *LPNET_DVR_HIDEALARM;
    
    //�źŶ�ʧ����(�ӽṹ)(9000��չ)
    typedef struct 
    {
        BYTE byEnableHandleVILost;	/* �Ƿ����źŶ�ʧ���� */
        NET_DVR_HANDLEEXCEPTION_V30 strVILostHandleType;	/* ����ʽ */
        NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_V30];//����ʱ��
    }NET_DVR_VILOST_V30, *LPNET_DVR_VILOST_V30;
    
    //�źŶ�ʧ����(�ӽṹ)
    typedef struct 
    {
        BYTE byEnableHandleVILost;	/* �Ƿ����źŶ�ʧ���� */
        NET_DVR_HANDLEEXCEPTION strVILostHandleType;	/* ����ʽ */
        NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT];//����ʱ��
    }NET_DVR_VILOST, *LPNET_DVR_VILOST;
    
    //�ڵ�����(�ӽṹ)
    typedef struct 
    {
        WORD wHideAreaTopLeftX;				/* �ڵ������x���� */
        WORD wHideAreaTopLeftY;				/* �ڵ������y���� */
        WORD wHideAreaWidth;				/* �ڵ�����Ŀ� */
        WORD wHideAreaHeight;				/*�ڵ�����ĸ�*/
    }NET_DVR_SHELTER, *LPNET_DVR_SHELTER;
    
    typedef struct
    {
        BYTE byBrightness;  	/*����,0-255*/
        BYTE byContrast;    	/*�Աȶ�,0-255*/	
        BYTE bySaturation;  	/*���Ͷ�,0-255*/
        BYTE byHue;    			/*ɫ��,0-255*/
    }NET_DVR_COLOR, *LPNET_DVR_COLOR;
    
    
    //ͨ��ͼ��ṹ(9000��չ)
    typedef struct
    {
        DWORD dwSize;
        BYTE sChanName[NAME_LEN];
        DWORD dwVideoFormat;	/* ֻ�� ��Ƶ��ʽ 1-NTSC 2-PAL*/
        NET_DVR_COLOR struColor;//	ͼ�����
        char reservedData [60];/*����*/
        //��ʾͨ����
        DWORD dwShowChanName; // Ԥ����ͼ�����Ƿ���ʾͨ������,0-����ʾ,1-��ʾ �����С704*576
        WORD wShowNameTopLeftX;				/* ͨ��������ʾλ�õ�x���� */
        WORD wShowNameTopLeftY;				/* ͨ��������ʾλ�õ�y���� */
        //��Ƶ�źŶ�ʧ����
        NET_DVR_VILOST_V30 struVILost;
        NET_DVR_VILOST_V30 struRes;		/*����*/
        //�ƶ����
        NET_DVR_MOTION_V30 struMotion;
        //�ڵ�����
        NET_DVR_HIDEALARM_V30 struHideAlarm;
        //�ڵ�  �����С704*576
        DWORD dwEnableHide;		/* �Ƿ������ڵ� ,0-��,1-��*/
        NET_DVR_SHELTER struShelter[MAX_SHELTERNUM];
        //OSD
        DWORD dwShowOsd;// Ԥ����ͼ�����Ƿ���ʾOSD,0-����ʾ,1-��ʾ �����С704*576
        WORD wOSDTopLeftX;				/* OSD��x���� */
        WORD wOSDTopLeftY;				/* OSD��y���� */
        BYTE byOSDType;					/* OSD����(��Ҫ�������ո�ʽ) */
        /* 0: XXXX-XX-XX ������ */
        /* 1: XX-XX-XXXX ������ */
        /* 2: XXXX��XX��XX�� */
        /* 3: XX��XX��XXXX�� */
        /* 4: XX-XX-XXXX ������*/
        /* 5: XX��XX��XXXX�� */
        BYTE byDispWeek;				/* �Ƿ���ʾ���� */
        BYTE byOSDAttrib;				/* OSD����:͸������˸ */
        /* 0: ����ʾOSD */
        /* 1: ͸��,��˸ */
        /* 2: ͸��,����˸ */
        /* 3: ��˸,��͸�� */
        /* 4: ��͸��,����˸ */
        BYTE byHourOSDType;				/* OSDСʱ��:0-24Сʱ��,1-12Сʱ�� */
        BYTE byRes[64];
    }NET_DVR_PICCFG_V30, *LPNET_DVR_PICCFG_V30;
    
    //ͨ��ͼ��ṹSDK_V14��չ
    typedef struct 
    {
        DWORD dwSize;
        BYTE sChanName[NAME_LEN];
        DWORD dwVideoFormat;	/* ֻ�� ��Ƶ��ʽ 1-NTSC 2-PAL*/
        BYTE byBrightness;  	/*����,0-255*/
        BYTE byContrast;    	/*�Աȶ�,0-255*/
        BYTE bySaturation;  	/*���Ͷ�,0-255 */
        BYTE byHue;    			/*ɫ��,0-255*/
        //��ʾͨ����
        DWORD dwShowChanName; // Ԥ����ͼ�����Ƿ���ʾͨ������,0-����ʾ,1-��ʾ �����С704*576
        WORD wShowNameTopLeftX;				/* ͨ��������ʾλ�õ�x���� */
        WORD wShowNameTopLeftY;				/* ͨ��������ʾλ�õ�y���� */
        //�źŶ�ʧ����
        NET_DVR_VILOST struVILost;
        //�ƶ����
        NET_DVR_MOTION struMotion;
        //�ڵ�����
        NET_DVR_HIDEALARM struHideAlarm;
        //�ڵ�  �����С704*576
        DWORD dwEnableHide;		/* �Ƿ������ڵ� ,0-��,1-��*/
        NET_DVR_SHELTER struShelter[MAX_SHELTERNUM];
        //OSD
        DWORD dwShowOsd;// Ԥ����ͼ�����Ƿ���ʾOSD,0-����ʾ,1-��ʾ �����С704*576
        WORD wOSDTopLeftX;				/* OSD��x���� */
        WORD wOSDTopLeftY;				/* OSD��y���� */
        BYTE byOSDType;					/* OSD����(��Ҫ�������ո�ʽ) */
        /* 0: XXXX-XX-XX ������ */
        /* 1: XX-XX-XXXX ������ */
        /* 2: XXXX��XX��XX�� */
        /* 3: XX��XX��XXXX�� */
        /* 4: XX-XX-XXXX ������*/
        /* 5: XX��XX��XXXX�� */
        BYTE byDispWeek;				/* �Ƿ���ʾ���� */
        BYTE byOSDAttrib;				/* OSD����:͸������˸ */
        /* 0: ����ʾOSD */
        /* 1: ͸��,��˸ */
        /* 2: ͸��,����˸ */
        /* 3: ��˸,��͸�� */
        /* 4: ��͸��,����˸ */
        BYTE byHourOsdType;		/* OSDСʱ��:0-24Сʱ��,1-12Сʱ�� */
    }NET_DVR_PICCFG_EX, *LPNET_DVR_PICCFG_EX;
    
    //ͨ��ͼ��ṹ(SDK_V13��֮ǰ�汾)
    typedef struct 
    {
        DWORD dwSize;
        BYTE sChanName[NAME_LEN];
        DWORD dwVideoFormat;	/* ֻ�� ��Ƶ��ʽ 1-NTSC 2-PAL*/
        BYTE byBrightness;  	/*����,0-255*/
        BYTE byContrast;    	/*�Աȶ�,0-255*/
        BYTE bySaturation;  	/*���Ͷ�,0-255 */
        BYTE byHue;    			/*ɫ��,0-255*/
        //��ʾͨ����
        DWORD dwShowChanName; // Ԥ����ͼ�����Ƿ���ʾͨ������,0-����ʾ,1-��ʾ �����С704*576
        WORD wShowNameTopLeftX;				/* ͨ��������ʾλ�õ�x���� */
        WORD wShowNameTopLeftY;				/* ͨ��������ʾλ�õ�y���� */
        //�źŶ�ʧ����
        NET_DVR_VILOST struVILost;
        //�ƶ����
        NET_DVR_MOTION struMotion;
        //�ڵ�����
        NET_DVR_HIDEALARM struHideAlarm;
        //�ڵ�  �����С704*576
        DWORD dwEnableHide;		/* �Ƿ������ڵ� ,0-��,1-��*/
        WORD wHideAreaTopLeftX;				/* �ڵ������x���� */
        WORD wHideAreaTopLeftY;				/* �ڵ������y���� */
        WORD wHideAreaWidth;				/* �ڵ�����Ŀ� */
        WORD wHideAreaHeight;				/*�ڵ�����ĸ�*/
        //OSD
        DWORD dwShowOsd;// Ԥ����ͼ�����Ƿ���ʾOSD,0-����ʾ,1-��ʾ �����С704*576
        WORD wOSDTopLeftX;				/* OSD��x���� */
        WORD wOSDTopLeftY;				/* OSD��y���� */
        BYTE byOSDType;					/* OSD����(��Ҫ�������ո�ʽ) */
        /* 0: XXXX-XX-XX ������ */
        /* 1: XX-XX-XXXX ������ */
        /* 2: XXXX��XX��XX�� */
        /* 3: XX��XX��XXXX�� */
        /* 4: XX-XX-XXXX ������*/
        /* 5: XX��XX��XXXX�� */
        BYTE byDispWeek;				/* �Ƿ���ʾ���� */
        BYTE byOSDAttrib;				/* OSD����:͸������˸ */
        /* 0: ����ʾOSD */
        /* 1: ͸��,��˸ */
        /* 2: ͸��,����˸ */
        /* 3: ��˸,��͸�� */
        /* 4: ��͸��,����˸ */
        char reservedData2;
    }NET_DVR_PICCFG, *LPNET_DVR_PICCFG;
    
    //����ѹ������(�ӽṹ)(9000��չ)
    typedef struct 
    {
        BYTE byStreamType;		//�������� 0-��Ƶ��, 1-������, ��ʾ�¼�ѹ������ʱ���λ��ʾ�Ƿ�����ѹ������
        BYTE byResolution;  	//�ֱ���0-DCIF 1-CIF, 2-QCIF, 3-4CIF, 4-2CIF 5��������16-VGA��640*480�� 17-UXGA��1600*1200�� 18-SVGA ��800*600��19-HD720p��1280*720��20-XVGA  21-HD900p
        BYTE byBitrateType;		//�������� 0:�����ʣ�1:������
        BYTE byPicQuality;		//ͼ������ 0-��� 1-�κ� 2-�Ϻ� 3-һ�� 4-�ϲ� 5-��
        DWORD dwVideoBitrate; 	//��Ƶ���� 0-���� 1-16K 2-32K 3-48k 4-64K 5-80K 6-96K 7-128K 8-160k 9-192K 10-224K 11-256K 12-320K
        // 13-384K 14-448K 15-512K 16-640K 17-768K 18-896K 19-1024K 20-1280K 21-1536K 22-1792K 23-2048K
        //���λ(31λ)�ó�1��ʾ���Զ�������, 0-30λ��ʾ����ֵ��
        DWORD dwVideoFrameRate;	//֡�� 0-ȫ��; 1-1/16; 2-1/8; 3-1/4; 4-1/2; 5-1; 6-2; 7-4; 8-6; 9-8; 10-10; 11-12; 12-16; 13-20; V2.0�汾���¼�14-15; 15-18; 16-22;
        WORD  wIntervalFrameI;  //I֡���
        //2006-08-11 ���ӵ�P֡�����ýӿڣ����Ը���ʵʱ����ʱ����
        BYTE  byIntervalBPFrame;//0-BBP֡; 1-BP֡; 2-��P֡
        BYTE  byres1;        //����
        BYTE  byVideoEncType;   //��Ƶ�������� 0 hik264;1��׼h264; 2��׼mpeg4;
        BYTE  byAudioEncType;   //��Ƶ�������� 0��OggVorbis
        BYTE  byres[10];//���ﱣ����Ƶ��ѹ������
    }NET_DVR_COMPRESSION_INFO_V30, *LPNET_DVR_COMPRESSION_INFO_V30;
    
    //ͨ��ѹ������(9000��չ)
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_COMPRESSION_INFO_V30 struNormHighRecordPara;    //¼�� ��Ӧ8000����ͨ
        NET_DVR_COMPRESSION_INFO_V30 struRes;//���� char reserveData[28];
        NET_DVR_COMPRESSION_INFO_V30 struEventRecordPara;       //�¼�����ѹ������
        NET_DVR_COMPRESSION_INFO_V30 struNetPara;               //����(������)
    }NET_DVR_COMPRESSIONCFG_V30, *LPNET_DVR_COMPRESSIONCFG_V30;
    
    //����ѹ������(�ӽṹ)
    typedef struct 
    {
        BYTE byStreamType;		//��������0-��Ƶ��,1-������,��ʾѹ������ʱ���λ��ʾ�Ƿ�����ѹ������
        BYTE byResolution;  	//�ֱ���0-DCIF 1-CIF, 2-QCIF, 3-4CIF, 4-2CIF, 5-2QCIF(352X144)(����ר��)
        BYTE byBitrateType;		//��������0:�����ʣ�1:������
        BYTE  byPicQuality;		//ͼ������ 0-��� 1-�κ� 2-�Ϻ� 3-һ�� 4-�ϲ� 5-��
        DWORD dwVideoBitrate; 	//��Ƶ���� 0-���� 1-16K(����) 2-32K 3-48k 4-64K 5-80K 6-96K 7-128K 8-160k 9-192K 10-224K 11-256K 12-320K
        // 13-384K 14-448K 15-512K 16-640K 17-768K 18-896K 19-1024K 20-1280K 21-1536K 22-1792K 23-2048K
        //���λ(31λ)�ó�1��ʾ���Զ�������, 0-30λ��ʾ����ֵ(MIN-32K MAX-8192K)��
        DWORD dwVideoFrameRate;	//֡�� 0-ȫ��; 1-1/16; 2-1/8; 3-1/4; 4-1/2; 5-1; 6-2; 7-4; 8-6; 9-8; 10-10; 11-12; 12-16; 13-20;
    }NET_DVR_COMPRESSION_INFO, *LPNET_DVR_COMPRESSION_INFO;
    
    //ͨ��ѹ������
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_COMPRESSION_INFO struRecordPara; //¼��/�¼�����¼��
        NET_DVR_COMPRESSION_INFO struNetPara;	//����/����
    }NET_DVR_COMPRESSIONCFG, *LPNET_DVR_COMPRESSIONCFG;
    
    //����ѹ������(�ӽṹ)(��չ) ����I֡���
    typedef struct 
    {
        BYTE byStreamType;		//��������0-��Ƶ��, 1-������
        BYTE byResolution;  	//�ֱ���0-DCIF 1-CIF, 2-QCIF, 3-4CIF, 4-2CIF, 5-2QCIF(352X144)(����ר��)
        BYTE byBitrateType;		//��������0:�����ʣ�1:������
        BYTE  byPicQuality;		//ͼ������ 0-��� 1-�κ� 2-�Ϻ� 3-һ�� 4-�ϲ� 5-��
        DWORD dwVideoBitrate; 	//��Ƶ���� 0-���� 1-16K(����) 2-32K 3-48k 4-64K 5-80K 6-96K 7-128K 8-160k 9-192K 10-224K 11-256K 12-320K
        // 13-384K 14-448K 15-512K 16-640K 17-768K 18-896K 19-1024K 20-1280K 21-1536K 22-1792K 23-2048K
        //���λ(31λ)�ó�1��ʾ���Զ�������, 0-30λ��ʾ����ֵ(MIN-32K MAX-8192K)��
        DWORD dwVideoFrameRate;	//֡�� 0-ȫ��; 1-1/16; 2-1/8; 3-1/4; 4-1/2; 5-1; 6-2; 7-4; 8-6; 9-8; 10-10; 11-12; 12-16; 13-20, //V2.0����14-15, 15-18, 16-22;
        WORD  wIntervalFrameI;  //I֡���
        //2006-08-11 ���ӵ�P֡�����ýӿڣ����Ը���ʵʱ����ʱ����
        BYTE  byIntervalBPFrame;//0-BBP֡; 1-BP֡; 2-��P֡
        BYTE  byRes;
    }NET_DVR_COMPRESSION_INFO_EX, *LPNET_DVR_COMPRESSION_INFO_EX;
    
    //ͨ��ѹ������(��չ)
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_COMPRESSION_INFO_EX struRecordPara; //¼��
        NET_DVR_COMPRESSION_INFO_EX struNetPara;	//����
    }NET_DVR_COMPRESSIONCFG_EX, *LPNET_DVR_COMPRESSIONCFG_EX;
    
    
    //ʱ���¼���������(�ӽṹ)
    typedef struct 
    {
        NET_DVR_SCHEDTIME struRecordTime;
        BYTE byRecordType;	//0:��ʱ¼��1:�ƶ���⣬2:����¼��3:����|������4:����&����, 5:�����, 6: �ֶ�¼��
        char reservedData[3];
    }NET_DVR_RECORDSCHED, *LPNET_DVR_RECORDSCHED;
    
    //ȫ��¼���������(�ӽṹ)
    typedef struct 
    {
        WORD wAllDayRecord;				/* �Ƿ�ȫ��¼�� 0-�� 1-��*/
        BYTE byRecordType;				/* ¼������ 0:��ʱ¼��1:�ƶ���⣬2:����¼��3:����|������4:����&���� 5:�����, 6: �ֶ�¼��*/
        char reservedData;
    }NET_DVR_RECORDDAY, *LPNET_DVR_RECORDDAY;
    
    //ͨ��¼���������(9000��չ)
    typedef struct 
    {
        DWORD	dwSize;
        DWORD	dwRecord;  						/*�Ƿ�¼�� 0-�� 1-��*/
        NET_DVR_RECORDDAY	struRecAllDay[MAX_DAYS];
        NET_DVR_RECORDSCHED	struRecordSched[MAX_DAYS][MAX_TIMESEGMENT_V30];
        DWORD	dwRecordTime;					/* ¼����ʱ���� 0-5�룬 1-20�룬 2-30�룬 3-1���ӣ� 4-2���ӣ� 5-5���ӣ� 6-10����*/
        DWORD	dwPreRecordTime;				/* Ԥ¼ʱ�� 0-��Ԥ¼ 1-5�� 2-10�� 3-15�� 4-20�� 5-25�� 6-30�� 7-0xffffffff(������Ԥ¼) */
        DWORD	dwRecorderDuration;				/* ¼�񱣴���ʱ�� */
        BYTE	byRedundancyRec;	/*�Ƿ�����¼��,��Ҫ����˫���ݣ�0/1*/
        BYTE	byAudioRec;		/*¼��ʱ����������ʱ�Ƿ��¼��Ƶ���ݣ������д˷���*/
        BYTE	byReserve[10];	
    }NET_DVR_RECORD_V30, *LPNET_DVR_RECORD_V30;
    
    //ͨ��¼���������
    typedef struct 
    {
        DWORD dwSize;
        DWORD dwRecord;  /*�Ƿ�¼�� 0-�� 1-��*/
        NET_DVR_RECORDDAY struRecAllDay[MAX_DAYS];
        NET_DVR_RECORDSCHED struRecordSched[MAX_DAYS][MAX_TIMESEGMENT];
        DWORD dwRecordTime;	/* ¼��ʱ�䳤�� */
        DWORD dwPreRecordTime;	/* Ԥ¼ʱ�� 0-��Ԥ¼ 1-5�� 2-10�� 3-15�� 4-20�� 5-25�� 6-30�� 7-0xffffffff(������Ԥ¼) */
    }NET_DVR_RECORD, *LPNET_DVR_RECORD;
    
    //��̨Э���ṹ����
    typedef struct
    { 
        DWORD dwType;               /*����������ֵ����1��ʼ��������*/    
        BYTE  byDescribe[DESC_LEN]; /*������������������8000�е�һ��*/    
    }NET_DVR_PTZ_PROTOCOL;
    
    typedef struct
    {    
        DWORD   dwSize;    
        NET_DVR_PTZ_PROTOCOL struPtz[PTZ_PROTOCOL_NUM];/*���200��PTZЭ��*/    
        DWORD   dwPtzNum;           /*��Ч��ptzЭ����Ŀ����0��ʼ(������ʱ��1)*/
        BYTE    byRes[8];
    }NET_DVR_PTZCFG, *LPNET_DVR_PTZCFG;
    /***************************��̨����(end)******************************/
    
    //ͨ��������(��̨)��������(9000��չ)
    typedef struct 
    {
        DWORD dwSize;
        DWORD dwBaudRate;//������(bps)��0��50��1��75��2��110��3��150��4��300��5��600��6��1200��7��2400��8��4800��9��9600��10��19200�� 11��38400��12��57600��13��76800��14��115.2k;
        BYTE byDataBit;// �����м�λ 0��5λ��1��6λ��2��7λ��3��8λ;
        BYTE byStopBit;// ֹͣλ 0��1λ��1��2λ;
        BYTE byParity;// У�� 0����У�飬1����У�飬2��żУ��;
        BYTE byFlowcontrol;// 0���ޣ�1��������,2-Ӳ����
        WORD wDecoderType;//����������, ��0��ʼ����ӦptzЭ���б�
        WORD wDecoderAddress;	/*��������ַ:0 - 255*/
        BYTE bySetPreset[MAX_PRESET_V30];		/* Ԥ�õ��Ƿ�����,0-û������,1-����*/
        BYTE bySetCruise[MAX_CRUISE_V30];		/* Ѳ���Ƿ�����: 0-û������,1-���� */
        BYTE bySetTrack[MAX_TRACK_V30];		    /* �켣�Ƿ�����,0-û������,1-����*/
    }NET_DVR_DECODERCFG_V30, *LPNET_DVR_DECODERCFG_V30;
    
    //ͨ��������(��̨)��������
    typedef struct 
    {
        DWORD dwSize;
        DWORD dwBaudRate;       //������(bps)��0��50��1��75��2��110��3��150��4��300��5��600��6��1200��7��2400��8��4800��9��9600��10��19200�� 11��38400��12��57600��13��76800��14��115.2k;
        BYTE byDataBit;         // �����м�λ 0��5λ��1��6λ��2��7λ��3��8λ;
        BYTE byStopBit;         // ֹͣλ 0��1λ��1��2λ;
        BYTE byParity;          // У�� 0����У�飬1����У�飬2��żУ��;
        BYTE byFlowcontrol;     // 0���ޣ�1��������,2-Ӳ����
        WORD wDecoderType;      //����������, 0��YouLi��1��LiLin-1016��2��LiLin-820��3��Pelco-p��4��DM DynaColor��5��HD600��6��JC-4116��7��Pelco-d WX��8��Pelco-d PICO
        WORD wDecoderAddress;	/*��������ַ:0 - 255*/
        BYTE bySetPreset[MAX_PRESET];		/* Ԥ�õ��Ƿ�����,0-û������,1-����*/
        BYTE bySetCruise[MAX_CRUISE];		/* Ѳ���Ƿ�����: 0-û������,1-���� */
        BYTE bySetTrack[MAX_TRACK];		/* �켣�Ƿ�����,0-û������,1-����*/
    }NET_DVR_DECODERCFG, *LPNET_DVR_DECODERCFG;
    
    //ppp��������(�ӽṹ)
    typedef struct 
    {
        NET_DVR_IPADDR struRemoteIP;	//Զ��IP��ַ
        NET_DVR_IPADDR struLocalIP;		//����IP��ַ
        char sLocalIPMask[16];			//����IP��ַ����
        BYTE sUsername[NAME_LEN];		/* �û��� */
        BYTE sPassword[PASSWD_LEN];		/* ���� */
        BYTE byPPPMode;					//PPPģʽ, 0��������1������
        BYTE byRedial;					//�Ƿ�ز� ��0-��,1-��
        BYTE byRedialMode;				//�ز�ģʽ,0-�ɲ�����ָ��,1-Ԥ�ûز�����
        BYTE byDataEncrypt;				//���ݼ���,0-��,1-��
        DWORD dwMTU;					//MTU
        char sTelephoneNumber[PHONENUMBER_LEN];   //�绰����
    }NET_DVR_PPPCFG_V30, *LPNET_DVR_PPPCFG_V30;
    
    //ppp��������(�ӽṹ)
    typedef struct 
    {
        char sRemoteIP[16];				//Զ��IP��ַ
        char sLocalIP[16];				//����IP��ַ
        char sLocalIPMask[16];			//����IP��ַ����
        BYTE sUsername[NAME_LEN];		/* �û��� */
        BYTE sPassword[PASSWD_LEN];		/* ���� */
        BYTE byPPPMode;					//PPPģʽ, 0��������1������
        BYTE byRedial;					//�Ƿ�ز� ��0-��,1-��
        BYTE byRedialMode;				//�ز�ģʽ,0-�ɲ�����ָ��,1-Ԥ�ûز�����
        BYTE byDataEncrypt;				//���ݼ���,0-��,1-��
        DWORD dwMTU;					//MTU
        char sTelephoneNumber[PHONENUMBER_LEN];   //�绰����
    }NET_DVR_PPPCFG, *LPNET_DVR_PPPCFG;
    
    //RS232���ڲ�������(9000��չ)
    typedef struct
    {
        DWORD dwBaudRate;   /*������(bps)��0��50��1��75��2��110��3��150��4��300��5��600��6��1200��7��2400��8��4800��9��9600��10��19200�� 11��38400��12��57600��13��76800��14��115.2k;*/
        BYTE byDataBit;     /* �����м�λ 0��5λ��1��6λ��2��7λ��3��8λ */
        BYTE byStopBit;     /* ֹͣλ 0��1λ��1��2λ */
        BYTE byParity;      /* У�� 0����У�飬1����У�飬2��żУ�� */
        BYTE byFlowcontrol; /* 0���ޣ�1��������,2-Ӳ���� */
        DWORD dwWorkMode;   /* ����ģʽ��0��232��������PPP���ţ�1��232�������ڲ������ƣ�2��͸��ͨ�� */
    }NET_DVR_SINGLE_RS232;
    
    //RS232���ڲ�������(9000��չ)
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_SINGLE_RS232 struRs232;
        BYTE byRes[84]; 
        NET_DVR_PPPCFG_V30 struPPPConfig;
    }NET_DVR_RS232CFG_V30, *LPNET_DVR_RS232CFG_V30;
    
    //RS232���ڲ�������
    typedef struct 
    {
        DWORD dwSize;
        DWORD dwBaudRate;//������(bps)��0��50��1��75��2��110��3��150��4��300��5��600��6��1200��7��2400��8��4800��9��9600��10��19200�� 11��38400��12��57600��13��76800��14��115.2k;
        BYTE byDataBit;// �����м�λ 0��5λ��1��6λ��2��7λ��3��8λ;
        BYTE byStopBit;// ֹͣλ 0��1λ��1��2λ;
        BYTE byParity;// У�� 0����У�飬1����У�飬2��żУ��;
        BYTE byFlowcontrol;// 0���ޣ�1��������,2-Ӳ����
        DWORD dwWorkMode;// ����ģʽ��0��խ������(232��������PPP����)��1������̨(232�������ڲ�������)��2��͸��ͨ��
        NET_DVR_PPPCFG struPPPConfig;
    }NET_DVR_RS232CFG, *LPNET_DVR_RS232CFG;
    
    //���������������(9000��չ)
    typedef struct 
    {
        DWORD dwSize;
        BYTE sAlarmInName[NAME_LEN];	/* ���� */
        BYTE byAlarmType;	            //����������,0������,1������
        BYTE byAlarmInHandle;	        /* �Ƿ��� 0-������ 1-����*/
        BYTE byRes1[2];			
        NET_DVR_HANDLEEXCEPTION_V30 struAlarmHandleType;	/* ����ʽ */
        NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_V30];//����ʱ��
        BYTE byRelRecordChan[MAX_CHANNUM_V30]; //����������¼��ͨ��,Ϊ1��ʾ������ͨ��
        BYTE byEnablePreset[MAX_CHANNUM_V30];		/* �Ƿ����Ԥ�õ� 0-��,1-��*/
        BYTE byPresetNo[MAX_CHANNUM_V30];			/* ���õ���̨Ԥ�õ����,һ������������Ե��ö��ͨ������̨Ԥ�õ�, 0xff��ʾ������Ԥ�õ㡣*/
        BYTE byRes2[192];					/*����*/
        BYTE byEnableCruise[MAX_CHANNUM_V30];		/* �Ƿ����Ѳ�� 0-��,1-��*/
        BYTE byCruiseNo[MAX_CHANNUM_V30];			/* Ѳ�� */
        BYTE byEnablePtzTrack[MAX_CHANNUM_V30];		/* �Ƿ���ù켣 0-��,1-��*/
        BYTE byPTZTrack[MAX_CHANNUM_V30];			/* ���õ���̨�Ĺ켣��� */
        BYTE byRes3[16];
    }NET_DVR_ALARMINCFG_V30, *LPNET_DVR_ALARMINCFG_V30;
    
    //���������������
    typedef struct 
    {
        DWORD dwSize;
        BYTE sAlarmInName[NAME_LEN];	/* ���� */
        BYTE byAlarmType;	//����������,0������,1������
        BYTE byAlarmInHandle;	/* �Ƿ��� 0-������ 1-����*/
        NET_DVR_HANDLEEXCEPTION struAlarmHandleType;	/* ����ʽ */
        NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT];//����ʱ��
        BYTE byRelRecordChan[MAX_CHANNUM]; //����������¼��ͨ��,Ϊ1��ʾ������ͨ��
        BYTE byEnablePreset[MAX_CHANNUM];		/* �Ƿ����Ԥ�õ� 0-��,1-��*/
        BYTE byPresetNo[MAX_CHANNUM];			/* ���õ���̨Ԥ�õ����,һ������������Ե��ö��ͨ������̨Ԥ�õ�, 0xff��ʾ������Ԥ�õ㡣*/
        BYTE byEnableCruise[MAX_CHANNUM];		/* �Ƿ����Ѳ�� 0-��,1-��*/
        BYTE byCruiseNo[MAX_CHANNUM];			/* Ѳ�� */
        BYTE byEnablePtzTrack[MAX_CHANNUM];		/* �Ƿ���ù켣 0-��,1-��*/
        BYTE byPTZTrack[MAX_CHANNUM];			/* ���õ���̨�Ĺ켣��� */
    }NET_DVR_ALARMINCFG, *LPNET_DVR_ALARMINCFG;
    
    
    //�ϴ�������Ϣ(9000��չ)
    typedef struct 
    {
        DWORD dwAlarmType;/*0-�ź�������,1-Ӳ����,2-�źŶ�ʧ,3���ƶ����,4��Ӳ��δ��ʽ��,5-��дӲ�̳���,6-�ڵ�����,7-��ʽ��ƥ��, 8-�Ƿ�����, 0xa-GPS��λ��Ϣ(���ض���)*/
        DWORD dwAlarmInputNumber;/*��������˿�*/
        BYTE byAlarmOutputNumber[MAX_ALARMOUT_V30];/*����������˿ڣ�Ϊ1��ʾ��Ӧ���*/
        BYTE byAlarmRelateChannel[MAX_CHANNUM_V30];/*������¼��ͨ����Ϊ1��ʾ��Ӧ¼��, dwAlarmRelateChannel[0]��Ӧ��1��ͨ��*/
        BYTE byChannel[MAX_CHANNUM_V30];/*dwAlarmTypeΪ2��3,6ʱ����ʾ�ĸ�ͨ����dwChannel[0]��Ӧ��1��ͨ��*/
        BYTE byDiskNumber[MAX_DISKNUM_V30];/*dwAlarmTypeΪ1,4,5ʱ,��ʾ�ĸ�Ӳ��, dwDiskNumber[0]��Ӧ��1��Ӳ��*/
    }NET_DVR_ALARMINFO_V30, *LPNET_DVR_ALARMINFO_V30;
    
    typedef struct 
    {
        DWORD dwAlarmType;/*0-�ź�������,1-Ӳ����,2-�źŶ�ʧ,3���ƶ����,4��Ӳ��δ��ʽ��,5-��дӲ�̳���,6-�ڵ�����,7-��ʽ��ƥ��, 8-�Ƿ�����, 9-����״̬, 0xa-GPS��λ��Ϣ(���ض���)*/
        DWORD dwAlarmInputNumber;/*��������˿�, ����������Ϊ9ʱ�ñ�����ʾ����״̬0��ʾ������ -1��ʾ����*/
        DWORD dwAlarmOutputNumber[MAX_ALARMOUT];/*����������˿ڣ���һλΪ1��ʾ��Ӧ��һ�����*/
        DWORD dwAlarmRelateChannel[MAX_CHANNUM];/*������¼��ͨ������һλΪ1��ʾ��Ӧ��һ·¼��, dwAlarmRelateChannel[0]��Ӧ��1��ͨ��*/
        DWORD dwChannel[MAX_CHANNUM];/*dwAlarmTypeΪ2��3,6ʱ����ʾ�ĸ�ͨ����dwChannel[0]λ��Ӧ��1��ͨ��*/
        DWORD dwDiskNumber[MAX_DISKNUM];/*dwAlarmTypeΪ1,4,5ʱ,��ʾ�ĸ�Ӳ��, dwDiskNumber[0]λ��Ӧ��1��Ӳ��*/
    }NET_DVR_ALARMINFO, *LPNET_DVR_ALARMINFO;
    
    
    
    
    //////////////////////////////////////////////////////////////////////////////////////
    //IPC�����������
    /* IP�豸�ṹ */
    typedef struct 
    {
        DWORD dwEnable;				    /* ��IP�豸�Ƿ����� */
        BYTE sUserName[NAME_LEN];		/* �û��� */
        BYTE sPassword[PASSWD_LEN];	    /* ���� */ 
        NET_DVR_IPADDR struIP;			/* IP��ַ */
        WORD wDVRPort;			 	    /* �˿ں� */
        BYTE byRes[34];				/* ���� */
    }NET_DVR_IPDEVINFO, *LPNET_DVR_IPDEVINFO;
    
    /* IPͨ��ƥ����� */
    typedef struct 
    {
        BYTE byEnable;					/* 0��ʾ9000�豸������ͨ�����Ӷ�Ӧ��IPC��DVSʧ�ܣ���ͨ�������ߣ�1��ʾ���ӳɹ�����ͨ�����ߣ�*/
        BYTE byIPID;					/* IP�豸ID ȡֵ1- MAX_IP_DEVICE */
        BYTE byChannel;					/* ͨ���� */
        BYTE byRes[33];					/* ���� */
    } NET_DVR_IPCHANINFO, *LPNET_DVR_IPCHANINFO;
    
    /* IP�������ýṹ */
    typedef struct 
    {
        DWORD dwSize;			                            /* �ṹ��С */
        NET_DVR_IPDEVINFO  struIPDevInfo[MAX_IP_DEVICE];    /* IP�豸 */
        BYTE byAnalogChanEnable[MAX_ANALOG_CHANNUM];        /* ģ��ͨ���Ƿ����ã��ӵ͵��߱�ʾ1-32ͨ����0��ʾ��Ч 1��Ч */
        NET_DVR_IPCHANINFO struIPChanInfo[MAX_IP_CHANNEL];	/* IPͨ�� */    
    }NET_DVR_IPPARACFG, *LPNET_DVR_IPPARACFG;
    
    /* ����������� */
    typedef struct 
    {
        BYTE byIPID;					/* IP�豸IDȡֵ1- MAX_IP_DEVICE */
        BYTE byAlarmOut;				/* ��������� */
        BYTE byRes[18];					/* ���� */
    }NET_DVR_IPALARMOUTINFO, *LPNET_DVR_IPALARMOUTINFO;
    
    /* IP����������ýṹ */
    typedef struct 
    {
        DWORD dwSize;			                        /* �ṹ��С */    
        NET_DVR_IPALARMOUTINFO struIPAlarmOutInfo[MAX_IP_ALARMOUT];/* IP������� */
    }NET_DVR_IPALARMOUTCFG, *LPNET_DVR_IPALARMOUTCFG;
    
    /* ����������� */
    typedef struct 
    {
        BYTE byIPID;					/* IP�豸IDȡֵ1- MAX_IP_DEVICE */
        BYTE byAlarmIn;					/* ��������� */
        BYTE byRes[18];					/* ���� */
    }NET_DVR_IPALARMININFO, *LPNET_DVR_IPALARMININFO;
    
    /* IP�����������ýṹ */
    typedef struct 
    {
        DWORD dwSize;			                        /* �ṹ��С */    
        NET_DVR_IPALARMININFO struIPAlarmInInfo[MAX_IP_ALARMIN];/* IP�������� */
    }NET_DVR_IPALARMINCFG, *LPNET_DVR_IPALARMINCFG;
    
    //ipc alarm info
    typedef struct 
    {
        NET_DVR_IPDEVINFO  struIPDevInfo[MAX_IP_DEVICE];            /* IP�豸 */
        BYTE byAnalogChanEnable[MAX_ANALOG_CHANNUM];                /* ģ��ͨ���Ƿ����ã�0-δ���� 1-���� */
        NET_DVR_IPCHANINFO struIPChanInfo[MAX_IP_CHANNEL];	        /* IPͨ�� */
        NET_DVR_IPALARMININFO struIPAlarmInInfo[MAX_IP_ALARMIN];    /* IP�������� */
        NET_DVR_IPALARMOUTINFO struIPAlarmOutInfo[MAX_IP_ALARMOUT]; /* IP������� */
    }NET_DVR_IPALARMINFO, *LPNET_DVR_IPALARMINFO;
    //����Ӳ����Ϣ����
    typedef struct
    {
        DWORD dwHDNo;         /*Ӳ�̺�, ȡֵ0~MAX_DISKNUM_V30-1*/
        DWORD dwCapacity;     /*Ӳ������(��������)*/
        DWORD dwFreeSpace;    /*Ӳ��ʣ��ռ�(��������)*/
        DWORD dwHdStatus;     /*Ӳ��״̬(��������) 0-����, 1-δ��ʽ��, 2-����, 3-SMART״̬, 4-��ƥ��, 5-����*/
        BYTE  byHDAttr;       /*0-Ĭ��, 1-����; 2-ֻ��*/
        BYTE  byRes1[3];
        DWORD dwHdGroup;      /*�����ĸ����� 1-MAX_HD_GROUP*/
        BYTE  byRes2[120];
    }NET_DVR_SINGLE_HD, *LPNET_DVR_SINGLE_HD;
    
    typedef struct
    {
        DWORD dwSize;
        DWORD dwHDCount;          /*Ӳ����(��������)*/
        NET_DVR_SINGLE_HD struHDInfo[MAX_DISKNUM_V30];//Ӳ����ز�������Ҫ����������Ч��
    }NET_DVR_HDCFG, *LPNET_DVR_HDCFG;
    
    //����������Ϣ����
    typedef struct
    {
        DWORD dwHDGroupNo;       /*�����(��������) 1-MAX_HD_GROUP*/        
        BYTE byHDGroupChans[64]; /*�����Ӧ��¼��ͨ��, 0-��ʾ��ͨ����¼�󵽸����飬1-��ʾ¼�󵽸�����*/
        BYTE byRes[8];
    }NET_DVR_SINGLE_HDGROUP, *LPNET_DVR_SINGLE_HDGROUP;
    
    typedef struct
    {
        DWORD dwSize;
        DWORD dwHDGroupCount;        /*��������(��������)*/
        NET_DVR_SINGLE_HDGROUP struHDGroupAttr[MAX_HD_GROUP];//Ӳ����ز�������Ҫ����������Ч��
    }NET_DVR_HDGROUP_CFG, *LPNET_DVR_HDGROUP_CFG;
    
    
    //�������Ų����Ľṹ
    typedef struct
    {
        DWORD dwSize;
        DWORD dwMajorScale;    /* ����ʾ 0-�����ţ�1-����*/
        DWORD dwMinorScale;    /* ����ʾ 0-�����ţ�1-����*/
        DWORD dwRes[2];
    }NET_DVR_SCALECFG, *LPNET_DVR_SCALECFG;
    
    
    
    //DVR�������(9000��չ)
    typedef struct 
    {
        DWORD dwSize;
        BYTE sAlarmOutName[NAME_LEN];	/* ���� */
        DWORD dwAlarmOutDelay;	/* �������ʱ��(-1Ϊ���ޣ��ֶ��ر�) */
        //0-5��,1-10��,2-30��,3-1����,4-2����,5-5����,6-10����,7-�ֶ�
        NET_DVR_SCHEDTIME struAlarmOutTime[MAX_DAYS][MAX_TIMESEGMENT_V30];/* �����������ʱ��� */
        BYTE byRes[16];
    }NET_DVR_ALARMOUTCFG_V30, *LPNET_DVR_ALARMOUTCFG_V30;
    
    //DVR�������
    typedef struct 
    {
        DWORD dwSize;
        BYTE sAlarmOutName[NAME_LEN];	/* ���� */
        DWORD dwAlarmOutDelay;	/* �������ʱ��(-1Ϊ���ޣ��ֶ��ر�) */
        //0-5��,1-10��,2-30��,3-1����,4-2����,5-5����,6-10����,7-�ֶ�
        NET_DVR_SCHEDTIME struAlarmOutTime[MAX_DAYS][MAX_TIMESEGMENT];/* �����������ʱ��� */
    }NET_DVR_ALARMOUTCFG, *LPNET_DVR_ALARMOUTCFG;
    
    //DVR����Ԥ������(9000��չ)
    typedef struct 
    {
        DWORD dwSize;
        BYTE byPreviewNumber;//Ԥ����Ŀ,0-1����,1-4����,2-9����,3-16����,0xff:�����
        BYTE byEnableAudio;//�Ƿ�����Ԥ��,0-��Ԥ��,1-Ԥ��
        WORD wSwitchTime;//�л�ʱ��,0-���л�,1-5s,2-10s,3-20s,4-30s,5-60s,6-120s,7-300s
        BYTE bySwitchSeq[MAX_PREVIEW_MODE][MAX_WINDOW_V30];//�л�˳��,���lSwitchSeq[i]Ϊ 0xff��ʾ����
        BYTE byRes[24];
    }NET_DVR_PREVIEWCFG_V30, *LPNET_DVR_PREVIEWCFG_V30;
    //DVR����Ԥ������
    typedef struct 
    {
        DWORD dwSize;
        BYTE byPreviewNumber;//Ԥ����Ŀ,0-1����,1-4����,2-9����,3-16����,0xff:�����
        BYTE byEnableAudio;//�Ƿ�����Ԥ��,0-��Ԥ��,1-Ԥ��
        WORD wSwitchTime;//�л�ʱ��,0-���л�,1-5s,2-10s,3-20s,4-30s,5-60s,6-120s,7-300s
        BYTE bySwitchSeq[MAX_WINDOW];//�л�˳��,���lSwitchSeq[i]Ϊ 0xff��ʾ����
    }NET_DVR_PREVIEWCFG, *LPNET_DVR_PREVIEWCFG;
    
    //DVR��Ƶ���
    typedef struct 
    {
        WORD wResolution;							/* �ֱ��� */
        WORD wFreq;									/* ˢ��Ƶ�� */
        DWORD dwBrightness;							/* ���� */
    }NET_DVR_VGAPARA;
    
    /*
     * MATRIX��������ṹ
     */
    typedef struct
    {		
        WORD	wOrder[MAX_ANALOG_CHANNUM];		/* Ԥ��˳��, 0xff��ʾ��Ӧ�Ĵ��ڲ�Ԥ�� */
        WORD	wSwitchTime;				/* Ԥ���л�ʱ�� */
        BYTE	res[14];
    }NET_DVR_MATRIXPARA_V30, *LPNET_DVR_MATRIXPARA_V30;
    
    typedef struct 
    {
        WORD wDisplayLogo;						/* ��ʾ��Ƶͨ���� */
        WORD wDisplayOsd;						/* ��ʾʱ�� */
    }NET_DVR_MATRIXPARA;
    
    typedef struct 
    {
        BYTE byVideoFormat;						/* �����ʽ,0-PAL,1-NTSC */
        BYTE byMenuAlphaValue;					/* �˵��뱳��ͼ��Աȶ� */
        WORD wScreenSaveTime;					/* ��Ļ����ʱ�� 0-�Ӳ�,1-1����,2-2����,3-5����,4-10����,5-20����,6-30���� */
        WORD wVOffset;							/* ��Ƶ���ƫ�� */
        WORD wBrightness;						/* ��Ƶ������� */
        BYTE byStartMode;						/* ��������Ƶ���ģʽ(0:�˵�,1:Ԥ��)*/
        BYTE byEnableScaler;                    /* �Ƿ��������� (0-������, 1-����)*/
    }NET_DVR_VOOUT;
    
    //DVR��Ƶ���(9000��չ)
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_VOOUT struVOOut[MAX_VIDEOOUT_V30];
        NET_DVR_VGAPARA struVGAPara[MAX_VGA_V30];	/* VGA���� */
        NET_DVR_MATRIXPARA_V30 struMatrixPara[MAX_MATRIXOUT];		/* MATRIX���� */
        BYTE byRes[16];
    }NET_DVR_VIDEOOUT_V30, *LPNET_DVR_VIDEOOUT_V30;
    
    //DVR��Ƶ���
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_VOOUT struVOOut[MAX_VIDEOOUT];
        NET_DVR_VGAPARA struVGAPara[MAX_VGA];	/* VGA���� */
        NET_DVR_MATRIXPARA struMatrixPara;		/* MATRIX���� */
    }NET_DVR_VIDEOOUT, *LPNET_DVR_VIDEOOUT;
    
    //���û�����(�ӽṹ)(9000��չ)
    typedef struct
    {
        BYTE sUserName[NAME_LEN];		/* �û��� */
        BYTE sPassword[PASSWD_LEN];		/* ���� */
        BYTE byLocalRight[MAX_RIGHT];	/* ����Ȩ�� */
        /*����0: ���ؿ�����̨*/
        /*����1: �����ֶ�¼��*/
        /*����2: ���ػط�*/
        /*����3: �������ò���*/
        /*����4: ���ز鿴״̬����־*/
        /*����5: ���ظ߼�����(��������ʽ�����������ػ�)*/
        /*����6: ���ز鿴���� */
        /*����7: ���ع���ģ���IP camera */
        /*����8: ���ر��� */
        /*����9: ���عػ�/���� */    
        BYTE byRemoteRight[MAX_RIGHT];/* Զ��Ȩ�� */	
        /*����0: Զ�̿�����̨*/
        /*����1: Զ���ֶ�¼��*/
        /*����2: Զ�̻ط� */
        /*����3: Զ�����ò���*/
        /*����4: Զ�̲鿴״̬����־*/
        /*����5: Զ�̸߼�����(��������ʽ�����������ػ�)*/
        /*����6: Զ�̷��������Խ�*/
        /*����7: Զ��Ԥ��*/
        /*����8: Զ�����󱨾��ϴ����������*/
        /*����9: Զ�̿��ƣ��������*/
        /*����10: Զ�̿��ƴ���*/	
        /*����11: Զ�̲鿴���� */
        /*����12: Զ�̹���ģ���IP camera */
        /*����13: Զ�̹ػ�/���� */
        BYTE byNetPreviewRight[MAX_CHANNUM_V30];		/* Զ�̿���Ԥ����ͨ�� 0-��Ȩ�ޣ�1-��Ȩ��*/
        BYTE byLocalPlaybackRight[MAX_CHANNUM_V30];	/* ���ؿ��Իطŵ�ͨ�� 0-��Ȩ�ޣ�1-��Ȩ��*/
        BYTE byNetPlaybackRight[MAX_CHANNUM_V30];	/* Զ�̿��Իطŵ�ͨ�� 0-��Ȩ�ޣ�1-��Ȩ��*/
        BYTE byLocalRecordRight[MAX_CHANNUM_V30];		/* ���ؿ���¼���ͨ�� 0-��Ȩ�ޣ�1-��Ȩ��*/
        BYTE byNetRecordRight[MAX_CHANNUM_V30];		/* Զ�̿���¼���ͨ�� 0-��Ȩ�ޣ�1-��Ȩ��*/
        BYTE byLocalPTZRight[MAX_CHANNUM_V30];		/* ���ؿ���PTZ��ͨ�� 0-��Ȩ�ޣ�1-��Ȩ��*/
        BYTE byNetPTZRight[MAX_CHANNUM_V30];			/* Զ�̿���PTZ��ͨ�� 0-��Ȩ�ޣ�1-��Ȩ��*/
        BYTE byLocalBackupRight[MAX_CHANNUM_V30];		/* ���ر���Ȩ��ͨ�� 0-��Ȩ�ޣ�1-��Ȩ��*/
        NET_DVR_IPADDR struUserIP;		/* �û�IP��ַ(Ϊ0ʱ��ʾ�����κε�ַ) */
        BYTE byMACAddr[MACADDR_LEN];	/* �����ַ */
        BYTE byPriority;				/* ���ȼ���0xff-�ޣ�0--�ͣ�1--�У�2--�� */
        /*
         �ޡ�����ʾ��֧�����ȼ�������
         �͡���Ĭ��Ȩ��:�������غ�Զ�̻ط�,���غ�Զ�̲鿴��־��״̬,���غ�Զ�̹ػ�/����
         �С����������غ�Զ�̿�����̨,���غ�Զ���ֶ�¼��,���غ�Զ�̻ط�,�����Խ���Զ��Ԥ��
         ���ر���,����/Զ�̹ػ�/����
         �ߡ�������Ա
         */
        BYTE byRes[17];	
    }NET_DVR_USER_INFO_V30, *LPNET_DVR_USER_INFO_V30;
    
    //���û�����(SDK_V15��չ)(�ӽṹ)
    typedef struct 
    {
        BYTE sUserName[NAME_LEN];		/* �û��� */
        BYTE sPassword[PASSWD_LEN];		/* ���� */
        DWORD dwLocalRight[MAX_RIGHT];	/* Ȩ�� */
        /*����0: ���ؿ�����̨*/
        /*����1: �����ֶ�¼��*/
        /*����2: ���ػط�*/
        /*����3: �������ò���*/
        /*����4: ���ز鿴״̬����־*/
        /*����5: ���ظ߼�����(��������ʽ�����������ػ�)*/
        DWORD dwLocalPlaybackRight;		/* ���ؿ��Իطŵ�ͨ�� bit0 -- channel 1*/
        DWORD dwRemoteRight[MAX_RIGHT];	/* Ȩ�� */
        /*����0: Զ�̿�����̨*/
        /*����1: Զ���ֶ�¼��*/
        /*����2: Զ�̻ط� */
        /*����3: Զ�����ò���*/
        /*����4: Զ�̲鿴״̬����־*/
        /*����5: Զ�̸߼�����(��������ʽ�����������ػ�)*/
        /*����6: Զ�̷��������Խ�*/
        /*����7: Զ��Ԥ��*/
        /*����8: Զ�����󱨾��ϴ����������*/
        /*����9: Զ�̿��ƣ��������*/
        /*����10: Զ�̿��ƴ���*/
        DWORD dwNetPreviewRight;		/* Զ�̿���Ԥ����ͨ�� bit0 -- channel 1*/
        DWORD dwNetPlaybackRight;		/* Զ�̿��Իطŵ�ͨ�� bit0 -- channel 1*/
        char sUserIP[16];				/* �û�IP��ַ(Ϊ0ʱ��ʾ�����κε�ַ) */
        BYTE byMACAddr[MACADDR_LEN];	/* �����ַ */
    }NET_DVR_USER_INFO_EX, *LPNET_DVR_USER_INFO_EX;
    
    //���û�����(�ӽṹ)
    typedef struct 
    {
        BYTE sUserName[NAME_LEN];		/* �û��� */
        BYTE sPassword[PASSWD_LEN];		/* ���� */
        DWORD dwLocalRight[MAX_RIGHT];	/* Ȩ�� */
        /*����0: ���ؿ�����̨*/
        /*����1: �����ֶ�¼��*/
        /*����2: ���ػط�*/
        /*����3: �������ò���*/
        /*����4: ���ز鿴״̬����־*/
        /*����5: ���ظ߼�����(��������ʽ�����������ػ�)*/
        DWORD dwRemoteRight[MAX_RIGHT];	/* Ȩ�� */
        /*����0: Զ�̿�����̨*/
        /*����1: Զ���ֶ�¼��*/
        /*����2: Զ�̻ط� */
        /*����3: Զ�����ò���*/
        /*����4: Զ�̲鿴״̬����־*/
        /*����5: Զ�̸߼�����(��������ʽ�����������ػ�)*/
        /*����6: Զ�̷��������Խ�*/
        /*����7: Զ��Ԥ��*/
        /*����8: Զ�����󱨾��ϴ����������*/
        /*����9: Զ�̿��ƣ��������*/
        /*����10: Զ�̿��ƴ���*/
        char sUserIP[16];				/* �û�IP��ַ(Ϊ0ʱ��ʾ�����κε�ַ) */
        BYTE byMACAddr[MACADDR_LEN];	/* �����ַ */
    }NET_DVR_USER_INFO, *LPNET_DVR_USER_INFO;
    
    
    //DVR�û�����(9000��չ)
    typedef struct
    {
        DWORD dwSize;
        NET_DVR_USER_INFO_V30 struUser[MAX_USERNUM_V30];
    }NET_DVR_USER_V30, *LPNET_DVR_USER_V30;
    
    //DVR�û�����(SDK_V15��չ)
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_USER_INFO_EX struUser[MAX_USERNUM];
    }NET_DVR_USER_EX, *LPNET_DVR_USER_EX;
    
    //DVR�û�����
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_USER_INFO struUser[MAX_USERNUM];
    }NET_DVR_USER, *LPNET_DVR_USER;
    
    //DVR�쳣����(9000��չ)
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_HANDLEEXCEPTION_V30 struExceptionHandleType[MAX_EXCEPTIONNUM_V30];
        /*����0-����,1- Ӳ�̳���,2-���߶�,3-��������IP ��ַ��ͻ, 4-�Ƿ�����, 9-����/�����Ƶ��ʽ��ƥ��, 10-��Ƶ�ź��쳣*/
    }NET_DVR_EXCEPTION_V30, *LPNET_DVR_EXCEPTION_V30;
    
    //DVR�쳣����
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_HANDLEEXCEPTION struExceptionHandleType[MAX_EXCEPTIONNUM];
        /*����0-����,1- Ӳ�̳���,2-���߶�,3-��������IP ��ַ��ͻ,4-�Ƿ�����, 5-��Ƶ�ź��쳣, 6-����/�����Ƶ��ʽ��ƥ��*/
    }NET_DVR_EXCEPTION, *LPNET_DVR_EXCEPTION;
    
    //ͨ��״̬(9000��չ)
    typedef struct 
    {
        BYTE byRecordStatic; //ͨ���Ƿ���¼��,0-��¼��,1-¼��
        BYTE bySignalStatic; //���ӵ��ź�״̬,0-����,1-�źŶ�ʧ
        BYTE byHardwareStatic;//ͨ��Ӳ��״̬,0-����,1-�쳣,����DSP����
        BYTE byRes1;		//����
        DWORD dwBitRate;//ʵ������
        DWORD dwLinkNum;//�ͻ������ӵĸ���
        NET_DVR_IPADDR struClientIP[MAX_LINK];//�ͻ��˵�IP��ַ
        DWORD dwIPLinkNum;//�����ͨ��ΪIP���룬��ô��ʾIP���뵱ǰ��������
        BYTE byRes[12];
    }NET_DVR_CHANNELSTATE_V30, *LPNET_DVR_CHANNELSTATE_V30;
    
    //ͨ��״̬
    typedef struct 
    {
        BYTE byRecordStatic; //ͨ���Ƿ���¼��,0-��¼��,1-¼��
        BYTE bySignalStatic; //���ӵ��ź�״̬,0-����,1-�źŶ�ʧ
        BYTE byHardwareStatic;//ͨ��Ӳ��״̬,0-����,1-�쳣,����DSP����
        char reservedData;		//����
        DWORD dwBitRate;//ʵ������
        DWORD dwLinkNum;//�ͻ������ӵĸ���
        DWORD dwClientIP[MAX_LINK];//�ͻ��˵�IP��ַ
    }NET_DVR_CHANNELSTATE, *LPNET_DVR_CHANNELSTATE;
    
    //Ӳ��״̬
    typedef struct 
    {
        DWORD dwVolume;//Ӳ�̵�����
        DWORD dwFreeSpace;//Ӳ�̵�ʣ��ռ�
        DWORD dwHardDiskStatic; //Ӳ�̵�״̬,0-�,1-����,2-������
    }NET_DVR_DISKSTATE, *LPNET_DVR_DISKSTATE;
    
    //DVR����״̬(9000��չ)
    typedef struct 
    {
        DWORD dwDeviceStatic; 	//�豸��״̬,0-����,1-CPUռ����̫��,����85%,2-Ӳ������,���紮������
        NET_DVR_DISKSTATE  struHardDiskStatic[MAX_DISKNUM_V30];
        NET_DVR_CHANNELSTATE_V30 struChanStatic[MAX_CHANNUM_V30];//ͨ����״̬
        BYTE  byAlarmInStatic[MAX_ALARMIN_V30]; //�����˿ڵ�״̬,0-û�б���,1-�б���
        BYTE  byAlarmOutStatic[MAX_ALARMOUT_V30]; //��������˿ڵ�״̬,0-û�����,1-�б������
        DWORD  dwLocalDisplay;//������ʾ״̬,0-����,1-������
        BYTE  byAudioChanStatus[MAX_AUDIO_V30];//��ʾ����ͨ����״̬ 0-δʹ�ã�1-ʹ����, 0xff��Ч
        BYTE  byRes[10];
    }NET_DVR_WORKSTATE_V30, *LPNET_DVR_WORKSTATE_V30;
    
    //DVR����״̬
    typedef struct 
    {
        DWORD dwDeviceStatic; 	//�豸��״̬,0-����,1-CPUռ����̫��,����85%,2-Ӳ������,���紮������
        NET_DVR_DISKSTATE  struHardDiskStatic[MAX_DISKNUM];
        NET_DVR_CHANNELSTATE struChanStatic[MAX_CHANNUM];//ͨ����״̬
        BYTE  byAlarmInStatic[MAX_ALARMIN]; //�����˿ڵ�״̬,0-û�б���,1-�б���
        BYTE  byAlarmOutStatic[MAX_ALARMOUT]; //��������˿ڵ�״̬,0-û�����,1-�б������
        DWORD  dwLocalDisplay;//������ʾ״̬,0-����,1-������
    }NET_DVR_WORKSTATE, *LPNET_DVR_WORKSTATE;
    
    /************************DVR��־ begin***************************/
    
    /* ���� */
    //������
#define MAJOR_ALARM					0x1
    //������
#define MINOR_ALARM_IN					0x1  /* �������� */
#define MINOR_ALARM_OUT					0x2  /* ������� */
#define MINOR_MOTDET_START				0x3  /* �ƶ���ⱨ����ʼ */
#define MINOR_MOTDET_STOP				0x4  /* �ƶ���ⱨ������ */
#define MINOR_HIDE_ALARM_START			0x5  /* �ڵ�������ʼ */
#define MINOR_HIDE_ALARM_STOP			0x6  /* �ڵ��������� */
    
    /* �쳣 */
    //������
#define MAJOR_EXCEPTION				0x2
    //������
#define MINOR_VI_LOST					0x21 /* ��Ƶ�źŶ�ʧ */
#define MINOR_ILLEGAL_ACCESS			0x22 /* �Ƿ����� */
#define MINOR_HD_FULL					0x23 /* Ӳ���� */
#define MINOR_HD_ERROR					0x24 /* Ӳ�̴��� */
#define MINOR_DCD_LOST					0x25 /* MODEM ����(������ʹ��) */
#define MINOR_IP_CONFLICT				0x26 /* IP��ַ��ͻ */
#define MINOR_NET_BROKEN				0x27 /* ����Ͽ�*/
#define MINOR_REC_ERROR                 0x28    /* ¼����� */
#define MINOR_IPC_NO_LINK               0x29    /* IPC�����쳣 */
#define MINOR_VI_EXCEPTION              0x2a    /* ��Ƶ�����쳣(ֻ���ģ��ͨ��) */
    
    
    /* ���� */
    //������
#define MAJOR_OPERATION				0x3
    //������
#define MINOR_START_DVR					0x41 /* ���� */
#define MINOR_STOP_DVR					0x42 /* �ػ� */
#define MINOR_STOP_ABNORMAL				0x43 /* �쳣�ػ� */
#define MINOR_REBOOT_DVR                0x44    /*���������豸*/
    
#define MINOR_LOCAL_LOGIN				0x50 /* ���ص�½ */
#define MINOR_LOCAL_LOGOUT				0x51 /* ����ע����½ */
#define MINOR_LOCAL_CFG_PARM			0x52 /* �������ò��� */
#define MINOR_LOCAL_PLAYBYFILE			0x53 /* ���ذ��ļ��طŻ����� */
#define MINOR_LOCAL_PLAYBYTIME			0x54 /* ���ذ�ʱ��طŻ�����*/
#define MINOR_LOCAL_START_REC			0x55 /* ���ؿ�ʼ¼�� */
#define MINOR_LOCAL_STOP_REC			0x56 /* ����ֹͣ¼�� */
#define MINOR_LOCAL_PTZCTRL				0x57 /* ������̨���� */
#define MINOR_LOCAL_PREVIEW				0x58 /* ����Ԥ�� (������ʹ��)*/
#define MINOR_LOCAL_MODIFY_TIME         0x59 /* �����޸�ʱ��(������ʹ��) */
#define MINOR_LOCAL_UPGRADE				0x5a /* �������� */
#define MINOR_LOCAL_RECFILE_OUTPUT      0x5b    /* ���ر���¼���ļ� */
#define MINOR_LOCAL_FORMAT_HDD          0x5c    /* ���س�ʼ��Ӳ�� */
#define MINOR_LOCAL_CFGFILE_OUTPUT      0x5d    /* �������������ļ� */
#define MINOR_LOCAL_CFGFILE_INPUT       0x5e    /* ���뱾�������ļ� */
#define MINOR_LOCAL_COPYFILE            0x5f    /* ���ر����ļ� */
#define MINOR_LOCAL_LOCKFILE            0x60    /* ��������¼���ļ� */
#define MINOR_LOCAL_UNLOCKFILE          0x61    /* ���ؽ���¼���ļ� */
#define MINOR_LOCAL_DVR_ALARM           0x62    /* �����ֶ�����ʹ�������*/
#define MINOR_IPC_ADD                   0x63    /* �������IPC */
#define MINOR_IPC_DEL                   0x64    /* ����ɾ��IPC */
#define MINOR_IPC_SET                   0x65    /* ��������IPC */
#define MINOR_LOCAL_START_BACKUP		0x66	/* ���ؿ�ʼ���� */
#define MINOR_LOCAL_STOP_BACKUP			0x67	/* ����ֹͣ����*/
#define MINOR_LOCAL_COPYFILE_START_TIME 0x68	/* ���ر��ݿ�ʼʱ��*/
#define MINOR_LOCAL_COPYFILE_END_TIME	0x69	/* ���ر��ݽ���ʱ��*/
    
    
#define MINOR_REMOTE_LOGIN				0x70 /* Զ�̵�¼ */
#define MINOR_REMOTE_LOGOUT				0x71 /* Զ��ע����½ */
#define MINOR_REMOTE_START_REC			0x72 /* Զ�̿�ʼ¼�� */
#define MINOR_REMOTE_STOP_REC			0x73 /* Զ��ֹͣ¼�� */
#define MINOR_START_TRANS_CHAN			0x74 /* ��ʼ͸������ */
#define MINOR_STOP_TRANS_CHAN			0x75 /* ֹͣ͸������ */
#define MINOR_REMOTE_GET_PARM			0x76 /* Զ�̻�ȡ���� */
#define MINOR_REMOTE_CFG_PARM			0x77 /* Զ�����ò��� */
#define MINOR_REMOTE_GET_STATUS         0x78 /* Զ�̻�ȡ״̬ */
#define MINOR_REMOTE_ARM				0x79 /* Զ�̲��� */
#define MINOR_REMOTE_DISARM				0x7a /* Զ�̳��� */
#define MINOR_REMOTE_REBOOT				0x7b /* Զ������ */
#define MINOR_START_VT					0x7c /* ��ʼ�����Խ� */
#define MINOR_STOP_VT					0x7d /* ֹͣ�����Խ� */
#define MINOR_REMOTE_UPGRADE			0x7e /* Զ������ */
#define MINOR_REMOTE_PLAYBYFILE         0x7f /* Զ�̰��ļ��ط� */
#define MINOR_REMOTE_PLAYBYTIME         0x80 /* Զ�̰�ʱ��ط� */
#define MINOR_REMOTE_PTZCTRL			0x81 /* Զ����̨���� */
#define MINOR_REMOTE_FORMAT_HDD         0x82    /* Զ�̸�ʽ��Ӳ�� */
#define MINOR_REMOTE_STOP               0x83    /* Զ�̹ػ� */
#define MINOR_REMOTE_LOCKFILE			0x84 /* Զ�������ļ� */
#define MINOR_REMOTE_UNLOCKFILE         0x85 /* Զ�̽����ļ� */
#define MINOR_REMOTE_CFGFILE_OUTPUT     0x86    /* Զ�̵��������ļ� */
#define MINOR_REMOTE_CFGFILE_INTPUT     0x87    /* Զ�̵��������ļ� */
#define MINOR_REMOTE_RECFILE_OUTPUT     0x88    /* Զ�̵���¼���ļ� */
#define MINOR_REMOTE_DVR_ALARM          0x89    /* Զ���ֶ�����ʹ�������*/
#define MINOR_REMOTE_IPC_ADD			0x8a  /* Զ�����IPC */
#define MINOR_REMOTE_IPC_DEL			0x8b /* Զ��ɾ��IPC */
#define MINOR_REMOTE_IPC_SET			0x8c  /* Զ������IPC */
    
    
    /*��־������Ϣ*/
    //������
#define MAJOR_INFORMATION			0x4     /*������Ϣ*/
    //������
#define MINOR_HDD_INFO                  0xa1 /*Ӳ����Ϣ*/
#define MINOR_SMART_INFO                0xa2    /*SMART��Ϣ*/
#define MINOR_REC_START                 0xa3    /*��ʼ¼��*/
#define MINOR_REC_STOP                  0xa4 /*ֹͣ¼��*/
#define MINOR_REC_OVERDUE				0xa5 /*����¼��ɾ��*/
    
    //����־��������ΪMAJOR_OPERATION=03��������ΪMINOR_LOCAL_CFG_PARM=0x52����MINOR_REMOTE_GET_PARM=0x76����MINOR_REMOTE_CFG_PARM=0x77ʱ��dwParaType:����������Ч���京�����£�
#define PARA_VIDEOOUT 0x1
#define PARA_IMAGE  0x2
#define PARA_ENCODE  0x4
#define PARA_NETWORK 0x8
#define PARA_ALARM  0x10
#define PARA_EXCEPTION 0x20
#define PARA_DECODER 0x40    /*������*/
#define PARA_RS232  0x80
#define PARA_PREVIEW 0x100
#define PARA_SECURITY 0x200
#define PARA_DATETIME 0x400
#define PARA_FRAMETYPE 0x800    /*֡��ʽ*/
    
    //��־��Ϣ(9000��չ)
    typedef struct 
    {
        NET_DVR_TIME strLogTime;
        DWORD	dwMajorType;	//������ 1-����; 2-�쳣; 3-����; 0xff-ȫ��
        DWORD	dwMinorType;//������ 0-ȫ��;
        BYTE	sPanelUser[MAX_NAMELEN]; //���������û���
        BYTE	sNetUser[MAX_NAMELEN];//����������û���
        NET_DVR_IPADDR	struRemoteHostAddr;//Զ��������ַ
        DWORD	dwParaType;//��������
        DWORD	dwChannel;//ͨ����
        DWORD	dwDiskNumber;//Ӳ�̺�
        DWORD	dwAlarmInPort;//��������˿�
        DWORD	dwAlarmOutPort;//��������˿�
        DWORD   dwInfoLen;
        char    sInfo[LOG_INFO_LEN];
    }NET_DVR_LOG_V30, *LPNET_DVR_LOG_V30;
    
    //��־��Ϣ
    typedef struct 
    {
        NET_DVR_TIME strLogTime;
        DWORD	dwMajorType;	//������ 1-����; 2-�쳣; 3-����; 0xff-ȫ��
        DWORD	dwMinorType;//������ 0-ȫ��;
        BYTE	sPanelUser[MAX_NAMELEN]; //���������û���
        BYTE	sNetUser[MAX_NAMELEN];//����������û���
        char	sRemoteHostAddr[16];//Զ��������ַ
        DWORD	dwParaType;//��������
        DWORD	dwChannel;//ͨ����
        DWORD	dwDiskNumber;//Ӳ�̺�
        DWORD	dwAlarmInPort;//��������˿�
        DWORD	dwAlarmOutPort;//��������˿�
    }NET_DVR_LOG, *LPNET_DVR_LOG;
    
    /************************DVR��־ end***************************/
    
    
    //�������״̬(9000��չ)
    typedef struct 
    {
        BYTE Output[MAX_ALARMOUT_V30];
    }NET_DVR_ALARMOUTSTATUS_V30, *LPNET_DVR_ALARMOUTSTATUS_V30;
    
    //�������״̬
    typedef struct 
    {
        BYTE Output[MAX_ALARMOUT];
    }NET_DVR_ALARMOUTSTATUS, *LPNET_DVR_ALARMOUTSTATUS;
    
    //������Ϣ
    typedef struct 
    {
        USHORT m_Year;
        USHORT m_Month;
        USHORT m_Day;
        USHORT m_Hour;
        USHORT m_Minute;
        USHORT m_Second;
        BYTE DeviceName[24];	//�豸����
        DWORD dwChannelNumer;	//ͨ����
        BYTE CardNumber[32];	//����
        char cTradeType[12];	//��������
        DWORD dwCash;			//���׽��
    }NET_DVR_TRADEINFO, *LPNET_DVR_TRADEINFO;
    
    
    //ATMר��
    /****************************ATM(begin)***************************/
#define NCR		0
#define DIEBOLD	1
#define WINCOR_NIXDORF	2
#define SIEMENS	3
#define OLIVETTI	4
#define FUJITSU	5
#define HITACHI	6
#define SMI		7
#define IBM		8
#define BULL	9
#define YiHua	10
#define LiDe	11
#define GDYT	12
#define Mini_Banl	13
#define GuangLi	14
#define DongXin	15
#define ChenTong	16
#define NanTian	17
#define XiaoXing	18
#define GZYY	19
#define QHTLT	20
#define DRS918	21
#define KALATEL	22
#define NCR_2	23	
#define NXS		24
    
    
    /*֡��ʽ*/
    typedef struct 
    {
        BYTE code[12];		/* ���� */
    }NET_DVR_FRAMETYPECODE;
    
    //ATM����(9000��չ)
    typedef struct
    {
        DWORD	dwSize;
        NET_DVR_IPADDR	struATMIP;               	/* ATM IP��ַ */
        DWORD	dwATMType;							/* ATM���� */
        DWORD	dwInputMode;						/* ���뷽ʽ	0-�������� 1-������� 2-����ֱ������ 3-����ATM��������*/
        DWORD	dwFrameSignBeginPos;				/* ���ı�־λ����ʼλ��*/
        DWORD	dwFrameSignLength;					/* ���ı�־λ�ĳ��� */
        BYTE	byFrameSignContent[12];				/* ���ı�־λ������ */
        DWORD	dwCardLengthInfoBeginPos;			/* ���ų�����Ϣ����ʼλ�� */
        DWORD	dwCardLengthInfoLength;				/* ���ų�����Ϣ�ĳ��� */
        DWORD	dwCardNumberInfoBeginPos;			/* ������Ϣ����ʼλ�� */
        DWORD	dwCardNumberInfoLength;				/* ������Ϣ�ĳ��� */
        DWORD	dwBusinessTypeBeginPos;				/* �������͵���ʼλ�� */
        DWORD	dwBusinessTypeLength;				/* �������͵ĳ��� */
        NET_DVR_FRAMETYPECODE	frameTypeCode[10];	/* ���� */
        WORD	wATMPort;							/* ���Ų�׽�˿ں�(����Э�鷽ʽ) */
        WORD	wProtocolType;						/* ����Э������ */
        BYTE    byRes[24];
    }NET_DVR_FRAMEFORMAT_V30, *LPNET_DVR_FRAMEFORMAT_V30;
    
    //ATM����
    typedef struct 
    {
        DWORD dwSize;
        char sATMIP[16];						/* ATM IP��ַ */
        DWORD dwATMType;						/* ATM���� */
        DWORD dwInputMode;						/* ���뷽ʽ	0-�������� 1-������� 2-����ֱ������ 3-����ATM��������*/
        DWORD dwFrameSignBeginPos;              /* ���ı�־λ����ʼλ��*/
        DWORD dwFrameSignLength;				/* ���ı�־λ�ĳ��� */
        BYTE  byFrameSignContent[12];			/* ���ı�־λ������ */
        DWORD dwCardLengthInfoBeginPos;			/* ���ų�����Ϣ����ʼλ�� */
        DWORD dwCardLengthInfoLength;			/* ���ų�����Ϣ�ĳ��� */
        DWORD dwCardNumberInfoBeginPos;			/* ������Ϣ����ʼλ�� */
        DWORD dwCardNumberInfoLength;			/* ������Ϣ�ĳ��� */
        DWORD dwBusinessTypeBeginPos;           /* �������͵���ʼλ�� */
        DWORD dwBusinessTypeLength;				/* �������͵ĳ��� */
        NET_DVR_FRAMETYPECODE frameTypeCode[10];/* ���� */
    }NET_DVR_FRAMEFORMAT, *LPNET_DVR_FRAMEFORMAT;
    
    
    /*****************************DS-6001D/F(begin)***************************/
    //DS-6001D Decoder
    typedef struct 
    {
        BYTE byEncoderIP[16];		//�����豸���ӵķ�����IP
        BYTE byEncoderUser[16];		//�����豸���ӵķ��������û���
        BYTE byEncoderPasswd[16];	//�����豸���ӵķ�����������
        BYTE bySendMode;			//�����豸���ӷ�����������ģʽ
        BYTE byEncoderChannel;		//�����豸���ӵķ�������ͨ����
        WORD wEncoderPort;			//�����豸���ӵķ������Ķ˿ں�
        BYTE reservedData[4];		//����
    }NET_DVR_DECODERINFO, *LPNET_DVR_DECODERINFO;
    
    typedef struct 
    {
        BYTE byEncoderIP[16];		//�����豸���ӵķ�����IP
        BYTE byEncoderUser[16];		//�����豸���ӵķ��������û���
        BYTE byEncoderPasswd[16];	//�����豸���ӵķ�����������
        BYTE byEncoderChannel;		//�����豸���ӵķ�������ͨ����
        BYTE bySendMode;			//�����豸���ӵķ�����������ģʽ
        WORD wEncoderPort;			//�����豸���ӵķ������Ķ˿ں�
        DWORD dwConnectState;		//�����豸���ӷ�������״̬
        BYTE reservedData[4];		//����
    }NET_DVR_DECODERSTATE, *LPNET_DVR_DECODERSTATE;
    
    /*�����豸�����붨��*/
#define NET_DEC_STARTDEC		1
#define NET_DEC_STOPDEC			2
#define NET_DEC_STOPCYCLE		3
#define NET_DEC_CONTINUECYCLE	4
    /*���ӵ�ͨ������*/
    typedef struct 
    {
        char sDVRIP[16];				/* DVR IP��ַ */
        WORD wDVRPort;			 		/* �˿ں� */
        BYTE sUserName[NAME_LEN];		/* �û��� */
        BYTE sPassword[PASSWD_LEN];		/* ���� */
        BYTE byChannel;					/* ͨ���� */
        BYTE byLinkMode;				/* ����ģʽ */
        BYTE byLinkType;				/* �������� 0�������� 1�������� */
    }NET_DVR_DECCHANINFO, *LPNET_DVR_DECCHANINFO;
    
    /*ÿ������ͨ��������*/
    typedef struct 
    {
        BYTE	byPoolChans;			/*ÿ·����ͨ���ϵ�ѭ��ͨ������, ���4ͨ�� 0��ʾû�н���*/
        NET_DVR_DECCHANINFO struchanConInfo[MAX_DECPOOLNUM];
        BYTE	byEnablePoll;			/*�Ƿ���Ѳ 0-�� 1-��*/
        BYTE	byPoolTime;				/*��Ѳʱ�� 0-���� 1-10�� 2-15�� 3-20�� 4-30�� 5-45�� 6-1���� 7-2���� 8-5���� */
    }NET_DVR_DECINFO, *LPNET_DVR_DECINFO;
    
    /*�����豸��������*/
    typedef struct 
    {
        DWORD	dwSize;
        DWORD	dwDecChanNum; 		/*����ͨ��������*/
        NET_DVR_DECINFO struDecInfo[MAX_DECNUM];
    }NET_DVR_DECCFG, *LPNET_DVR_DECCFG;
    
    //2005-08-01
    /* �����豸͸��ͨ������ */
    typedef struct 
    {
        DWORD dwEnableTransPort;	/* �Ƿ�����͸��ͨ�� 0�������� 1������*/
        char sDecoderIP[16];		/* DVR IP��ַ */
        WORD wDecoderPort;			/* �˿ں� */
        WORD wDVRTransPort;			/* ����ǰ��DVR�Ǵ�485/232�����1��ʾ232����,2��ʾ485���� */
        char cReserve[4];
    }NET_DVR_PORTINFO, *LPNET_DVR_PORTINFO;
    
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_PORTINFO struTransPortInfo[MAX_TRANSPARENTNUM]; /* ����0��ʾ232 ����1��ʾ485 */
    }NET_DVR_PORTCFG, *LPNET_DVR_PORTCFG;
    
    /* ���������ļ��ط� */
    typedef struct 
    {
        DWORD dwSize;
        char sDecoderIP[16];		/* DVR IP��ַ */
        WORD wDecoderPort;			/* �˿ں� */
        WORD wLoadMode;				/* �ط�����ģʽ 1�������� 2����ʱ�� */
        union
        {
            BYTE byFile[100];		/* �طŵ��ļ��� */
            struct
            {
                DWORD dwChannel;
                BYTE sUserName[NAME_LEN];	/*������Ƶ�û���*/
                BYTE sPassword[PASSWD_LEN];	/* ���� */
                NET_DVR_TIME struStartTime;	/* ��ʱ��طŵĿ�ʼʱ�� */
                NET_DVR_TIME struStopTime;	/* ��ʱ��طŵĽ���ʱ�� */
            }bytime;
        }mode_size;
    }NET_DVR_PLAYREMOTEFILE, *LPNET_DVR_PLAYREMOTEFILE;
    
    /*��ǰ�豸��������״̬*/
    typedef struct 
    {
        DWORD dwWorkType;		/*������ʽ��1����Ѳ��2����̬���ӽ��롢3���ļ��ط����� 4����ʱ��ط�����*/
        char sDVRIP[16];		/*���ӵ��豸ip*/
        WORD wDVRPort;			/*���Ӷ˿ں�*/
        BYTE byChannel;			/* ͨ���� */
        BYTE byLinkMode;		/* ����ģʽ */
        DWORD	dwLinkType;		/*�������� 0�������� 1��������*/
        union
        {
            struct
            {
                BYTE sUserName[NAME_LEN];	/*������Ƶ�û���*/
                BYTE sPassword[PASSWD_LEN];	/* ���� */
                char cReserve[52];
            }userInfo;
            struct
            {
                BYTE   fileName[100];
            }fileInfo;
            struct
            {
                DWORD	dwChannel;
                BYTE	sUserName[NAME_LEN];	/*������Ƶ�û���*/
                BYTE	sPassword[PASSWD_LEN];	/* ���� */
                NET_DVR_TIME struStartTime;		/* ��ʱ��طŵĿ�ʼʱ�� */
                NET_DVR_TIME struStopTime;		/* ��ʱ��طŵĽ���ʱ�� */
            }timeInfo;
        }objectInfo;
    }NET_DVR_DECCHANSTATUS, *LPNET_DVR_DECCHANSTATUS;
    
    typedef struct 
    {
        DWORD   dwSize;
        NET_DVR_DECCHANSTATUS struDecState[MAX_DECNUM];
    }NET_DVR_DECSTATUS, *LPNET_DVR_DECSTATUS;
    /*****************************DS-6001D/F(end)***************************/
    
    //���ַ�����(�ӽṹ)
    typedef struct 
    {
        WORD wShowString;				// Ԥ����ͼ�����Ƿ���ʾ�ַ�,0-����ʾ,1-��ʾ �����С704*576,�����ַ��Ĵ�СΪ32*32
        WORD wStringSize;				/* �����ַ��ĳ��ȣ����ܴ���44���ַ� */
        WORD wShowStringTopLeftX;		/* �ַ���ʾλ�õ�x���� */
        WORD wShowStringTopLeftY;		/* �ַ�������ʾλ�õ�y���� */
        char sString[44];				/* Ҫ��ʾ���ַ����� */
    }NET_DVR_SHOWSTRINGINFO, *LPNET_DVR_SHOWSTRINGINFO;
    
    //�����ַ�(9000��չ)
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_SHOWSTRINGINFO struStringInfo[MAX_STRINGNUM_V30];				/* Ҫ��ʾ���ַ����� */
    }NET_DVR_SHOWSTRING_V30, *LPNET_DVR_SHOWSTRING_V30;
    
    //�����ַ���չ(8���ַ�)
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_SHOWSTRINGINFO struStringInfo[MAX_STRINGNUM_EX];				/* Ҫ��ʾ���ַ����� */
    }NET_DVR_SHOWSTRING_EX, *LPNET_DVR_SHOWSTRING_EX;
    
    //�����ַ�
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_SHOWSTRINGINFO struStringInfo[MAX_STRINGNUM];				/* Ҫ��ʾ���ַ����� */
    }NET_DVR_SHOWSTRING, *LPNET_DVR_SHOWSTRING;
    
    /****************************DS9000�����ṹ(begin)******************************/
    
    /*
     EMAIL�����ṹ
     */
    typedef struct
    {		
        DWORD		dwSize;
        BYTE		sAccount[NAME_LEN];				/* �˺�*/ 
        BYTE		sPassword[MAX_EMAIL_PWD_LEN];			/*���� */
        struct
        {
            BYTE	sName[NAME_LEN];				/* ���������� */
            BYTE	sAddress[MAX_EMAIL_ADDR_LEN];		/* �����˵�ַ */
        }struSender;
        BYTE		sSmtpServer[MAX_EMAIL_ADDR_LEN];	/* smtp������ */
        BYTE		sPop3Server[MAX_EMAIL_ADDR_LEN];	/* pop3������ */
        struct
        {
            BYTE	sName[NAME_LEN];				/* �ռ������� */
            BYTE	sAddress[MAX_EMAIL_ADDR_LEN];		/* �ռ��˵�ַ */
        }struReceiver[3];							/* ����������3���ռ��� */
        BYTE		byAttachment;					/* �Ƿ������ */
        BYTE		bySmtpServerVerify;				/* ���ͷ�����Ҫ�������֤ */
        BYTE        byMailInterval;                 /* mail interval */
        BYTE        res[77];
    } NET_DVR_EMAILCFG_V30, *LPNET_DVR_EMAILCFG_V30;
    
    /*
     DVRʵ��Ѳ�����ݽṹ
     */
    typedef struct
    {	
        DWORD 	dwSize;
        BYTE	byPresetNo[CRUISE_MAX_PRESET_NUMS];		/* Ԥ�õ�� */
        BYTE 	byCruiseSpeed[CRUISE_MAX_PRESET_NUMS];	/* Ѳ���ٶ� */
        WORD	wDwellTime[CRUISE_MAX_PRESET_NUMS];		/* ͣ��ʱ�� */
        BYTE	byEnableThisCruise;						/* �Ƿ����� */
        BYTE	res[15];
    }NET_DVR_CRUISE_PARA, *LPNET_DVR_CRUISE_PARA; 
    /****************************DS9000�����ṹ(end)******************************/
    
    
    //ʱ���
    typedef struct 
    {
        DWORD dwMonth;		//�� 0-11��ʾ1-12����
        DWORD dwWeekNo;		//�ڼ��� 0����1�� 1����2�� 2����3�� 3����4�� 4�����һ��
        DWORD dwWeekDate;	//���ڼ� 0�������� 1������һ 2�����ڶ� 3�������� 4�������� 5�������� 6��������
        DWORD dwHour;		//Сʱ	��ʼʱ��0��23 ����ʱ��1��23
        DWORD dwMin;		//��	0��59
    }NET_DVR_TIMEPOINT;
    
    //����ʱ����
    typedef struct 
    {
        DWORD dwSize;
        BYTE byRes1[16];			//����
        DWORD dwEnableDST;		//�Ƿ�������ʱ�� 0�������� 1������
        BYTE byDSTBias;	//����ʱƫ��ֵ��30min, 60min, 90min, 120min, �Է��Ӽƣ�����ԭʼ��ֵ
        BYTE byRes2[3];
        NET_DVR_TIMEPOINT struBeginPoint;	//��ʱ�ƿ�ʼʱ��
        NET_DVR_TIMEPOINT struEndPoint;	//��ʱ��ֹͣʱ��
    }NET_DVR_ZONEANDDST, *LPNET_DVR_ZONEANDDST;
    
    
    
    //ͼƬ����
    typedef struct 
    {
        /*ע�⣺��ͼ��ѹ���ֱ���ΪVGAʱ��֧��0=CIF, 1=QCIF, 2=D1ץͼ��
         ���ֱ���Ϊ3=UXGA(1600x1200), 4=SVGA(800x600), 5=HD720p(1280x720),6=VGA,7=XVGA, 8=HD900p
         ��֧�ֵ�ǰ�ֱ��ʵ�ץͼ*/
        WORD	wPicSize;				/* 0=CIF, 1=QCIF, 2=D1 3=UXGA(1600x1200), 4=SVGA(800x600), 5=HD720p(1280x720),6=VGA*/
        WORD	wPicQuality;			/* ͼƬ����ϵ�� 0-��� 1-�Ϻ� 2-һ�� */
    }NET_DVR_JPEGPARA, *LPNET_DVR_JPEGPARA;
    
    /* aux video out parameter */
    //���������������
    typedef struct 
    {
        DWORD dwSize;
        DWORD dwAlarmOutChan;                       /* ѡ�񱨾������󱨾�ͨ���л�ʱ�䣺1��������ͨ��: 0:�����/1:��1/2:��2/3:��3/4:��4 */
        DWORD dwAlarmChanSwitchTime;                /* :1�� - 10:10�� */
        DWORD dwAuxSwitchTime[MAX_AUXOUT];			/* ��������л�ʱ��: 0-���л�,1-5s,2-10s,3-20s,4-30s,5-60s,6-120s,7-300s */
        BYTE  byAuxOrder[MAX_AUXOUT][MAX_WINDOW];	/* �������Ԥ��˳��, 0xff��ʾ��Ӧ�Ĵ��ڲ�Ԥ�� */
    }NET_DVR_AUXOUTCFG, *LPNET_DVR_AUXOUTCFG;
    
    
    //ntp
    typedef struct 
    {
        BYTE sNTPServer[64];   /* Domain Name or IP addr of NTP server */
        WORD wInterval;		 /* adjust time interval(hours) */
        BYTE byEnableNTP;    /* enable NPT client 0-no��1-yes*/
        signed char cTimeDifferenceH; /* ����ʱ�׼ʱ��� Сʱƫ��-12 ... +13 */
        signed char cTimeDifferenceM;/* ����ʱ�׼ʱ��� ����ƫ��0, 30, 45*/
        BYTE res1;
        WORD wNtpPort;         /* ntp server port 9000���� �豸Ĭ��Ϊ123*/
        BYTE res2[8];
    }NET_DVR_NTPPARA, *LPNET_DVR_NTPPARA;
    
    //ddns
    typedef struct 
    {
        BYTE sUsername[NAME_LEN];  /* DDNS�˺��û���/���� */
        BYTE sPassword[PASSWD_LEN];
        BYTE sDomainName[64];       /* ���� */
        BYTE byEnableDDNS;			/*�Ƿ�Ӧ�� 0-��1-��*/
        BYTE res[15];
    }NET_DVR_DDNSPARA, *LPNET_DVR_DDNSPARA;
    
    
    typedef struct
    {
        BYTE byHostIndex;					/* 0-Hikvision DNS 1��Dyndns 2��PeanutHull(������), 3-ϣ��3322*/
        BYTE byEnableDDNS;					/*�Ƿ�Ӧ��DDNS 0-��1-��*/
        WORD wDDNSPort;						/* DDNS�˿ں� */
        BYTE sUsername[NAME_LEN];			/* DDNS�û���*/
        BYTE sPassword[PASSWD_LEN];			/* DDNS���� */
        BYTE sDomainName[MAX_DOMAIN_NAME];	/* �豸�䱸��������ַ */
        BYTE sServerName[MAX_DOMAIN_NAME];	/* DDNS ��Ӧ�ķ�������ַ��������IP��ַ������ */
        BYTE byRes[16];
    }NET_DVR_DDNSPARA_EX, *LPNET_DVR_DDNSPARA_EX;
    
    //9000��չ
    typedef struct
    {
        BYTE byEnableDDNS;
        BYTE byHostIndex;/* 0-Hikvision DNS(����) 1��Dyndns 2��PeanutHull(������) 3-ϣ��3322 */
        BYTE byRes1[2];
        struct
        {    
            BYTE sUsername[NAME_LEN];			/* DDNS�˺��û���*/
            BYTE sPassword[PASSWD_LEN];			/* ���� */
            BYTE sDomainName[MAX_DOMAIN_NAME];	/* �豸�䱸��������ַ */
            BYTE sServerName[MAX_DOMAIN_NAME];	/* DDNSЭ���Ӧ�ķ�������ַ��������IP��ַ������ */
            WORD wDDNSPort;						/* �˿ں� */
            BYTE byRes[10];
        } struDDNS[MAX_DDNS_NUMS];
        BYTE byRes2[16];
    }NET_DVR_DDNSPARA_V30, *LPNET_DVR_DDNSPARA_V30;
    
    //email
    typedef struct 
    {
        BYTE sUsername[64];  /* �ʼ��˺�/���� */
        BYTE sPassword[64];
        BYTE sSmtpServer[64];
        BYTE sPop3Server[64];
        BYTE sMailAddr[64];   /* email */
        BYTE sEventMailAddr1[64];  /* �ϴ�����/�쳣�ȵ�email */
        BYTE sEventMailAddr2[64];
        BYTE res[16];
    }NET_DVR_EMAILPARA, *LPNET_DVR_EMAILPARA;
    
    //�����������
    typedef struct 
    {
        DWORD  dwSize;
        char  sDNSIp[16];                /* DNS��������ַ */
        NET_DVR_NTPPARA  struNtpClientParam;      /* NTP���� */
        NET_DVR_DDNSPARA struDDNSClientParam;     /* DDNS���� */
        BYTE res[464];			/* ���� */
    }NET_DVR_NETAPPCFG, *LPNET_DVR_NETAPPCFG;
    
    //nfs�ṹ����
    typedef struct
    {
        char sNfsHostIPAddr[16];
        BYTE sNfsDirectory[PATHNAME_LEN];        // PATHNAME_LEN = 128
    }NET_DVR_SINGLE_NFS, *LPNET_DVR_SINGLE_NFS;
    
    typedef struct 
    {
        DWORD  dwSize;
        NET_DVR_SINGLE_NFS struNfsDiskParam[MAX_NFS_DISK];
    }NET_DVR_NFSCFG, *LPNET_DVR_NFSCFG;
    
    //Ѳ��������(HIK IP����ר��)
    typedef struct
    {
        BYTE	PresetNum;	//Ԥ�õ�
        BYTE	Dwell;		//ͣ��ʱ��
        BYTE	Speed;		//�ٶ�
        BYTE	Reserve;	//����
    }NET_DVR_CRUISE_POINT, *LPNET_DVR_CRUISE_POINT;
    
    typedef struct 
    {
        NET_DVR_CRUISE_POINT struCruisePoint[32];			//���֧��32��Ѳ����
    }NET_DVR_CRUISE_RET, *LPNET_DVR_CRUISE_RET;
    
    /************************************��·������(begin)***************************************/
    typedef struct 
    {
        DWORD	dwSize;
        char	sFirstDNSIP[16];
        char	sSecondDNSIP[16];
        char	sRes[32];
    }NET_DVR_NETCFG_OTHER, *LPNET_DVR_NETCFG_OTHER;
    
    typedef struct 
    {
        char 	sDVRIP[16];				/* DVR IP��ַ */
        WORD 	wDVRPort;			 	/* �˿ں� */
        BYTE 	byChannel;				/* ͨ���� */
        BYTE	byTransProtocol;			/* ����Э������ 0-TCP, 1-UDP */
        BYTE	byTransMode;				/* ��������ģʽ 0�������� 1��������*/
        BYTE	byRes[3];
        BYTE	sUserName[NAME_LEN];			/* ���������½�ʺ� */
        BYTE	sPassword[PASSWD_LEN];			/* ����������� */
    }NET_DVR_MATRIX_DECINFO, *LPNET_DVR_MATRIX_DECINFO;
    
    //����/ֹͣ��̬����
    typedef struct 
    {
        DWORD	dwSize;				
        NET_DVR_MATRIX_DECINFO struDecChanInfo;		/* ��̬����ͨ����Ϣ */
    }NET_DVR_MATRIX_DYNAMIC_DEC, *LPNET_DVR_MATRIX_DYNAMIC_DEC;
    
    typedef struct  
    {
        DWORD 	dwSize;
        DWORD   dwIsLinked;         /* ����ͨ��״̬ 0������ 1���������� 2�������� 3-���ڽ��� */
        DWORD   dwStreamCpRate;     /* Stream copy rate, X kbits/second */
        char    cRes[64];		/* ���� */
    }NET_DVR_MATRIX_DEC_CHAN_STATUS, *LPNET_DVR_MATRIX_DEC_CHAN_STATUS;
    
    typedef struct 
    {
        DWORD	dwSize;
        NET_DVR_MATRIX_DECINFO struDecChanInfo;		/* ����ͨ����Ϣ */
        DWORD	dwDecState;	/* 0-��̬���� 1��ѭ������ 2����ʱ��ط� 3�����ļ��ط� */
        NET_DVR_TIME StartTime;		/* ��ʱ��طſ�ʼʱ�� */
        NET_DVR_TIME StopTime;		/* ��ʱ��ط�ֹͣʱ�� */
        char    sFileName[128];		/* ���ļ��ط��ļ��� */
    }NET_DVR_MATRIX_DEC_CHAN_INFO, *LPNET_DVR_MATRIX_DEC_CHAN_INFO;
    
    //���ӵ�ͨ������ 2007-11-05
    typedef struct 
    {
        DWORD dwEnable;					/* �Ƿ����� 0���� 1������*/
        NET_DVR_MATRIX_DECINFO struDecChanInfo;		/* ��ѭ����ͨ����Ϣ */
    }NET_DVR_MATRIX_DECCHANINFO, *LPNET_DVR_MATRIX_DECCHANINFO;
    
    //2007-11-05 ����ÿ������ͨ��������
    typedef struct 
    {
        DWORD	dwSize;
        DWORD	dwPoolTime;			/*��Ѳʱ�� */
        NET_DVR_MATRIX_DECCHANINFO struchanConInfo[MAX_CYCLE_CHAN];
    }NET_DVR_MATRIX_LOOP_DECINFO, *LPNET_DVR_MATRIX_LOOP_DECINFO;
    
    //2007-12-22
    typedef struct 
    {
        BYTE	baudrate; 	/* ������ */
        BYTE	databits;		/* ����λ */
        BYTE	stopbits;		/* ֹͣλ */
        BYTE	parity;		/* ��żУ��λ */
        BYTE	flowcontrol;	/* ���� */
        BYTE	res[3];
    }TTY_CONFIG, *LPTTY_CONFIG;
    
    typedef struct  
    {					
        BYTE byTranChanEnable;	/* ��ǰ͸��ͨ���Ƿ�� 0���ر� 1���� */	
        /*
         *	��·������������1��485���ڣ�1��232���ڶ�������Ϊ͸��ͨ��,�豸�ŷ������£�
         *	0 RS485
         *	1 RS232 Console
         */
        BYTE	byLocalSerialDevice;			/* Local serial device */
        /*
         *	Զ�̴��������������,һ��RS232��һ��RS485
         *	1��ʾ232����
         *	2��ʾ485����
         */
        BYTE	byRemoteSerialDevice;			/* Remote output serial device */
        BYTE	res1;							/* ���� */
        char	sRemoteDevIP[16];				/* Remote Device IP */
        WORD	wRemoteDevPort;				/* Remote Net Communication Port */
        BYTE	res2[2];						/* ���� */
        TTY_CONFIG RemoteSerialDevCfg;
    }NET_DVR_MATRIX_TRAN_CHAN_INFO, *LPNET_DVR_MATRIX_TRAN_CHAN_INFO;
    
    typedef struct  
    {
        DWORD dwSize;
        BYTE 	by232IsDualChan; /* ������·232͸��ͨ����ȫ˫���� ȡֵ1��MAX_SERIAL_NUM */
        BYTE	by485IsDualChan; /* ������·485͸��ͨ����ȫ˫���� ȡֵ1��MAX_SERIAL_NUM */
        BYTE	res[2];	/* ���� */
        NET_DVR_MATRIX_TRAN_CHAN_INFO struTranInfo[MAX_SERIAL_NUM];/*ͬʱ֧�ֽ���MAX_SERIAL_NUM��͸��ͨ��*/
    }NET_DVR_MATRIX_TRAN_CHAN_CONFIG, *LPNET_DVR_MATRIX_TRAN_CHAN_CONFIG;
    
    //2007-12-24 Merry Christmas Eve...
    typedef struct 
    {
        DWORD	dwSize;
        char	sDVRIP[16];		/* DVR IP��ַ */	
        WORD	wDVRPort;			/* �˿ں� */	
        BYTE	byChannel;			/* ͨ���� */
        BYTE 	byReserve;
        BYTE	sUserName[NAME_LEN];		/* �û��� */
        BYTE	sPassword[PASSWD_LEN];		/* ���� */
        DWORD	dwPlayMode;   	/* 0�����ļ� 1����ʱ��*/        	
        NET_DVR_TIME StartTime;
        NET_DVR_TIME StopTime;
        char    sFileName[128];
    }NET_DVR_MATRIX_DEC_REMOTE_PLAY, *LPNET_DVR_MATRIX_DEC_REMOTE_PLAY;
    
    /* �ļ��������� */
#define NET_DVR_PLAYSTART		1//��ʼ����
#define NET_DVR_PLAYSTOP		2//ֹͣ����
#define NET_DVR_PLAYPAUSE		3//��ͣ����
#define NET_DVR_PLAYRESTART		4//�ָ�����
#define NET_DVR_PLAYFAST		5//���
#define NET_DVR_PLAYSLOW		6//����
#define NET_DVR_PLAYNORMAL		7//�����ٶ�
#define NET_DVR_PLAYSTARTAUDIO	9//������
#define NET_DVR_PLAYSTOPAUDIO	10//�ر�����
#define NET_DVR_PLAYSETPOS		12//�ı��ļ��طŵĽ���
    
    typedef struct 
    {
        DWORD	dwSize;
        DWORD	dwPlayCmd;		/* �������� ���ļ���������*/
        DWORD	dwCmdParam;		/* ����������� */
    }NET_DVR_MATRIX_DEC_REMOTE_PLAY_CONTROL, *LPNET_DVR_MATRIX_DEC_REMOTE_PLAY_CONTROL;
    
    typedef struct  
    {
        DWORD dwSize;
        DWORD dwCurMediaFileLen;		/* ��ǰ���ŵ�ý���ļ����� */       
        DWORD dwCurMediaFilePosition;	/* ��ǰ�����ļ��Ĳ���λ�� */        
        DWORD dwCurMediaFileDuration;	/* ��ǰ�����ļ�����ʱ�� */        
        DWORD dwCurPlayTime;			/* ��ǰ�Ѿ����ŵ�ʱ�� */        
        DWORD dwCurMediaFIleFrames;		/* ��ǰ�����ļ�����֡�� */        
        DWORD dwCurDataType;			/* ��ǰ������������ͣ�19-�ļ�ͷ��20-�����ݣ� 21-���Ž�����־ */        
        BYTE res[72];	
    }NET_DVR_MATRIX_DEC_REMOTE_PLAY_STATUS, *LPNET_DVR_MATRIX_DEC_REMOTE_PLAY_STATUS;
    /************************************��·������(end)***************************************/
    
    typedef struct 
    {	/* 12 bytes */
        DWORD	dwSize;
        char	sUserName[32];
        char 	sPassWord[32];
        char 	sFromName[32];			/* Sender *///�ַ����еĵ�һ���ַ������һ���ַ�������"@",�����ַ�����Ҫ��"@"�ַ�
        char 	sFromAddr[48];			/* Sender address */
        char 	sToName1[32];			/* Receiver1 */
        char 	sToName2[32];			/* Receiver2 */
        char 	sToAddr1[48];			/* Receiver address1 */
        char 	sToAddr2[48];			/* Receiver address2 */
        char	sEmailServer[32];		/* Email server address */
        BYTE	byServerType;			/* Email server type: 0-SMTP, 1-POP, 2-IMTP��*/
        BYTE	byUseAuthen;			/* Email server authentication method: 1-enable, 0-disable */
        BYTE	byAttachment;			/* enable attachment */
        BYTE	byMailinterval;			/* mail interval 0-2s, 1-3s, 2-4s. 3-5s*/
    } NET_DVR_EMAILCFG, *LPNET_DVR_EMAILCFG;
    
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_COMPRESSION_INFO_EX  struLowCompression;	//��ʱ¼��
        NET_DVR_COMPRESSION_INFO_EX  struEventCompression;	//�¼�����¼��
    }NET_DVR_COMPRESSIONCFG_NEW, *LPNET_DVR_COMPRESSIONCFG_NEW;
    
    //���λ����Ϣ
    typedef struct
    {
        WORD wAction;//��ȡʱ���ֶ���Ч
        WORD wPanPos;//ˮƽ����
        WORD wTiltPos;//��ֱ����
        WORD wZoomPos;//�䱶����
    }NET_DVR_PTZPOS, *LPNET_DVR_PTZPOS;
    
    //�����Χ��Ϣ
    typedef struct
    {
        WORD wPanPosMin;//ˮƽ����min
        WORD wPanPosMax;//ˮƽ����max
        WORD wTiltPosMin;//��ֱ����min
        WORD wTiltPosMax;//��ֱ����max
        WORD wZoomPosMin;//�䱶����min
        WORD wZoomPosMax;//�䱶����max
    }NET_DVR_PTZSCOPE, *LPNET_DVR_PTZSCOPE;
    
    //rtsp���� ipcameraר��
    typedef struct
    {
        DWORD dwSize;         //����
        WORD  wPort;          //rtsp�����������˿�
        BYTE  byReserve[54];  //Ԥ��
    }NET_DVR_RTSPCFG, *LPNET_DVR_RTSPCFG;
    
    
    /********************************�ӿڲ����ṹ(begin)*********************************/
    
    //NET_DVR_Login()�����ṹ
    typedef struct
    {
        BYTE sSerialNumber[SERIALNO_LEN];   //���к�
        BYTE byAlarmInPortNum;		        //DVR�����������
        BYTE byAlarmOutPortNum;		        //DVR�����������
        BYTE byDiskNum;				        //DVRӲ�̸���
        BYTE byDVRType;				        //DVR����, 1:DVR 2:ATM DVR 3:DVS ......
        BYTE byChanNum;				        //DVR ͨ������
        BYTE byStartChan;			        //��ʼͨ����,����DVS-1,DVR - 1
    }NET_DVR_DEVICEINFO, *LPNET_DVR_DEVICEINFO;
    
    //NET_DVR_Login_V30()�����ṹ
    typedef struct
    {
        BYTE sSerialNumber[SERIALNO_LEN];  //���к�
        BYTE byAlarmInPortNum;		        //�����������
        BYTE byAlarmOutPortNum;		        //�����������
        BYTE byDiskNum;				    //Ӳ�̸���
        BYTE byDVRType;				    //�豸����, 1:DVR 2:ATM DVR 3:DVS ......
        BYTE byChanNum;				    //ģ��ͨ������
        BYTE byStartChan;			        //��ʼͨ����,����DVS-1,DVR - 1
        BYTE byAudioChanNum;                //����ͨ����
        BYTE byIPChanNum;					//�������ͨ������  
        BYTE byRes1[24];					//����
    }NET_DVR_DEVICEINFO_V30, *LPNET_DVR_DEVICEINFO_V30;
    
    //sdk���绷��ö�ٱ���������Զ������
    typedef enum _SDK_NET_ENV
    {
        LOCAL_AREA_NETWORK = 0,
        WIDE_AREA_NETWORK
    }SDK_NETWORK_ENVIRONMENT;
    
    //��ʾģʽ
    typedef enum
    {
        NORMALMODE = 0,
        OVERLAYMODE
    }DISPLAY_MODE;
    
    //����ģʽ
    typedef enum
    {
        PTOPTCPMODE = 0,
        PTOPUDPMODE,
        MULTIMODE,
        RTPMODE,
        RESERVEDMODE
    }SEND_MODE;
    
    //ץͼģʽ
    typedef enum 
    {
        BMP_MODE = 0,		//BMPģʽ
        JPEG_MODE = 1		//JPEGģʽ 
    }CAPTURE_MODE;
    
    //ʵʱ����ģʽ
    typedef enum
    {
        MONOPOLIZE_MODE = 1,//��ռģʽ
        SHARE_MODE = 2		//����ģʽ
    }REALSOUND_MODE;
    
    //�����Ԥ������
    typedef struct
    {
        LONG lChannel;//ͨ����
        LONG lLinkMode;//���λ(31)Ϊ0��ʾ��������Ϊ1��ʾ�ӣ�0��30λ��ʾ�������ӷ�ʽ: 0��TCP��ʽ,1��UDP��ʽ,2���ಥ��ʽ,3 - RTP��ʽ��4-����Ƶ�ֿ�(TCP)
        HWND hPlayWnd;//���Ŵ��ڵľ��,ΪNULL��ʾ������ͼ��
        char* sMultiCastIP;//�ಥ���ַ
    }NET_DVR_CLIENTINFO, *LPNET_DVR_CLIENTINFO;
    
    //SDK״̬��Ϣ(9000����)
    typedef struct 
    {
        DWORD dwTotalLoginNum;		//��ǰlogin�û���
        DWORD dwTotalRealPlayNum;	//��ǰrealplay·��
        DWORD dwTotalPlayBackNum;	//��ǰ�طŻ�����·��
        DWORD dwTotalAlarmChanNum;	//��ǰ��������ͨ��·��
        DWORD dwTotalFormatNum;		//��ǰӲ�̸�ʽ��·��
        DWORD dwTotalFileSearchNum;	//��ǰ��־���ļ�����·��
        DWORD dwTotalLogSearchNum;	//��ǰ��־���ļ�����·��
        DWORD dwTotalSerialNum;	    //��ǰ͸��ͨ��·��
        DWORD dwTotalUpgradeNum;	//��ǰ����·��
        DWORD dwTotalVoiceComNum;	//��ǰ����ת��·��
        DWORD dwTotalBroadCastNum;	//��ǰ�����㲥·��
        DWORD dwRes[10];
    }NET_DVR_SDKSTATE, *LPNET_DVR_SDKSTATE;
    
    //SDK����֧����Ϣ(9000����)
    typedef struct 
    {
        DWORD dwMaxLoginNum;		//���login�û��� MAX_LOGIN_USERS
        DWORD dwMaxRealPlayNum;		//���realplay·�� WATCH_NUM
        DWORD dwMaxPlayBackNum;		//���طŻ�����·�� WATCH_NUM
        DWORD dwMaxAlarmChanNum;	//���������ͨ��·�� ALARM_NUM
        DWORD dwMaxFormatNum;		//���Ӳ�̸�ʽ��·�� SERVER_NUM
        DWORD dwMaxFileSearchNum;	//����ļ�����·�� SERVER_NUM
        DWORD dwMaxLogSearchNum;	//�����־����·�� SERVER_NUM
        DWORD dwMaxSerialNum;	    //���͸��ͨ��·�� SERVER_NUM
        DWORD dwMaxUpgradeNum;	    //�������·�� SERVER_NUM
        DWORD dwMaxVoiceComNum;		//�������ת��·�� SERVER_NUM
        DWORD dwMaxBroadCastNum;	//��������㲥·�� MAX_CASTNUM
        DWORD dwRes[10];
    }NET_DVR_SDKABL, *LPNET_DVR_SDKABL;
    
    //�����豸��Ϣ
    typedef struct
    {   
        BYTE byUserIDValid;                 /* userid�Ƿ���Ч 0-��Ч��1-��Ч */
        BYTE bySerialValid;                 /* ���к��Ƿ���Ч 0-��Ч��1-��Ч */
        BYTE byVersionValid;                /* �汾���Ƿ���Ч 0-��Ч��1-��Ч */
        BYTE byDeviceNameValid;             /* �豸�����Ƿ���Ч 0-��Ч��1-��Ч */
        BYTE byMacAddrValid;                /* MAC��ַ�Ƿ���Ч 0-��Ч��1-��Ч */    
        BYTE byLinkPortValid;               /* login�˿��Ƿ���Ч 0-��Ч��1-��Ч */
        BYTE byDeviceIPValid;               /* �豸IP�Ƿ���Ч 0-��Ч��1-��Ч */
        BYTE bySocketIPValid;               /* socket ip�Ƿ���Ч 0-��Ч��1-��Ч */
        LONG lUserID;                       /* NET_DVR_Login()����ֵ, ����ʱ��Ч */
        BYTE sSerialNumber[SERIALNO_LEN];	/* ���к� */
        DWORD dwDeviceVersion;			    /* �汾��Ϣ ��16λ��ʾ���汾����16λ��ʾ�ΰ汾*/
        char sDeviceName[NAME_LEN];		    /* �豸���� */
        BYTE byMacAddr[MACADDR_LEN];		/* MAC��ַ */    
        WORD wLinkPort;                     /* link port */
        char sDeviceIP[128];    			/* IP��ַ */
        char sSocketIP[128];    			/* ���������ϴ�ʱ��socket IP��ַ */
        BYTE byIpProtocol;                  /* IpЭ�� 0-IPV4, 1-IPV6 */
        WORD wSocketPort;                   /* ���������ϴ�ʱ��socket �˿� */
        BYTE byRes2[9];
    }NET_DVR_ALARMER, *LPNET_DVR_ALARMER;
    
    //Ӳ������ʾ�������(�ӽṹ)
    typedef struct
    {
        long bToScreen;
        long bToVideoOut;
        long nLeft;
        long nTop;
        long nWidth;
        long nHeight;
        long nReserved;
    }NET_DVR_DISPLAY_PARA, *LPNET_DVR_DISPLAY_PARA;
    
    //Ӳ����Ԥ������
    typedef struct
    {
        LONG lChannel;//ͨ����
        LONG lLinkMode; //���λ(31)Ϊ0��ʾ��������Ϊ1��ʾ�ӣ�0��30λ��ʾ�������ӷ�ʽ:0��TCP��ʽ,1��UDP��ʽ,2���ಥ��ʽ,3 - RTP��ʽ��4-�绰�ߣ�5��128k�����6��256k�����7��384k�����8��512k�����
        char* sMultiCastIP;
        NET_DVR_DISPLAY_PARA struDisplayPara;
    }NET_DVR_CARDINFO, *LPNET_DVR_CARDINFO;
    
    //¼���ļ�����
    typedef struct 
    {
        char sFileName[100];//�ļ���
        NET_DVR_TIME struStartTime;//�ļ��Ŀ�ʼʱ��
        NET_DVR_TIME struStopTime;//�ļ��Ľ���ʱ��
        DWORD dwFileSize;//�ļ��Ĵ�С
    }NET_DVR_FIND_DATA, *LPNET_DVR_FIND_DATA;
    
    //¼���ļ�����(9000)
    typedef struct 
    {
        char sFileName[100];//�ļ���
        NET_DVR_TIME struStartTime;//�ļ��Ŀ�ʼʱ��
        NET_DVR_TIME struStopTime;//�ļ��Ľ���ʱ��
        DWORD dwFileSize;//�ļ��Ĵ�С
        char sCardNum[32];
        BYTE byLocked;//9000�豸֧��,1��ʾ���ļ��Ѿ�������,0��ʾ�������ļ�
        BYTE byRes[3];
    }NET_DVR_FINDDATA_V30, *LPNET_DVR_FINDDATA_V30;
    
    //¼���ļ�����(������)
    typedef struct 
    {
        char sFileName[100];//�ļ���
        NET_DVR_TIME struStartTime;//�ļ��Ŀ�ʼʱ��
        NET_DVR_TIME struStopTime;//�ļ��Ľ���ʱ��
        DWORD dwFileSize;//�ļ��Ĵ�С
        char sCardNum[32];
    }NET_DVR_FINDDATA_CARD, *LPNET_DVR_FINDDATA_CARD;
    
    
    //¼���ļ����������ṹ
    typedef struct 
    {
        LONG lChannel;//ͨ����
        DWORD dwFileType;//¼���ļ�����0xff��ȫ����0����ʱ¼��,1-�ƶ���� ��2������������
        //3-����|�ƶ���� 4-����&�ƶ���� 5-����� 6-�ֶ�¼��
        DWORD dwIsLocked;//�Ƿ����� 0-�����ļ�,1-�����ļ�, 0xff��ʾ�����ļ�
        DWORD dwUseCardNo;//�Ƿ�ʹ�ÿ���
        BYTE sCardNumber[32];//����
        NET_DVR_TIME struStartTime;//��ʼʱ��
        NET_DVR_TIME struStopTime;//����ʱ��
    }NET_DVR_FILECOND, *LPNET_DVR_FILECOND;
    
    
    //��̨����ѡ��Ŵ���С(HIK ����ר��)
    typedef struct 
    {
        int xTop;     //������ʼ���x����
        int yTop;     //����������y����
        int xBottom;  //����������x����
        int yBottom;  //����������y����
        int bCounter; //����
    }NET_DVR_POINT_FRAME, *LPNET_DVR_POINT_FRAME;
    
    //�����Խ�����
    typedef struct 
    {
        BYTE  byAudioEncType;   //��Ƶ�������� 0-G722; 1-G711
        BYTE  byres[7];//���ﱣ����Ƶ��ѹ������ 
    }NET_DVR_COMPRESSION_AUDIO, *LPNET_DVR_COMPRESSION_AUDIO;
    
    /********************************�ӿڲ����ṹ(end)*********************************/
    
    
    /********************************SDK�ӿں�������*********************************/
    NET_DVR_API BOOL __stdcall NET_DVR_Init();
    NET_DVR_API BOOL __stdcall NET_DVR_Cleanup();
    
    //ע���쳣��Ϣ�ص�����
    NET_DVR_API BOOL __stdcall NET_DVR_SetExceptionCallBack_V30(UINT reserved1, void* reserved2, void (CALLBACK* fExceptionCallBack)(DWORD dwType, LONG lUserID, LONG lHandle, void *pUser), void *pUser);
    //ע�ᱨ���ص�����
    typedef void (CALLBACK *MSGCallBack)(LONG lCommand, NET_DVR_ALARMER *pAlarmer, char *pAlarmInfo, DWORD dwBufLen, void* pUser);
    NET_DVR_API BOOL __stdcall NET_DVR_SetDVRMessageCallBack_V30(MSGCallBack fMessageCallBack, void* pUser);
    //���ó�ʱ������
    NET_DVR_API BOOL __stdcall NET_DVR_SetConnectTime(DWORD dwWaitTime = 5000, DWORD dwTryTimes = 3);
    NET_DVR_API BOOL __stdcall NET_DVR_SetReconnect(DWORD dwInterval = 30000, BOOL bEnableRecon = TRUE);
    //��ȡsdk�汾��Ϣ
    NET_DVR_API DWORD __stdcall NET_DVR_GetSDKVersion();
    NET_DVR_API DWORD __stdcall NET_DVR_GetSDKBuildVersion();
    //ע��
    NET_DVR_API LONG __stdcall NET_DVR_Login(char *sDVRIP,WORD wDVRPort,char *sUserName,char *sPassword,LPNET_DVR_DEVICEINFO lpDeviceInfo);
    NET_DVR_API LONG __stdcall NET_DVR_Login_V30(char *sDVRIP, WORD wDVRPort, char *sUserName, char *sPassword, LPNET_DVR_DEVICEINFO_V30 lpDeviceInfo);
    NET_DVR_API BOOL __stdcall NET_DVR_Logout(LONG lUserID);
    NET_DVR_API BOOL __stdcall NET_DVR_Logout_V30(LONG lUserID);
    //��ȡ������
    NET_DVR_API DWORD __stdcall NET_DVR_GetLastError();
    NET_DVR_API char* __stdcall NET_DVR_GetErrorMsg(LONG *pErrorNo = NULL);
    
    //Ԥ��
    NET_DVR_API LONG __stdcall NET_DVR_RealPlay(LONG lUserID,LPNET_DVR_CLIENTINFO lpClientInfo);
    NET_DVR_API LONG __stdcall NET_DVR_RealPlay_V30(LONG lUserID, LPNET_DVR_CLIENTINFO lpClientInfo, void(CALLBACK *fRealDataCallBack_V30) (LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer, DWORD dwBufSize, void* pUser) = NULL, void* pUser = NULL, BOOL bBlocked = FALSE);
    NET_DVR_API BOOL __stdcall NET_DVR_StopRealPlay(LONG lRealHandle);
    
    //��̬����I֡
    NET_DVR_API BOOL __stdcall NET_DVR_MakeKeyFrame(LONG lUserID, LONG lChannel);//������
    NET_DVR_API BOOL __stdcall NET_DVR_MakeKeyFrameSub(LONG lUserID, LONG lChannel);//������
    
    //��Ƶ��������
    NET_DVR_API BOOL __stdcall NET_DVR_ClientSetVideoEffect(LONG lRealHandle,DWORD dwBrightValue,DWORD dwContrastValue, DWORD dwSaturationValue,DWORD dwHueValue);
    NET_DVR_API BOOL __stdcall NET_DVR_ClientGetVideoEffect(LONG lRealHandle,DWORD *pBrightValue,DWORD *pContrastValue, DWORD *pSaturationValue,DWORD *pHueValue);
    
    //����ʵʱ����
    NET_DVR_API BOOL __stdcall NET_DVR_SaveRealData(LONG lRealHandle,char *sFileName);
    NET_DVR_API BOOL __stdcall NET_DVR_StopSaveRealData(LONG lRealHandle);
    //ʵʱ���ݻص�
    NET_DVR_API BOOL __stdcall NET_DVR_SetRealDataCallBack(LONG lRealHandle,void(CALLBACK *fRealDataCallBack) (LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer,DWORD dwBufSize,DWORD dwUser),DWORD dwUser);
    
    //��̨����
    NET_DVR_API BOOL __stdcall NET_DVR_PTZControl(LONG lRealHandle,DWORD dwPTZCommand,DWORD dwStop);
    NET_DVR_API BOOL __stdcall NET_DVR_PTZControl_Other(LONG lUserID,LONG lChannel,DWORD dwPTZCommand,DWORD dwStop);
    NET_DVR_API BOOL __stdcall NET_DVR_TransPTZ(LONG lRealHandle,char *pPTZCodeBuf,DWORD dwBufSize);
    NET_DVR_API BOOL __stdcall NET_DVR_TransPTZ_Other(LONG lUserID,LONG lChannel,char *pPTZCodeBuf,DWORD dwBufSize);
    NET_DVR_API BOOL __stdcall NET_DVR_PTZPreset(LONG lRealHandle,DWORD dwPTZPresetCmd,DWORD dwPresetIndex);
    NET_DVR_API BOOL __stdcall NET_DVR_PTZPreset_Other(LONG lUserID,LONG lChannel,DWORD dwPTZPresetCmd,DWORD dwPresetIndex);
    NET_DVR_API BOOL __stdcall NET_DVR_TransPTZ_EX(LONG lRealHandle,char *pPTZCodeBuf,DWORD dwBufSize);
    NET_DVR_API BOOL __stdcall NET_DVR_PTZControl_EX(LONG lRealHandle,DWORD dwPTZCommand,DWORD dwStop);
    NET_DVR_API BOOL __stdcall NET_DVR_PTZPreset_EX(LONG lRealHandle,DWORD dwPTZPresetCmd,DWORD dwPresetIndex);
    NET_DVR_API BOOL __stdcall NET_DVR_PTZCruise(LONG lRealHandle,DWORD dwPTZCruiseCmd,BYTE byCruiseRoute, BYTE byCruisePoint, WORD wInput);
    NET_DVR_API BOOL __stdcall NET_DVR_PTZCruise_Other(LONG lUserID,LONG lChannel,DWORD dwPTZCruiseCmd,BYTE byCruiseRoute, BYTE byCruisePoint, WORD wInput);
    NET_DVR_API BOOL __stdcall NET_DVR_PTZCruise_EX(LONG lRealHandle,DWORD dwPTZCruiseCmd,BYTE byCruiseRoute, BYTE byCruisePoint, WORD wInput);
    NET_DVR_API BOOL __stdcall NET_DVR_PTZTrack(LONG lRealHandle, DWORD dwPTZTrackCmd);
    NET_DVR_API BOOL __stdcall NET_DVR_PTZTrack_Other(LONG lUserID, LONG lChannel, DWORD dwPTZTrackCmd);
    NET_DVR_API BOOL __stdcall NET_DVR_PTZTrack_EX(LONG lRealHandle, DWORD dwPTZTrackCmd);
    NET_DVR_API BOOL __stdcall NET_DVR_PTZControlWithSpeed(LONG lRealHandle, DWORD dwPTZCommand, DWORD dwStop, DWORD dwSpeed);
    NET_DVR_API BOOL __stdcall NET_DVR_PTZControlWithSpeed_Other(LONG lUserID, LONG lChannel, DWORD dwPTZCommand, DWORD dwStop, DWORD dwSpeed);
    NET_DVR_API BOOL __stdcall NET_DVR_PTZControlWithSpeed_EX(LONG lRealHandle, DWORD dwPTZCommand, DWORD dwStop, DWORD dwSpeed);
    NET_DVR_API BOOL __stdcall NET_DVR_GetPTZCruise(LONG lUserID,LONG lChannel,LONG lCruiseRoute, LPNET_DVR_CRUISE_RET lpCruiseRet);
    NET_DVR_API BOOL __stdcall NET_DVR_PTZMltTrack(LONG lRealHandle,DWORD dwPTZTrackCmd, DWORD dwTrackIndex);
    NET_DVR_API BOOL __stdcall NET_DVR_PTZMltTrack_Other(LONG lUserID,LONG lChannel,DWORD dwPTZTrackCmd, DWORD dwTrackIndex);
    NET_DVR_API BOOL __stdcall NET_DVR_PTZMltTrack_EX(LONG lRealHandle,DWORD dwPTZTrackCmd, DWORD dwTrackIndex);
    //��������
    NET_DVR_API LONG __stdcall NET_DVR_SetupAlarmChan(LONG lUserID);
    NET_DVR_API BOOL __stdcall NET_DVR_CloseAlarmChan(LONG lAlarmHandle);
    NET_DVR_API LONG __stdcall NET_DVR_SetupAlarmChan_V30(LONG lUserID);
    NET_DVR_API BOOL __stdcall NET_DVR_CloseAlarmChan_V30(LONG lAlarmHandle);
    //jpegץͼ
    NET_DVR_API BOOL __stdcall NET_DVR_CaptureJPEGPicture(LONG lUserID, LONG lChannel, LPNET_DVR_JPEGPARA lpJpegPara, char *sPicFileName);
    //JPEGץͼ���ڴ�
    NET_DVR_API BOOL __stdcall NET_DVR_CaptureJPEGPicture_NEW(LONG lUserID, LONG lChannel, LPNET_DVR_JPEGPARA lpJpegPara, char *sJpegPicBuffer, DWORD dwPicSize,  LPDWORD lpSizeReturned);
    //����
    NET_DVR_API BOOL __stdcall NET_DVR_RebootDVR(LONG lUserID);
    //�ر�DVR
    NET_DVR_API BOOL __stdcall NET_DVR_ShutDownDVR(LONG lUserID);
    //��������
    NET_DVR_API BOOL __stdcall NET_DVR_GetDVRConfig(LONG lUserID, DWORD dwCommand,LONG lChannel, LPVOID lpOutBuffer, DWORD dwOutBufferSize, LPDWORD lpBytesReturned);
    NET_DVR_API BOOL __stdcall NET_DVR_SetDVRConfig(LONG lUserID, DWORD dwCommand,LONG lChannel, LPVOID lpInBuffer, DWORD dwInBufferSize);
    
    
    
    /*
     //2005.01.11 ���������ӿ�,Linuxר�� 
     NET_DVR_API BOOL NET_DVR_DrawAreaInit( INITINFO InitInfo );
     NET_DVR_API BOOL NET_DVR_DrawAreaRelease();
     
     //NET_DVR_SetDVRMessage����չ
     NET_DVR_API BOOL __stdcall NET_DVR_SetExceptionCallBack_V30(UINT reserved1, void* reserved2, void (CALLBACK* fExceptionCallBack)(DWORD dwType, LONG lUserID, LONG lHandle, void *pUser), void *pUser);
     NET_DVR_API BOOL __stdcall NET_DVR_SetDVRMessCallBack(BOOL (CALLBACK *fMessCallBack)(LONG lCommand,char *sDVRIP,char *pBuf,DWORD dwBufLen));
     NET_DVR_API BOOL __stdcall NET_DVR_SetDVRMessCallBack_EX(BOOL (CALLBACK *fMessCallBack_EX)(LONG lCommand,LONG lUserID,char *pBuf,DWORD dwBufLen));
     NET_DVR_API BOOL __stdcall NET_DVR_SetDVRMessCallBack_NEW(BOOL (CALLBACK *fMessCallBack_NEW)(LONG lCommand,char *sDVRIP,char *pBuf,DWORD dwBufLen, WORD dwLinkDVRPort));
     NET_DVR_API BOOL __stdcall NET_DVR_SetDVRMessageCallBack(BOOL (CALLBACK *fMessageCallBack)(LONG lCommand,char *sDVRIP,char *pBuf,DWORD dwBufLen, DWORD dwUser), DWORD dwUser);
     typedef void (CALLBACK *MSGCallBack)(LONG lCommand, NET_DVR_ALARMER *pAlarmer, char *pAlarmInfo, DWORD dwBufLen, void* pUser);
     NET_DVR_API BOOL __stdcall NET_DVR_SetDVRMessageCallBack_V30(MSGCallBack fMessageCallBack, void* pUser);
     
     NET_DVR_API BOOL __stdcall NET_DVR_SetConnectTime(DWORD dwWaitTime = 5000, DWORD dwTryTimes = 3);
     NET_DVR_API BOOL __stdcall NET_DVR_SetReconnect(DWORD dwInterval = 30000, BOOL bEnableRecon = TRUE);
     NET_DVR_API DWORD __stdcall NET_DVR_GetSDKVersion();
     NET_DVR_API DWORD __stdcall NET_DVR_GetSDKBuildVersion();
     NET_DVR_API int __stdcall NET_DVR_IsSupport();
     NET_DVR_API BOOL __stdcall NET_DVR_StartListen(char *sLocalIP,WORD wLocalPort);
     NET_DVR_API BOOL __stdcall NET_DVR_StopListen();
     
     NET_DVR_API LONG __stdcall NET_DVR_StartListen_V30(char *sLocalIP, WORD wLocalPort, MSGCallBack DataCallback = NULL, void* pUserData = NULL);
     NET_DVR_API BOOL __stdcall NET_DVR_StopListen_V30(LONG lListenHandle);
     NET_DVR_API LONG __stdcall NET_DVR_Login(char *sDVRIP,WORD wDVRPort,char *sUserName,char *sPassword,LPNET_DVR_DEVICEINFO lpDeviceInfo);
     NET_DVR_API LONG __stdcall NET_DVR_Login_V30(char *sDVRIP, WORD wDVRPort, char *sUserName, char *sPassword, LPNET_DVR_DEVICEINFO_V30 lpDeviceInfo);
     NET_DVR_API BOOL __stdcall NET_DVR_Logout(LONG lUserID);
     NET_DVR_API BOOL __stdcall NET_DVR_Logout_V30(LONG lUserID);
     NET_DVR_API DWORD __stdcall NET_DVR_GetLastError();
     NET_DVR_API char* __stdcall NET_DVR_GetErrorMsg(LONG *pErrorNo = NULL);
     
     NET_DVR_API BOOL __stdcall NET_DVR_GetDVRIPByResolveSvr(char *sServerIP, WORD wServerPort, BYTE *sDVRName,WORD wDVRNameLen,BYTE *sDVRSerialNumber,WORD wDVRSerialLen,char* sGetIP);
     NET_DVR_API BOOL  __stdcall NET_DVR_GetDVRIPByResolveSvr_EX(char *sServerIP, WORD wServerPort, unsigned char *sDVRName, WORD wDVRNameLen, BYTE *sDVRSerialNumber, WORD wDVRSerialLen, char* sGetIP, DWORD *dwPort);
     
     //Ԥ����ؽӿ�
     NET_DVR_API LONG __stdcall NET_DVR_RealPlay(LONG lUserID,LPNET_DVR_CLIENTINFO lpClientInfo);
     NET_DVR_API LONG __stdcall NET_DVR_RealPlay_V30(LONG lUserID, LPNET_DVR_CLIENTINFO lpClientInfo, void(CALLBACK *fRealDataCallBack_V30) (LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer, DWORD dwBufSize, void* pUser) = NULL, void* pUser = NULL, BOOL bBlocked = FALSE);
     NET_DVR_API BOOL __stdcall NET_DVR_StopRealPlay(LONG lRealHandle);
     
     NET_DVR_API BOOL __stdcall NET_DVR_SetPlayerBufNumber(LONG lRealHandle,DWORD dwBufNum);
     NET_DVR_API BOOL __stdcall NET_DVR_ThrowBFrame(LONG lRealHandle,DWORD dwNum);
     NET_DVR_API BOOL __stdcall NET_DVR_SetAudioMode(DWORD dwMode);
     NET_DVR_API BOOL __stdcall NET_DVR_OpenSound(LONG lRealHandle);
     NET_DVR_API BOOL __stdcall NET_DVR_CloseSound();
     NET_DVR_API BOOL __stdcall NET_DVR_OpenSoundShare(LONG lRealHandle);
     NET_DVR_API BOOL __stdcall NET_DVR_CloseSoundShare(LONG lRealHandle);
     NET_DVR_API BOOL __stdcall NET_DVR_Volume(LONG lRealHandle,WORD wVolume);
     NET_DVR_API BOOL __stdcall NET_DVR_SaveRealData(LONG lRealHandle,char *sFileName);
     NET_DVR_API BOOL __stdcall NET_DVR_StopSaveRealData(LONG lRealHandle);
     NET_DVR_API BOOL __stdcall NET_DVR_SetRealDataCallBack(LONG lRealHandle,void(CALLBACK *fRealDataCallBack) (LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer,DWORD dwBufSize,DWORD dwUser),DWORD dwUser);
     NET_DVR_API BOOL __stdcall NET_DVR_SetStandardDataCallBack(LONG lRealHandle,void(CALLBACK *fStdDataCallBack) (LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer,DWORD dwBufSize,DWORD dwUser),DWORD dwUser);
     NET_DVR_API BOOL __stdcall NET_DVR_CapturePicture(LONG lRealHandle,char *sPicFileName);//bmp
     
     //��̬����I֡
     NET_DVR_API BOOL __stdcall NET_DVR_MakeKeyFrame(LONG lUserID, LONG lChannel);//������
     NET_DVR_API BOOL __stdcall NET_DVR_MakeKeyFrameSub(LONG lUserID, LONG lChannel);//������
     
     //��̨������ؽӿ�
     NET_DVR_API BOOL __stdcall NET_DVR_PTZControl(LONG lRealHandle,DWORD dwPTZCommand,DWORD dwStop);
     NET_DVR_API BOOL __stdcall NET_DVR_PTZControl_Other(LONG lUserID,LONG lChannel,DWORD dwPTZCommand,DWORD dwStop);
     NET_DVR_API BOOL __stdcall NET_DVR_TransPTZ(LONG lRealHandle,char *pPTZCodeBuf,DWORD dwBufSize);
     NET_DVR_API BOOL __stdcall NET_DVR_TransPTZ_Other(LONG lUserID,LONG lChannel,char *pPTZCodeBuf,DWORD dwBufSize);
     NET_DVR_API BOOL __stdcall NET_DVR_PTZPreset(LONG lRealHandle,DWORD dwPTZPresetCmd,DWORD dwPresetIndex);
     NET_DVR_API BOOL __stdcall NET_DVR_PTZPreset_Other(LONG lUserID,LONG lChannel,DWORD dwPTZPresetCmd,DWORD dwPresetIndex);
     NET_DVR_API BOOL __stdcall NET_DVR_TransPTZ_EX(LONG lRealHandle,char *pPTZCodeBuf,DWORD dwBufSize);
     NET_DVR_API BOOL __stdcall NET_DVR_PTZControl_EX(LONG lRealHandle,DWORD dwPTZCommand,DWORD dwStop);
     NET_DVR_API BOOL __stdcall NET_DVR_PTZPreset_EX(LONG lRealHandle,DWORD dwPTZPresetCmd,DWORD dwPresetIndex);
     NET_DVR_API BOOL __stdcall NET_DVR_PTZCruise(LONG lRealHandle,DWORD dwPTZCruiseCmd,BYTE byCruiseRoute, BYTE byCruisePoint, WORD wInput);
     NET_DVR_API BOOL __stdcall NET_DVR_PTZCruise_Other(LONG lUserID,LONG lChannel,DWORD dwPTZCruiseCmd,BYTE byCruiseRoute, BYTE byCruisePoint, WORD wInput);
     NET_DVR_API BOOL __stdcall NET_DVR_PTZCruise_EX(LONG lRealHandle,DWORD dwPTZCruiseCmd,BYTE byCruiseRoute, BYTE byCruisePoint, WORD wInput);
     NET_DVR_API BOOL __stdcall NET_DVR_PTZTrack(LONG lRealHandle, DWORD dwPTZTrackCmd);
     NET_DVR_API BOOL __stdcall NET_DVR_PTZTrack_Other(LONG lUserID, LONG lChannel, DWORD dwPTZTrackCmd);
     NET_DVR_API BOOL __stdcall NET_DVR_PTZTrack_EX(LONG lRealHandle, DWORD dwPTZTrackCmd);
     NET_DVR_API BOOL __stdcall NET_DVR_PTZControlWithSpeed(LONG lRealHandle, DWORD dwPTZCommand, DWORD dwStop, DWORD dwSpeed);
     NET_DVR_API BOOL __stdcall NET_DVR_PTZControlWithSpeed_Other(LONG lUserID, LONG lChannel, DWORD dwPTZCommand, DWORD dwStop, DWORD dwSpeed);
     NET_DVR_API BOOL __stdcall NET_DVR_PTZControlWithSpeed_EX(LONG lRealHandle, DWORD dwPTZCommand, DWORD dwStop, DWORD dwSpeed);
     NET_DVR_API BOOL __stdcall NET_DVR_GetPTZCruise(LONG lUserID,LONG lChannel,LONG lCruiseRoute, LPNET_DVR_CRUISE_RET lpCruiseRet);
     NET_DVR_API BOOL __stdcall NET_DVR_PTZMltTrack(LONG lRealHandle,DWORD dwPTZTrackCmd, DWORD dwTrackIndex);
     NET_DVR_API BOOL __stdcall NET_DVR_PTZMltTrack_Other(LONG lUserID,LONG lChannel,DWORD dwPTZTrackCmd, DWORD dwTrackIndex);
     NET_DVR_API BOOL __stdcall NET_DVR_PTZMltTrack_EX(LONG lRealHandle,DWORD dwPTZTrackCmd, DWORD dwTrackIndex);
     
     //�ļ�������ط�
     NET_DVR_API LONG __stdcall NET_DVR_FindFile(LONG lUserID,LONG lChannel,DWORD dwFileType, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime);
     NET_DVR_API LONG __stdcall NET_DVR_FindNextFile(LONG lFindHandle,LPNET_DVR_FIND_DATA lpFindData);
     NET_DVR_API BOOL __stdcall NET_DVR_FindClose(LONG lFindHandle);
     NET_DVR_API LONG __stdcall NET_DVR_FindNextFile_V30(LONG lFindHandle, LPNET_DVR_FINDDATA_V30 lpFindData);
     NET_DVR_API LONG __stdcall NET_DVR_FindFile_V30(LONG lUserID, LPNET_DVR_FILECOND pFindCond);
     NET_DVR_API BOOL __stdcall NET_DVR_FindClose_V30(LONG lFindHandle);
     //2007-04-16���Ӳ�ѯ��������ŵ��ļ�����
     NET_DVR_API LONG __stdcall NET_DVR_FindNextFile_Card(LONG lFindHandle, LPNET_DVR_FINDDATA_CARD lpFindData);
     NET_DVR_API LONG __stdcall NET_DVR_FindFile_Card(LONG lUserID, LONG lChannel, DWORD dwFileType, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime);
     NET_DVR_API BOOL __stdcall NET_DVR_LockFileByName(LONG lUserID, char *sLockFileName);
     NET_DVR_API BOOL __stdcall NET_DVR_UnlockFileByName(LONG lUserID, char *sUnlockFileName);
     NET_DVR_API LONG __stdcall NET_DVR_PlayBackByName(LONG lUserID,char *sPlayBackFileName, HWND hWnd);
     NET_DVR_API LONG __stdcall NET_DVR_PlayBackByTime(LONG lUserID,LONG lChannel, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime, HWND hWnd);
     NET_DVR_API BOOL __stdcall NET_DVR_PlayBackControl(LONG lPlayHandle,DWORD dwControlCode,DWORD dwInValue,DWORD *LPOutValue);
     NET_DVR_API BOOL __stdcall NET_DVR_StopPlayBack(LONG lPlayHandle);
     NET_DVR_API BOOL __stdcall NET_DVR_SetPlayDataCallBack(LONG lPlayHandle,void(CALLBACK *fPlayDataCallBack) (LONG lPlayHandle, DWORD dwDataType, BYTE *pBuffer,DWORD dwBufSize,DWORD dwUser),DWORD dwUser);
     NET_DVR_API BOOL __stdcall NET_DVR_PlayBackSaveData(LONG lPlayHandle,char *sFileName);
     NET_DVR_API BOOL __stdcall NET_DVR_StopPlayBackSave(LONG lPlayHandle);
     NET_DVR_API BOOL __stdcall NET_DVR_GetPlayBackOsdTime(LONG lPlayHandle, LPNET_DVR_TIME lpOsdTime);
     NET_DVR_API BOOL __stdcall NET_DVR_PlayBackCaptureFile(LONG lPlayHandle,char *sFileName);
     NET_DVR_API LONG __stdcall NET_DVR_GetFileByName(LONG lUserID,char *sDVRFileName,char *sSavedFileName);
     NET_DVR_API LONG __stdcall NET_DVR_GetFileByTime(LONG lUserID,LONG lChannel, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime, char *sSavedFileName);
     NET_DVR_API BOOL __stdcall NET_DVR_StopGetFile(LONG lFileHandle);
     NET_DVR_API int __stdcall NET_DVR_GetDownloadPos(LONG lFileHandle);
     NET_DVR_API int	__stdcall NET_DVR_GetPlayBackPos(LONG lPlayHandle);
     
     //����
     NET_DVR_API LONG __stdcall NET_DVR_Upgrade(LONG lUserID, char *sFileName);
     NET_DVR_API int __stdcall NET_DVR_GetUpgradeState(LONG lUpgradeHandle);
     NET_DVR_API int __stdcall NET_DVR_GetUpgradeProgress(LONG lUpgradeHandle);
     NET_DVR_API BOOL __stdcall NET_DVR_CloseUpgradeHandle(LONG lUpgradeHandle);
     NET_DVR_API BOOL __stdcall NET_DVR_SetNetworkEnvironment(DWORD dwEnvironmentLevel);
     //Զ�̸�ʽ��Ӳ��
     NET_DVR_API LONG __stdcall NET_DVR_FormatDisk(LONG lUserID,LONG lDiskNumber);
     NET_DVR_API BOOL __stdcall NET_DVR_GetFormatProgress(LONG lFormatHandle, LONG *pCurrentFormatDisk,LONG *pCurrentDiskPos,LONG *pFormatStatic);
     NET_DVR_API BOOL __stdcall NET_DVR_CloseFormatHandle(LONG lFormatHandle);
     //����
     NET_DVR_API LONG __stdcall NET_DVR_SetupAlarmChan(LONG lUserID);
     NET_DVR_API BOOL __stdcall NET_DVR_CloseAlarmChan(LONG lAlarmHandle);
     NET_DVR_API LONG __stdcall NET_DVR_SetupAlarmChan_V30(LONG lUserID);
     NET_DVR_API BOOL __stdcall NET_DVR_CloseAlarmChan_V30(LONG lAlarmHandle);
     
     //�����Խ�
     
     NET_DVR_API BOOL __stdcall NET_DVR_StopVoiceCom(LONG lVoiceComHandle);
     //����ת��
     NET_DVR_API LONG __stdcall NET_DVR_StartVoiceCom_MR(LONG lUserID, void(CALLBACK *fVoiceDataCallBack)(LONG lVoiceComHandle, char *pRecvDataBuffer, DWORD dwBufSize, BYTE byAudioFlag, DWORD dwUser), DWORD dwUser);
     NET_DVR_API LONG __stdcall NET_DVR_StartVoiceCom_MR_V30(LONG lUserID, DWORD dwVoiceChan, void(CALLBACK *fVoiceDataCallBack)(LONG lVoiceComHandle, char *pRecvDataBuffer, DWORD dwBufSize, BYTE byAudioFlag, void* pUser), void* pUser);
     NET_DVR_API BOOL __stdcall NET_DVR_VoiceComSendData(LONG lVoiceComHandle, char *pSendBuf, DWORD dwBufSize);
     
     //�����㲥
     
     ////////////////////////////////////////////////////////////
     //͸��ͨ������
     NET_DVR_API LONG __stdcall NET_DVR_SerialStart(LONG lUserID,LONG lSerialPort,void(CALLBACK *fSerialDataCallBack)(LONG lSerialHandle,char *pRecvDataBuffer,DWORD dwBufSize,DWORD dwUser),DWORD dwUser);
     //485��Ϊ͸��ͨ��ʱ����Ҫָ��ͨ���ţ���Ϊ��ͬͨ����485�����ÿ��Բ�ͬ(���粨����)
     NET_DVR_API BOOL __stdcall NET_DVR_SerialSend(LONG lSerialHandle, LONG lChannel, char *pSendBuf,DWORD dwBufSize);
     NET_DVR_API BOOL __stdcall NET_DVR_SerialStop(LONG lSerialHandle);
     NET_DVR_API BOOL __stdcall NET_DVR_SendTo232Port(LONG lUserID, char *pSendBuf, DWORD dwBufSize);
     NET_DVR_API BOOL __stdcall NET_DVR_SendToSerialPort(LONG lUserID, DWORD dwSerialPort, DWORD dwSerialIndex, char *pSendBuf, DWORD dwBufSize);
     
     //���� nBitrate = 16000
     NET_DVR_API void* __stdcall NET_DVR_InitG722Decoder(int nBitrate = 16000);
     NET_DVR_API void __stdcall NET_DVR_ReleaseG722Decoder(void *pDecHandle);
     NET_DVR_API BOOL __stdcall NET_DVR_DecodeG722Frame(void *pDecHandle, unsigned char* pInBuffer, unsigned char* pOutBuffer);
     //����
     NET_DVR_API void* __stdcall NET_DVR_InitG722Encoder();
     NET_DVR_API BOOL __stdcall NET_DVR_EncodeG722Frame(void *pEncodeHandle,unsigned char* pInBuffer, unsigned char* pOutBuffer);
     NET_DVR_API void __stdcall NET_DVR_ReleaseG722Encoder(void *pEncodeHandle);
     
     //Զ�̿��Ʊ�����ʾ
     NET_DVR_API BOOL __stdcall NET_DVR_ClickKey(LONG lUserID, LONG lKeyIndex);
     //Զ�̿����豸���ֶ�¼��
     NET_DVR_API BOOL __stdcall NET_DVR_StartDVRRecord(LONG lUserID,LONG lChannel,LONG lRecordType);
     NET_DVR_API BOOL __stdcall NET_DVR_StopDVRRecord(LONG lUserID,LONG lChannel);
     //���뿨
     
     //��־
     NET_DVR_API LONG __stdcall NET_DVR_FindDVRLog(LONG lUserID, LONG lSelectMode, DWORD dwMajorType,DWORD dwMinorType, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime);
     NET_DVR_API LONG __stdcall NET_DVR_FindNextLog(LONG lLogHandle, LPNET_DVR_LOG lpLogData);
     NET_DVR_API BOOL __stdcall NET_DVR_FindLogClose(LONG lLogHandle);
     NET_DVR_API LONG __stdcall NET_DVR_FindDVRLog_V30(LONG lUserID, LONG lSelectMode, DWORD dwMajorType,DWORD dwMinorType, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime, BOOL bOnlySmart = FALSE);
     NET_DVR_API LONG __stdcall NET_DVR_FindNextLog_V30(LONG lLogHandle, LPNET_DVR_LOG_V30 lpLogData);
     NET_DVR_API BOOL __stdcall NET_DVR_FindLogClose_V30(LONG lLogHandle);
     //��ֹ2004��8��5��,��113���ӿ�
     //ATM DVR
     NET_DVR_API LONG __stdcall NET_DVR_FindFileByCard(LONG lUserID,LONG lChannel,DWORD dwFileType, int nFindType, BYTE *sCardNumber, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime);
     //��ֹ2004��10��5��,��116���ӿ�
     
     
     
     //����
     NET_DVR_API void* __stdcall NET_DVR_InitG722Encoder();
     NET_DVR_API BOOL __stdcall NET_DVR_EncodeG722Frame(void *pEncodeHandle,unsigned char* pInBuffer, unsigned char* pOutBuffer);
     NET_DVR_API void __stdcall NET_DVR_ReleaseG722Encoder(void *pEncodeHandle);
     //2005-09-15
     NET_DVR_API BOOL __stdcall NET_DVR_CaptureJPEGPicture(LONG lUserID, LONG lChannel, LPNET_DVR_JPEGPARA lpJpegPara, char *sPicFileName);
     //JPEGץͼ���ڴ�
     NET_DVR_API BOOL __stdcall NET_DVR_CaptureJPEGPicture_NEW(LONG lUserID, LONG lChannel, LPNET_DVR_JPEGPARA lpJpegPara, char *sJpegPicBuffer, DWORD dwPicSize,  LPDWORD lpSizeReturned);
     
     
     //2006-02-16
     NET_DVR_API int __stdcall NET_DVR_GetRealPlayerIndex(LONG lRealHandle);
     NET_DVR_API int __stdcall NET_DVR_GetPlayBackPlayerIndex(LONG lPlayHandle);
     
     //2006-08-28 704-640 ��������
     NET_DVR_API BOOL __stdcall NET_DVR_SetScaleCFG(LONG lUserID, DWORD dwScale);
     NET_DVR_API BOOL __stdcall NET_DVR_GetScaleCFG(LONG lUserID, DWORD *lpOutScale);
     NET_DVR_API BOOL __stdcall NET_DVR_SetScaleCFG_V30(LONG lUserID, LPNET_DVR_SCALECFG pScalecfg);
     NET_DVR_API BOOL __stdcall NET_DVR_GetScaleCFG_V30(LONG lUserID, LPNET_DVR_SCALECFG pScalecfg);
     //2006-08-28 ATM���˿�����
     NET_DVR_API BOOL __stdcall NET_DVR_SetATMPortCFG(LONG lUserID, WORD wATMPort);
     NET_DVR_API BOOL __stdcall NET_DVR_GetATMPortCFG(LONG lUserID, WORD *LPOutATMPort);
     
     //2006-11-10 ֧���Կ��������
     NET_DVR_API BOOL __stdcall NET_DVR_InitDDrawDevice();
     NET_DVR_API BOOL __stdcall NET_DVR_ReleaseDDrawDevice();
     NET_DVR_API LONG __stdcall NET_DVR_GetDDrawDeviceTotalNums();
     NET_DVR_API BOOL __stdcall NET_DVR_SetDDrawDevice(LONG lPlayPort, DWORD nDeviceNum);
     
     NET_DVR_API BOOL __stdcall NET_DVR_PTZSelZoomIn(LONG lRealHandle, LPNET_DVR_POINT_FRAME pStruPointFrame);
     NET_DVR_API BOOL __stdcall NET_DVR_PTZSelZoomIn_EX(LONG lUserID, LONG lChannel, LPNET_DVR_POINT_FRAME pStruPointFrame);
     
     
     
     //�����豸DS-6001D/DS-6001F
     NET_DVR_API BOOL __stdcall NET_DVR_StartDecode(LONG lUserID, LONG lChannel, LPNET_DVR_DECODERINFO lpDecoderinfo);
     NET_DVR_API BOOL __stdcall NET_DVR_StopDecode(LONG lUserID, LONG lChannel);
     NET_DVR_API BOOL __stdcall NET_DVR_GetDecoderState(LONG lUserID, LONG lChannel, LPNET_DVR_DECODERSTATE lpDecoderState);
     //2005-08-01
     NET_DVR_API BOOL __stdcall NET_DVR_SetDecInfo(LONG lUserID, LONG lChannel, LPNET_DVR_DECCFG lpDecoderinfo);
     NET_DVR_API BOOL __stdcall NET_DVR_GetDecInfo(LONG lUserID, LONG lChannel, LPNET_DVR_DECCFG lpDecoderinfo);
     NET_DVR_API BOOL __stdcall NET_DVR_SetDecTransPort(LONG lUserID, LPNET_DVR_PORTCFG lpTransPort);
     NET_DVR_API BOOL __stdcall NET_DVR_GetDecTransPort(LONG lUserID, LPNET_DVR_PORTCFG lpTransPort);
     NET_DVR_API BOOL __stdcall NET_DVR_DecPlayBackCtrl(LONG lUserID, LONG lChannel, DWORD dwControlCode, DWORD dwInValue,DWORD *LPOutValue, LPNET_DVR_PLAYREMOTEFILE lpRemoteFileInfo);
     NET_DVR_API BOOL __stdcall NET_DVR_StartDecSpecialCon(LONG lUserID, LONG lChannel, LPNET_DVR_DECCHANINFO lpDecChanInfo);
     NET_DVR_API BOOL __stdcall NET_DVR_StopDecSpecialCon(LONG lUserID, LONG lChannel, LPNET_DVR_DECCHANINFO lpDecChanInfo);
     NET_DVR_API BOOL __stdcall NET_DVR_DecCtrlDec(LONG lUserID, LONG lChannel, DWORD dwControlCode);
     NET_DVR_API BOOL __stdcall NET_DVR_DecCtrlScreen(LONG lUserID, LONG lChannel, DWORD dwControl);
     NET_DVR_API BOOL __stdcall NET_DVR_GetDecCurLinkStatus(LONG lUserID, LONG lChannel, LPNET_DVR_DECSTATUS lpDecStatus);
     
     //��·������
     //2007-11-30 V211֧�����½ӿ� //11
     NET_DVR_API BOOL __stdcall NET_DVR_MatrixStartDynamic(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_DYNAMIC_DEC lpDynamicInfo);
     NET_DVR_API BOOL __stdcall NET_DVR_MatrixStopDynamic(LONG lUserID, DWORD dwDecChanNum); 
     NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetDecChanInfo(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_DEC_CHAN_INFO lpInter);
     NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetLoopDecChanInfo(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_LOOP_DECINFO lpInter);
     NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetLoopDecChanInfo(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_LOOP_DECINFO lpInter);
     NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetLoopDecChanEnable(LONG lUserID, DWORD dwDecChanNum, DWORD dwEnable);
     NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetLoopDecChanEnable(LONG lUserID, DWORD dwDecChanNum, LPDWORD lpdwEnable);
     NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetLoopDecEnable(LONG lUserID, LPDWORD lpdwEnable);
     NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetDecChanEnable(LONG lUserID, DWORD dwDecChanNum, DWORD dwEnable);
     NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetDecChanEnable(LONG lUserID, DWORD dwDecChanNum, LPDWORD lpdwEnable);
     NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetDecChanStatus(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_DEC_CHAN_STATUS lpInter);
     //2007-12-22 ����֧�ֽӿ� //18
     NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetTranInfo(LONG lUserID, LPNET_DVR_MATRIX_TRAN_CHAN_CONFIG lpTranInfo);
     NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetTranInfo(LONG lUserID, LPNET_DVR_MATRIX_TRAN_CHAN_CONFIG lpTranInfo);
     NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetRemotePlay(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_DEC_REMOTE_PLAY lpInter);
     NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetRemotePlayControl(LONG lUserID, DWORD dwDecChanNum, DWORD dwControlCode, DWORD dwInValue, DWORD *LPOutValue);
     NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetRemotePlayStatus(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_DEC_REMOTE_PLAY_STATUS lpOuter);
     //end
     NET_DVR_API BOOL __stdcall NET_DVR_RefreshPlay(LONG lPlayHandle);
     //�ָ�Ĭ��ֵ
     NET_DVR_API BOOL __stdcall NET_DVR_RestoreConfig(LONG lUserID);
     //�������
     NET_DVR_API BOOL __stdcall NET_DVR_SaveConfig(LONG lUserID);
     //����
     NET_DVR_API BOOL __stdcall NET_DVR_RebootDVR(LONG lUserID);
     //�ر�DVR
     NET_DVR_API BOOL __stdcall NET_DVR_ShutDownDVR(LONG lUserID);
     
     
     
     //�������� begin
     NET_DVR_API BOOL __stdcall NET_DVR_GetDVRConfig(LONG lUserID, DWORD dwCommand,LONG lChannel, LPVOID lpOutBuffer, DWORD dwOutBufferSize, LPDWORD lpBytesReturned);
     NET_DVR_API BOOL __stdcall NET_DVR_SetDVRConfig(LONG lUserID, DWORD dwCommand,LONG lChannel, LPVOID lpInBuffer, DWORD dwInBufferSize);
     NET_DVR_API BOOL __stdcall NET_DVR_GetDVRWorkState_V30(LONG lUserID, LPNET_DVR_WORKSTATE_V30 lpWorkState);
     NET_DVR_API BOOL __stdcall NET_DVR_GetDVRWorkState(LONG lUserID, LPNET_DVR_WORKSTATE lpWorkState);
     NET_DVR_API BOOL __stdcall NET_DVR_SetVideoEffect(LONG lUserID, LONG lChannel, DWORD dwBrightValue, DWORD dwContrastValue, DWORD dwSaturationValue, DWORD dwHueValue);
     NET_DVR_API BOOL __stdcall NET_DVR_GetVideoEffect(LONG lUserID, LONG lChannel, DWORD *pBrightValue, DWORD *pContrastValue, DWORD *pSaturationValue, DWORD *pHueValue);
     NET_DVR_API BOOL __stdcall NET_DVR_ClientGetframeformat(LONG lUserID, LPNET_DVR_FRAMEFORMAT lpFrameFormat);
     NET_DVR_API BOOL __stdcall NET_DVR_ClientSetframeformat(LONG lUserID, LPNET_DVR_FRAMEFORMAT lpFrameFormat);
     NET_DVR_API BOOL __stdcall NET_DVR_ClientGetframeformat_V30(LONG lUserID, LPNET_DVR_FRAMEFORMAT_V30 lpFrameFormat);
     NET_DVR_API BOOL __stdcall NET_DVR_ClientSetframeformat_V30(LONG lUserID, LPNET_DVR_FRAMEFORMAT_V30 lpFrameFormat);
     NET_DVR_API BOOL __stdcall NET_DVR_GetAlarmOut_V30(LONG lUserID, LPNET_DVR_ALARMOUTSTATUS_V30 lpAlarmOutState);
     NET_DVR_API BOOL __stdcall NET_DVR_GetAlarmOut(LONG lUserID, LPNET_DVR_ALARMOUTSTATUS lpAlarmOutState);
     NET_DVR_API BOOL __stdcall NET_DVR_SetAlarmOut(LONG lUserID, LONG lAlarmOutPort,LONG lAlarmOutStatic);
     
     //��Ƶ��������
     NET_DVR_API BOOL __stdcall NET_DVR_ClientSetVideoEffect(LONG lRealHandle,DWORD dwBrightValue,DWORD dwContrastValue, DWORD dwSaturationValue,DWORD dwHueValue);
     NET_DVR_API BOOL __stdcall NET_DVR_ClientGetVideoEffect(LONG lRealHandle,DWORD *pBrightValue,DWORD *pContrastValue, DWORD *pSaturationValue,DWORD *pHueValue);
     
     //�����ļ�
     NET_DVR_API BOOL __stdcall NET_DVR_GetConfigFile(LONG lUserID, char *sFileName);
     NET_DVR_API BOOL __stdcall NET_DVR_SetConfigFile(LONG lUserID, char *sFileName);
     NET_DVR_API BOOL __stdcall NET_DVR_GetConfigFile_V30(LONG lUserID, char *sOutBuffer, DWORD dwOutSize, DWORD *pReturnSize);
     
     NET_DVR_API BOOL __stdcall NET_DVR_GetConfigFile_EX(LONG lUserID, char *sOutBuffer, DWORD dwOutSize);
     NET_DVR_API BOOL __stdcall NET_DVR_SetConfigFile_EX(LONG lUserID, char *sInBuffer, DWORD dwInSize);
     
     //������־�ļ�д��ӿ�
     NET_DVR_API BOOL __stdcall NET_DVR_SetLogToFile(BOOL bLogEnable = FALSE, char * strLogDir = NULL, BOOL bAutoDel = TRUE);
     NET_DVR_API BOOL __stdcall NET_DVR_GetSDKState(LPNET_DVR_SDKSTATE pSDKState);
     NET_DVR_API BOOL __stdcall NET_DVR_GetSDKAbility(LPNET_DVR_SDKABL pSDKAbl);
     NET_DVR_API BOOL __stdcall NET_DVR_GetPTZProtocol(LONG lUserID, NET_DVR_PTZCFG *pPtzcfg);
     //ǰ�������
     NET_DVR_API BOOL __stdcall NET_DVR_LockPanel(LONG lUserID);
     NET_DVR_API BOOL __stdcall NET_DVR_UnLockPanel(LONG lUserID);
     
     NET_DVR_API BOOL __stdcall NET_DVR_SetRtspConfig(LONG lUserID, DWORD dwCommand, LPNET_DVR_RTSPCFG lpInBuffer, DWORD dwInBufferSize);
     NET_DVR_API BOOL __stdcall NET_DVR_GetRtspConfig(LONG lUserID, DWORD dwCommand, LPNET_DVR_RTSPCFG lpOutBuffer, DWORD dwOutBufferSize);
     */
    
#ifdef __cplusplus
}
#endif

#endif 
