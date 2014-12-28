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
    
    
    
    //宏定义
#define MAX_NAMELEN			    16		//DVR本地登陆名
#define MAX_RIGHT			    32		//设备支持的权限（1-12表示本地权限，13-32表示远程权限）
#define NAME_LEN			    32      //用户名长度
#define PASSWD_LEN			    16      //密码长度
#define SERIALNO_LEN		    48      //序列号长度
#define MACADDR_LEN			    6       //mac地址长度
#define MAX_ETHERNET		    2       //设备可配以太网络
#define PATHNAME_LEN		    128     //路径长度
    
#define MAX_TIMESEGMENT_V30	    8       //9000设备最大时间段数
#define MAX_TIMESEGMENT		    4       //8000设备最大时间段数
    
#define MAX_SHELTERNUM			4       //8000设备最大遮挡区域数
#define MAX_DAYS				7       //每周天数
#define PHONENUMBER_LEN			32      //pppoe拨号号码最大长度
    
#define MAX_DISKNUM_V30			33		//9000设备最大硬盘数/* 最多33个硬盘(包括16个内置SATA硬盘、1个eSATA硬盘和16个NFS盘) */
#define MAX_DISKNUM		        16      //8000设备最大硬盘数
#define MAX_DISKNUM_V10		    8       //1.2版本之前版本
    
#define MAX_WINDOW_V30			32      //9000设备本地显示最大播放窗口数
#define MAX_WINDOW				16      //8000设备最大硬盘数
#define MAX_VGA_V30				4       //9000设备最大可接VGA数
#define MAX_VGA			    	1       //8000设备最大可接VGA数
    
#define MAX_USERNUM_V30			32      //9000设备最大用户数
#define MAX_USERNUM			    16      //8000设备最大用户数
#define MAX_EXCEPTIONNUM_V30	32      //9000设备最大异常处理数
#define MAX_EXCEPTIONNUM		16      //8000设备最大异常处理数
#define MAX_LINK				6       //8000设备单通道最大视频流连接数
    
#define MAX_DECPOOLNUM			4       //单路解码器每个解码通道最大可循环解码数
#define MAX_DECNUM				4       //单路解码器的最大解码通道数（实际只有一个，其他三个保留）
#define MAX_TRANSPARENTNUM		2       //单路解码器可配置最大透明通道数
#define MAX_CYCLE_CHAN			16      //单路解码器最大轮循通道数
#define MAX_DIRNAME_LENGTH		80      //最大目录长度
    
#define MAX_STRINGNUM_V30		8		//9000设备最大OSD字符行数数
#define MAX_STRINGNUM			4       //8000设备最大OSD字符行数数
#define MAX_STRINGNUM_EX		8       //8000定制扩展
#define MAX_AUXOUT_V30			16      //9000设备最大辅助输出数
#define MAX_AUXOUT			    4       //8000设备最大辅助输出数
#define MAX_HD_GROUP			16      //9000设备最大硬盘组数
#define MAX_NFS_DISK			8       //8000设备最大NFS硬盘数
    
#define IW_ESSID_MAX_SIZE	    32      //WIFI的SSID号长度
#define IW_ENCODING_TOKEN_MAX	32      //WIFI密锁最大字节数
#define MAX_SERIAL_NUM			64	    //最多支持的透明通道路数
#define MAX_DDNS_NUMS	        10      //9000设备最大可配ddns数
#define MAX_DOMAIN_NAME		    64		/* 最大域名长度 */
#define MAX_EMAIL_ADDR_LEN	    48      //最大email地址长度
#define MAX_EMAIL_PWD_LEN		32      //最大email密码长度
    
#define MAXPROGRESS		        100     //回放时的最大百分率
#define MAX_SERIALNUM	        2       //8000设备支持的串口数 1-232， 2-485
#define CARDNUM_LEN		        20      //卡号长度
#define MAX_VIDEOOUT_V30        4       //9000设备的视频输出数
#define MAX_VIDEOOUT	        2       //8000设备的视频输出数
    
#define MAX_PRESET_V30			    256		/* 9000设备支持的云台预置点数 */
#define MAX_TRACK_V30			    256		/* 9000设备支持的云台轨迹数 */
#define MAX_CRUISE_V30			    256		/* 9000设备支持的云台巡航数 */
#define MAX_PRESET				    128		/* 8000设备支持的云台预置点数 */
#define MAX_TRACK				    128		/* 8000设备支持的云台轨迹数 */
#define MAX_CRUISE				    128		/* 8000设备支持的云台巡航数 */
    
#define CRUISE_MAX_PRESET_NUMS	    32 	    /* 一条巡航最多的巡航点 */
    
#define MAX_SERIAL_PORT             8       //9000设备支持232串口数
#define MAX_PREVIEW_MODE            8       /* 设备支持最大预览模式数目 1画面,4画面,9画面,16画面.... */
#define MAX_MATRIXOUT               16      /* 最大模拟矩阵输出个数 */
#define LOG_INFO_LEN                11840   /* 日志附加信息 */
#define DESC_LEN                    16      /* 云台描述字符串长度 */
#define PTZ_PROTOCOL_NUM            200     /* 9000最大支持的云台协议数 */
    
#define MAX_AUDIO			        1       //8000语音对讲通道数
#define MAX_AUDIO_V30			    2       //9000语音对讲通道数
#define MAX_CHANNUM			        16      //8000设备最大通道数
#define MAX_ALARMIN			        16      //8000设备最大报警输入数
#define MAX_ALARMOUT		        4       //8000设备最大报警输出数
    //9000 IPC接入
#define MAX_ANALOG_CHANNUM          32      //最大32个模拟通道
#define MAX_ANALOG_ALARMOUT         32      //最大32路模拟报警输出 
#define MAX_ANALOG_ALARMIN          32      //最大32路模拟报警输入
    
#define MAX_IP_DEVICE               32      //允许接入的最大IP设备数
#define MAX_IP_CHANNEL              32      //允许加入的最多IP通道数
#define MAX_IP_ALARMIN              128     //允许加入的最多报警输入数
#define MAX_IP_ALARMOUT             64      //允许加入的最多报警输出数
    
    /* 最大支持的通道数 最大模拟加上最大IP支持 */
#define MAX_CHANNUM_V30               ( MAX_ANALOG_CHANNUM + MAX_IP_CHANNEL )//64
#define MAX_ALARMOUT_V30              ( MAX_ANALOG_ALARMOUT + MAX_IP_ALARMOUT )//96
#define MAX_ALARMIN_V30               ( MAX_ANALOG_ALARMIN + MAX_IP_ALARMIN )//160
    
    /*******************全局错误码 begin**********************/	
#define NET_DVR_FAIL 						-1
#define NET_DVR_NOERROR 					0	//没有错误
#define NET_DVR_PASSWORD_ERROR 				1	//用户名密码错误
#define NET_DVR_NOENOUGHPRI 				2	//权限不足
#define NET_DVR_NOINIT 						3	//没有初始化
#define NET_DVR_CHANNEL_ERROR 				4	//通道号错误
#define NET_DVR_OVER_MAXLINK 				5	//连接到DVR的客户端个数超过最大
#define NET_DVR_VERSIONNOMATCH				6	//版本不匹配
#define NET_DVR_NETWORK_FAIL_CONNECT		7	//连接服务器失败
#define NET_DVR_NETWORK_SEND_ERROR			8	//向服务器发送失败
#define NET_DVR_NETWORK_RECV_ERROR			9	//从服务器接收数据失败
#define NET_DVR_NETWORK_RECV_TIMEOUT		10	//从服务器接收数据超时
#define NET_DVR_NETWORK_ERRORDATA			11	//传送的数据有误
#define NET_DVR_ORDER_ERROR					12	//调用次序错误
#define NET_DVR_OPERNOPERMIT				13	//无此权限
#define NET_DVR_COMMANDTIMEOUT				14	//DVR命令执行超时
#define NET_DVR_ERRORSERIALPORT				15	//串口号错误
#define NET_DVR_ERRORALARMPORT				16	//报警端口错误
#define NET_DVR_PARAMETER_ERROR 			17  //参数错误
#define NET_DVR_CHAN_EXCEPTION				18	//服务器通道处于错误状态
#define NET_DVR_NODISK						19	//没有硬盘
#define NET_DVR_ERRORDISKNUM				20	//硬盘号错误
#define NET_DVR_DISK_FULL					21	//服务器硬盘满
#define NET_DVR_DISK_ERROR					22	//服务器硬盘出错
#define NET_DVR_NOSUPPORT					23	//服务器不支持
#define NET_DVR_BUSY						24	//服务器忙
#define NET_DVR_MODIFY_FAIL					25	//服务器修改不成功
#define NET_DVR_PASSWORD_FORMAT_ERROR		26	//密码输入格式不正确
#define NET_DVR_DISK_FORMATING				27	//硬盘正在格式化，不能启动操作
#define NET_DVR_DVRNORESOURCE				28	//DVR资源不足
#define	NET_DVR_DVROPRATEFAILED				29  //DVR操作失败
#define NET_DVR_OPENHOSTSOUND_FAIL 			30  //打开PC声音失败
#define NET_DVR_DVRVOICEOPENED 				31  //服务器语音对讲被占用
#define	NET_DVR_TIMEINPUTERROR				32  //时间输入不正确
#define	NET_DVR_NOSPECFILE					33  //回放时服务器没有指定的文件
#define NET_DVR_CREATEFILE_ERROR			34	//创建文件出错
#define	NET_DVR_FILEOPENFAIL				35  //打开文件出错
#define	NET_DVR_OPERNOTFINISH				36  //上次的操作还没有完成
#define	NET_DVR_GETPLAYTIMEFAIL				37  //获取当前播放的时间出错
#define	NET_DVR_PLAYFAIL					38  //播放出错
#define NET_DVR_FILEFORMAT_ERROR			39  //文件格式不正确
#define NET_DVR_DIR_ERROR					40	//路径错误
#define NET_DVR_ALLOC_RESOURCE_ERROR		41  //资源分配错误
#define NET_DVR_AUDIO_MODE_ERROR			42	//声卡模式错误
#define NET_DVR_NOENOUGH_BUF				43	//缓冲区太小
#define NET_DVR_CREATESOCKET_ERROR		 	44	//创建SOCKET出错
#define NET_DVR_SETSOCKET_ERROR				45	//设置SOCKET出错
#define NET_DVR_MAX_NUM						46	//个数达到最大
#define NET_DVR_USERNOTEXIST				47	//用户不存在
#define NET_DVR_WRITEFLASHERROR				48  //写FLASH出错
#define NET_DVR_UPGRADEFAIL					49  //DVR升级失败
#define NET_DVR_CARDHAVEINIT				50  //解码卡已经初始化过
#define NET_DVR_PLAYERFAILED				51	//调用播放库中某个函数失败
#define NET_DVR_MAX_USERNUM					52  //设备端用户数达到最大
#define NET_DVR_GETLOCALIPANDMACFAIL		53  //获得客户端的IP地址或物理地址失败
#define NET_DVR_NOENCODEING					54	//该通道没有编码
#define NET_DVR_IPMISMATCH					55	//IP地址不匹配
#define NET_DVR_MACMISMATCH					56	//MAC地址不匹配
#define NET_DVR_UPGRADELANGMISMATCH			57	//升级文件语言不匹配
#define NET_DVR_MAX_PLAYERPORT				58	//播放器路数达到最大
#define NET_DVR_NOSPACEBACKUP				59	//备份设备中没有足够空间进行备份
#define NET_DVR_NODEVICEBACKUP				60	//没有找到指定的备份设备
#define NET_DVR_PICTURE_BITS_ERROR			61	//图像素位数不符，限24色
#define NET_DVR_PICTURE_DIMENSION_ERROR		62	//图片高*宽超限， 限128*256
#define NET_DVR_PICTURE_SIZ_ERROR			63	//图片大小超限，限100K
#define NET_DVR_LOADPLAYERSDKFAILED			64	//载入当前目录下Player Sdk出错
#define NET_DVR_LOADPLAYERSDKPROC_ERROR		65	//找不到Player Sdk中某个函数入口
#define NET_DVR_LOADDSSDKFAILED				66	//载入当前目录下DSsdk出错
#define NET_DVR_LOADDSSDKPROC_ERROR		    67	//找不到DsSdk中某个函数入口
#define NET_DVR_DSSDK_ERROR					68	//调用硬解码库DsSdk中某个函数失败
#define NET_DVR_VOICEMONOPOLIZE				69	//声卡被独占
#define NET_DVR_JOINMULTICASTFAILED			70	//加入多播组失败
#define NET_DVR_CREATEDIR_ERROR				71	//建立日志文件目录失败
#define NET_DVR_BINDSOCKET_ERROR			72	//绑定套接字失败
#define NET_DVR_SOCKETCLOSE_ERROR			73	//socket连接中断，此错误通常是由于连接中断或目的地不可达
#define NET_DVR_USERID_ISUSING			    74	//注销时用户ID正在进行某操作
#define NET_DVR_SOCKETLISTEN_ERROR			75	//监听失败
#define NET_DVR_PROGRAM_EXCEPTION			76	//程序异常
#define NET_DVR_WRITEFILE_FAILED			77	//写文件失败
#define NET_DVR_FORMAT_READONLY				78  //禁止格式化只读硬盘
#define NET_DVR_WITHSAMEUSERNAME		    79  //用户配置结构中存在相同的用户名
#define NET_DVR_DEVICETYPE_ERROR            80  /*导入参数时设备型号不匹配*/
#define NET_DVR_LANGUAGE_ERROR              81  /*导入参数时语言不匹配*/
#define NET_DVR_PARAVERSION_ERROR           82  /*导入参数时软件版本不匹配*/
#define NET_DVR_IPCHAN_NOTALIVE             83  /*预览时外接IP通道不在线*/
#define NET_DVR_RTSP_SDK_ERROR				84	/*加载高清IPC通讯库StreamTransClient失败*/
#define NET_DVR_CONVERT_SDK_ERROR			85	/*加载转码库CVT_StdToHik失败*/
#define NET_DVR_IPC_COUNT_OVERFLOW			86  /*超出最大的ip接入通道数*/
    
    /*******************全局错误码 end**********************/
    
    /*************************************************
     NET_DVR_IsSupport()返回值
     1－9位分别表示以下信息（位与是TRUE)表示支持；
     **************************************************/
#define NET_DVR_SUPPORT_DDRAW			0x01//支持DIRECTDRAW，如果不支持，则播放器不能工作；
#define NET_DVR_SUPPORT_BLT				0x02//显卡支持BLT操作，如果不支持，则播放器不能工作；
#define NET_DVR_SUPPORT_BLTFOURCC		0x04//显卡BLT支持颜色转换，如果不支持，播放器会用软件方法作RGB转换；
#define NET_DVR_SUPPORT_BLTSHRINKX		0x08//显卡BLT支持X轴缩小；如果不支持，系统会用软件方法转换；
#define NET_DVR_SUPPORT_BLTSHRINKY		0x10//显卡BLT支持Y轴缩小；如果不支持，系统会用软件方法转换；
#define NET_DVR_SUPPORT_BLTSTRETCHX		0x20//显卡BLT支持X轴放大；如果不支持，系统会用软件方法转换；
#define NET_DVR_SUPPORT_BLTSTRETCHY		0x40//显卡BLT支持Y轴放大；如果不支持，系统会用软件方法转换；
#define NET_DVR_SUPPORT_SSE				0x80//CPU支持SSE指令，Intel Pentium3以上支持SSE指令；
#define NET_DVR_SUPPORT_MMX				0x100//CPU支持MMX指令集，Intel Pentium3以上支持SSE指令；
    
    /**********************云台控制命令 begin*************************/	
#define LIGHT_PWRON		2	/* 接通灯光电源 */
#define WIPER_PWRON		3	/* 接通雨刷开关 */
#define FAN_PWRON		4	/* 接通风扇开关 */
#define HEATER_PWRON	5	/* 接通加热器开关 */
#define AUX_PWRON1		6	/* 接通辅助设备开关 */
#define AUX_PWRON2		7	/* 接通辅助设备开关 */
#define SET_PRESET		8	/* 设置预置点 */
#define CLE_PRESET		9	/* 清除预置点 */
    
#define ZOOM_IN			11	/* 焦距以速度SS变大(倍率变大) */
#define ZOOM_OUT		12	/* 焦距以速度SS变小(倍率变小) */
#define FOCUS_NEAR      13  /* 焦点以速度SS前调 */
#define FOCUS_FAR       14  /* 焦点以速度SS后调 */
#define IRIS_OPEN       15  /* 光圈以速度SS扩大 */
#define IRIS_CLOSE      16  /* 光圈以速度SS缩小 */
    
#define TILT_UP			21	/* 云台以SS的速度上仰 */
#define TILT_DOWN		22	/* 云台以SS的速度下俯 */
#define PAN_LEFT		23	/* 云台以SS的速度左转 */
#define PAN_RIGHT		24	/* 云台以SS的速度右转 */
#define UP_LEFT			25	/* 云台以SS的速度上仰和左转 */
#define UP_RIGHT		26	/* 云台以SS的速度上仰和右转 */
#define DOWN_LEFT		27	/* 云台以SS的速度下俯和左转 */
#define DOWN_RIGHT		28	/* 云台以SS的速度下俯和右转 */
#define PAN_AUTO		29	/* 云台以SS的速度左右自动扫描 */
    
#define FILL_PRE_SEQ	30	/* 将预置点加入巡航序列 */
#define SET_SEQ_DWELL	31	/* 设置巡航点停顿时间 */
#define SET_SEQ_SPEED	32	/* 设置巡航速度 */
#define CLE_PRE_SEQ		33	/* 将预置点从巡航序列中删除 */
#define STA_MEM_CRUISE	34	/* 开始记录轨迹 */
#define STO_MEM_CRUISE	35	/* 停止记录轨迹 */
#define RUN_CRUISE		36	/* 开始轨迹 */
#define RUN_SEQ			37	/* 开始巡航 */
#define STOP_SEQ		38	/* 停止巡航 */
#define GOTO_PRESET		39	/* 快球转到预置点 */
    
    /**********************云台控制命令 end*************************/	
    
    /*************************************************
     回放时播放控制命令宏定义 
     NET_DVR_PlayBackControl
     NET_DVR_PlayControlLocDisplay
     NET_DVR_DecPlayBackCtrl的宏定义
     具体支持查看函数说明和代码
     **************************************************/	
#define NET_DVR_PLAYSTART		1//开始播放
#define NET_DVR_PLAYSTOP		2//停止播放
#define NET_DVR_PLAYPAUSE		3//暂停播放
#define NET_DVR_PLAYRESTART		4//恢复播放
#define NET_DVR_PLAYFAST		5//快放
#define NET_DVR_PLAYSLOW		6//慢放
#define NET_DVR_PLAYNORMAL		7//正常速度
#define NET_DVR_PLAYFRAME		8//单帧放
#define NET_DVR_PLAYSTARTAUDIO	9//打开声音
#define NET_DVR_PLAYSTOPAUDIO	10//关闭声音
#define NET_DVR_PLAYAUDIOVOLUME	11//调节音量
#define NET_DVR_PLAYSETPOS		12//改变文件回放的进度
#define NET_DVR_PLAYGETPOS		13//获取文件回放的进度
#define NET_DVR_PLAYGETTIME		14//获取当前已经播放的时间(按文件回放的时候有效)
#define NET_DVR_PLAYGETFRAME	15//获取当前已经播放的帧数(按文件回放的时候有效)
#define NET_DVR_GETTOTALFRAMES  16//获取当前播放文件总的帧数(按文件回放的时候有效)
#define NET_DVR_GETTOTALTIME    17//获取当前播放文件总的时间(按文件回放的时候有效)
#define NET_DVR_THROWBFRAME		20//丢B帧
#define NET_DVR_SETSPEED		24//设置码流速度
#define NET_DVR_KEEPALIVE		25//保持与设备的心跳(如果回调阻塞，建议2秒发送一次)
    
    //远程按键定义如下：
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
    
#define KEY_PTZ_AP1_START KEY_CODE_EDIT /* 光圈+ */
#define KEY_PTZ_AP1_STOP 36
    
#define KEY_PTZ_AP2_START KEY_CODE_PAN /* 光圈- */
#define KEY_PTZ_AP2_STOP 37
    
#define KEY_PTZ_FOCUS1_START KEY_CODE_A /* 聚焦+ */
#define KEY_PTZ_FOCUS1_STOP 38
    
#define KEY_PTZ_FOCUS2_START KEY_CODE_M /* 聚焦- */
#define KEY_PTZ_FOCUS2_STOP 39
    
#define KEY_PTZ_B1_START 40 /* 变倍+ */
#define KEY_PTZ_B1_STOP 41
    
#define KEY_PTZ_B2_START 42 /* 变倍- */
#define KEY_PTZ_B2_STOP 43
    
    //9000新增
#define KEY_CODE_11 44
#define KEY_CODE_12 45
#define KEY_CODE_13 46
#define KEY_CODE_14 47
#define KEY_CODE_15 48
#define KEY_CODE_16 49
    
    /*************************参数配置命令 begin*******************************/
    //用于NET_DVR_SetDVRConfig和NET_DVR_GetDVRConfig,注意其对应的配置结构
    
#define NET_DVR_GET_DEVICECFG		100		//获取设备参数
#define NET_DVR_SET_DEVICECFG		101		//设置设备参数
#define NET_DVR_GET_NETCFG			102		//获取网络参数
#define NET_DVR_SET_NETCFG			103		//设置网络参数
#define NET_DVR_GET_PICCFG			104		//获取图象参数
#define NET_DVR_SET_PICCFG			105		//设置图象参数
#define NET_DVR_GET_COMPRESSCFG		106		//获取压缩参数
#define NET_DVR_SET_COMPRESSCFG		107		//设置压缩参数
#define NET_DVR_GET_RECORDCFG		108		//获取录像时间参数
#define NET_DVR_SET_RECORDCFG		109		//设置录像时间参数
#define NET_DVR_GET_DECODERCFG		110		//获取解码器参数
#define NET_DVR_SET_DECODERCFG		111		//设置解码器参数
#define NET_DVR_GET_RS232CFG 		112		//获取232串口参数
#define NET_DVR_SET_RS232CFG		113		//设置232串口参数
#define NET_DVR_GET_ALARMINCFG 		114		//获取报警输入参数
#define NET_DVR_SET_ALARMINCFG		115		//设置报警输入参数
#define NET_DVR_GET_ALARMOUTCFG 	116		//获取报警输出参数
#define NET_DVR_SET_ALARMOUTCFG		117		//设置报警输出参数
#define NET_DVR_GET_TIMECFG 		118		//获取DVR时间
#define NET_DVR_SET_TIMECFG			119		//设置DVR时间
#define NET_DVR_GET_PREVIEWCFG 		120		//获取预览参数
#define NET_DVR_SET_PREVIEWCFG		121		//设置预览参数
#define NET_DVR_GET_VIDEOOUTCFG 	122		//获取视频输出参数
#define NET_DVR_SET_VIDEOOUTCFG		123		//设置视频输出参数
#define NET_DVR_GET_USERCFG 		124		//获取用户参数
#define NET_DVR_SET_USERCFG			125		//设置用户参数
#define NET_DVR_GET_EXCEPTIONCFG 	126		//获取异常参数
#define NET_DVR_SET_EXCEPTIONCFG	127		//设置异常参数
#define NET_DVR_GET_ZONEANDDST		128		//获取时区和夏时制参数
#define NET_DVR_SET_ZONEANDDST		129		//设置时区和夏时制参数
#define NET_DVR_GET_SHOWSTRING		130		//获取叠加字符参数
#define NET_DVR_SET_SHOWSTRING		131		//设置叠加字符参数
#define NET_DVR_GET_EVENTCOMPCFG	132		//获取事件触发录像参数
#define NET_DVR_SET_EVENTCOMPCFG	133		//设置事件触发录像参数
    
#define NET_DVR_GET_AUXOUTCFG		140		//获取报警触发辅助输出设置(HS设备辅助输出2006-02-28)
#define NET_DVR_SET_AUXOUTCFG		141		//设置报警触发辅助输出设置(HS设备辅助输出2006-02-28)
#define NET_DVR_GET_PREVIEWCFG_AUX 	142		//获取-s系列双输出预览参数(-s系列双输出2006-04-13)
#define NET_DVR_SET_PREVIEWCFG_AUX	143		//设置-s系列双输出预览参数(-s系列双输出2006-04-13)
    
#define NET_DVR_GET_PICCFG_EX		200		//获取图象参数(SDK_V14扩展命令)
#define NET_DVR_SET_PICCFG_EX		201		//设置图象参数(SDK_V14扩展命令)
#define NET_DVR_GET_USERCFG_EX 		202		//获取用户参数(SDK_V15扩展命令)
#define NET_DVR_SET_USERCFG_EX		203		//设置用户参数(SDK_V15扩展命令)
#define NET_DVR_GET_COMPRESSCFG_EX	204		//获取压缩参数(SDK_V15扩展命令2006-05-15)
#define NET_DVR_SET_COMPRESSCFG_EX	205		//设置压缩参数(SDK_V15扩展命令2006-05-15)
    
    
#define NET_DVR_GET_NETAPPCFG		222		//获取网络应用参数 NTP/DDNS/EMAIL
#define NET_DVR_SET_NETAPPCFG		223		//设置网络应用参数 NTP/DDNS/EMAIL
#define NET_DVR_GET_NTPCFG			224		//获取网络应用参数 NTP
#define NET_DVR_SET_NTPCFG			225		//设置网络应用参数 NTP
#define NET_DVR_GET_DDNSCFG			226		//获取网络应用参数 DDNS
#define NET_DVR_SET_DDNSCFG			227		//设置网络应用参数 DDNS
    //对应NET_DVR_EMAILPARA
#define NET_DVR_GET_EMAILCFG		228		//获取网络应用参数 EMAIL
#define NET_DVR_SET_EMAILCFG		229		//设置网络应用参数 EMAIL
    
#define NET_DVR_GET_NFSCFG			230		/* NFS disk config */
#define NET_DVR_SET_NFSCFG			231		/* NFS disk config */
    
#define NET_DVR_GET_SHOWSTRING_EX	238		//获取叠加字符参数扩展(支持8条字符)
#define NET_DVR_SET_SHOWSTRING_EX	239		//设置叠加字符参数扩展(支持8条字符)
#define NET_DVR_GET_NETCFG_OTHER	244		//获取网络参数
#define NET_DVR_SET_NETCFG_OTHER	245		//设置网络参数
    
    //对应NET_DVR_EMAILCFG结构
#define NET_DVR_GET_EMAILPARACFG	250		//Get EMAIL parameters
#define NET_DVR_SET_EMAILPARACFG	251		//Setup EMAIL parameters
    
    
#define NET_DVR_GET_DDNSCFG_EX		274	//获取扩展DDNS参数
#define NET_DVR_SET_DDNSCFG_EX		275	//设置扩展DDNS参数
    
#define	NET_DVR_SET_PTZPOS			292		//云台设置PTZ位置
#define	NET_DVR_GET_PTZPOS			293		//云台获取PTZ位置
#define	NET_DVR_GET_PTZSCOPE		294		//云台获取PTZ范围
    
    //
#define NET_DVR_GET_ALLHDCFG        300		//
    
    
    /***************************DS9000新增命令(_V30) begin *****************************/
    //网络(NET_DVR_NETCFG_V30结构)
#define NET_DVR_GET_NETCFG_V30		    1000		//获取网络参数
#define NET_DVR_SET_NETCFG_V30		    1001		//设置网络参数
    
    //图象(NET_DVR_PICCFG_V30结构)
#define NET_DVR_GET_PICCFG_V30		    1002		//获取图象参数
#define NET_DVR_SET_PICCFG_V30		    1003		//设置图象参数
    
    //录像时间(NET_DVR_RECORD_V30结构)
#define NET_DVR_GET_RECORDCFG_V30	    1004		//获取录像参数
#define NET_DVR_SET_RECORDCFG_V30	    1005		//设置录像参数
    
    //用户(NET_DVR_USER_V30结构)
#define NET_DVR_GET_USERCFG_V30 	    1006		//获取用户参数
#define NET_DVR_SET_USERCFG_V30		    1007		//设置用户参数
    
    //9000DDNS参数配置(NET_DVR_DDNSPARA_V30结构)
#define     NET_DVR_GET_DDNSCFG_V30		1010		//获取DDNS(9000扩展)
#define     NET_DVR_SET_DDNSCFG_V30		1011		//设置DDNS(9000扩展)
    
    //EMAIL功能(NET_DVR_EMAILCFG_V30结构)
#define NET_DVR_GET_EMAILCFG_V30		1012	//获取EMAIL参数 
#define NET_DVR_SET_EMAILCFG_V30		1013	//设置EMAIL参数 
    
    //巡航参数 (NET_DVR_CRUISE_PARA结构)
#define 	NET_DVR_GET_CRUISE			1020		
#define 	NET_DVR_SET_CRUISE			1021		
    
    
    //报警输入结构参数 (NET_DVR_ALARMINCFG_V30结构)
#define 	NET_DVR_GET_ALARMINCFG_V30			1024		
#define 	NET_DVR_SET_ALARMINCFG_V30			1025
    
    //报警输出结构参数 (NET_DVR_ALARMOUTCFG_V30结构)
#define 	NET_DVR_GET_ALARMOUTCFG_V30			1026		
#define 	NET_DVR_SET_ALARMOUTCFG_V30			1027
    
    //视频输出结构参数 (NET_DVR_VIDEOOUT_V30结构)
#define 	NET_DVR_GET_VIDEOOUTCFG_V30			1028		
#define 	NET_DVR_SET_VIDEOOUTCFG_V30			1029	
    
    //叠加字符结构参数 (NET_DVR_SHOWSTRING_V30结构)
#define 	NET_DVR_GET_SHOWSTRING_V30			1030		
#define 	NET_DVR_SET_SHOWSTRING_V30			1031
    
    //异常结构参数 (NET_DVR_EXCEPTION_V30结构)
#define 	NET_DVR_GET_EXCEPTIONCFG_V30		1034		
#define 	NET_DVR_SET_EXCEPTIONCFG_V30		1035
    
    //串口232结构参数 (NET_DVR_RS232CFG_V30结构)
#define 	NET_DVR_GET_RS232CFG_V30			1036		
#define 	NET_DVR_SET_RS232CFG_V30			1037
    
    //压缩参数 (NET_DVR_COMPRESSIONCFG_V30结构)
#define     NET_DVR_GET_COMPRESSCFG_V30	        1040		
#define     NET_DVR_SET_COMPRESSCFG_V30	        1041		
    
    //获取485解码器参数 (NET_DVR_DECODERCFG_V30结构)
#define     NET_DVR_GET_DECODERCFG_V30		    1042		//获取解码器参数
#define     NET_DVR_SET_DECODERCFG_V30		    1043		//设置解码器参数
    
    //获取预览参数 (NET_DVR_PREVIEWCFG_V30结构)
#define     NET_DVR_GET_PREVIEWCFG_V30		    1044		//获取预览参数
#define     NET_DVR_SET_PREVIEWCFG_V30		    1045		//设置预览参数
    
    //辅助预览参数 (NET_DVR_PREVIEWCFG_AUX_V30结构)
#define     NET_DVR_GET_PREVIEWCFG_AUX_V30		1046		//获取辅助预览参数
#define     NET_DVR_SET_PREVIEWCFG_AUX_V30		1047		//设置辅助预览参数
    
    //IP接入配置参数 （NET_DVR_IPPARACFG结构）
#define     NET_DVR_GET_IPPARACFG               1048        //获取IP接入配置信息 
#define     NET_DVR_SET_IPPARACFG               1049        //设置IP接入配置信息
    
    //IP报警输入接入配置参数 （NET_DVR_IPALARMINCFG结构）
#define     NET_DVR_GET_IPALARMINCFG            1050        //获取IP报警输入接入配置信息 
#define     NET_DVR_SET_IPALARMINCFG            1051        //设置IP报警输入接入配置信息
    
    //IP报警输出接入配置参数 （NET_DVR_IPALARMOUTCFG结构）
#define     NET_DVR_GET_IPALARMOUTCFG           1052        //获取IP报警输出接入配置信息 
#define     NET_DVR_SET_IPALARMOUTCFG           1053        //设置IP报警输出接入配置信息
    
    //硬盘管理的参数获取 (NET_DVR_HDCFG结构)
#define     NET_DVR_GET_HDCFG			        1054	    //获取硬盘管理配置参数
#define     NET_DVR_SET_HDCFG			        1055	    //设置硬盘管理配置参数
    //盘组管理的参数获取 (NET_DVR_HDGROUP_CFG结构)
#define     NET_DVR_GET_HDGROUP_CFG			    1056	    //获取盘组管理配置参数
#define     NET_DVR_SET_HDGROUP_CFG			    1057	    //设置盘组管理配置参数
    
    //设备编码类型配置(NET_DVR_COMPRESSION_AUDIO结构)
#define     NET_DVR_GET_COMPRESSCFG_AUD                1058        //获取设备语音对讲编码参数
#define     NET_DVR_SET_COMPRESSCFG_AUD                1059        //设置设备语音对讲编码参数
    /***************************DS9000新增命令(_V30) end *****************************/
    
    /*************************参数配置命令 end*******************************/
    
    
    /*******************查找文件和日志函数返回值*************************/
#define NET_DVR_FILE_SUCCESS		1000	//获得文件信息
#define NET_DVR_FILE_NOFIND			1001	//没有文件
#define NET_DVR_ISFINDING			1002	//正在查找文件
#define	NET_DVR_NOMOREFILE			1003	//查找文件时没有更多的文件
#define	NET_DVR_FILE_EXCEPTION		1004	//查找文件时异常
    
    /*********************回调函数类型 begin************************/
#define COMM_ALARM					0x1100	//8000报警信息主动上传
#define	COMM_TRADEINFO				0x1500  //ATMDVR主动上传交易信息
    
#define COMM_ALARM_V30				0x4000	//9000报警信息主动上传
#define COMM_IPCCFG			        0x4001	//9000设备IPC接入配置改变报警信息主动上传
    
    
    /*************操作异常类型(消息方式, 回调方式(保留))****************/
#define EXCEPTION_EXCHANGE			0x8000	//用户交互时异常
#define EXCEPTION_AUDIOEXCHANGE		0x8001	//语音对讲异常
#define EXCEPTION_ALARM				0x8002	//报警异常
#define EXCEPTION_PREVIEW			0x8003	//网络预览异常
#define EXCEPTION_SERIAL			0x8004	//透明通道异常
#define EXCEPTION_RECONNECT			0x8005	//预览时重连
#define EXCEPTION_ALARMRECONNECT	0x8006	//报警时重连
#define EXCEPTION_SERIALRECONNECT	0x8007	//透明通道重连
#define EXCEPTION_PLAYBACK	        0x8010	//回放异常
#define EXCEPTION_DISKFMT	        0x8011	//硬盘格式化
    
    /********************预览回调函数*********************/
#define NET_DVR_SYSHEAD			1	//系统头数据
#define NET_DVR_STREAMDATA		2	//视频流数据（包括复合流和音视频分开的视频流数据）
#define NET_DVR_AUDIOSTREAMDATA	3	//音频流数据
#define NET_DVR_STD_VIDEODATA	4	//标准视频流数据
#define NET_DVR_STD_AUDIODATA	5	//标准音频流数据
    
    //回调预览中的状态和消息
#define NET_DVR_REALPLAYEXCEPTION	111	//预览异常
#define NET_DVR_REALPLAYNETCLOSE	112	//预览时连接断开
#define NET_DVR_REALPLAY5SNODATA	113	//预览5s没有收到数据
#define NET_DVR_REALPLAYRECONNECT	114	//预览重连
    
    /********************回放回调函数*********************/
#define NET_DVR_PLAYBACKOVER		101	//回放数据播放完毕
#define NET_DVR_PLAYBACKEXCEPTION	102	//回放异常
#define NET_DVR_PLAYBACKNETCLOSE	103	//回放时候连接断开
#define NET_DVR_PLAYBACK5SNODATA	104	//回放5s没有收到数据
    
    /*********************回调函数类型 end************************/
    
    
    //设备型号(DVR类型)
    /* 设备类型 */
#define DVR							1				/*对尚未定义的dvr类型返回NETRET_DVR*/
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
#define DVS_A						13              /* 带ATA硬盘的DVS */
#define DVR_HC_S					14              /* 8000HC-S */
#define DVR_HT_S					15              /* 8000HT-S */
#define DVR_HF_S					16              /* 8000HF-S */
#define DVR_HS_S					17              /* 8000HS-S */
#define ATMDVR_S					18              /* ATM-S */
#define LOWCOST_DVR					19				/*7000H系列*/
#define DEC_MAT						20              /*多路解码器*/
#define DVR_MOBILE					21				/* mobile DVR */                 
#define DVR_HD_S					22              /* 8000HD-S */
#define DVR_HD_SL					23				/* 8000HD-SL */
#define DVR_HC_SL					24				/* 8000HC-SL */
#define DVR_HS_ST					25				/* 8000HS_ST */
#define DVS_HW						26              /* 6000HW */
#define IPCAM						30				/*IP 摄像机*/
#define MEGA_IPCAM					31				/*X52MF系列,752MF,852MF*/
#define IPCAM_X62MF					32				/*X62MF系列可接入9000设备,762MF,862MF*/
#define IPDOME						40				/*IP标清快球*/
#define MEGA_IPDOME                 41              /*IP高清快球*/
#define IPMOD						50				/*IP 模块*/
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
    
    
    /**********************设备类型 end***********************/
    
    /*************************************************
     参数配置结构、参数(其中_V30为9000新增)
     **************************************************/
    
    /////////////////////////////////////////////////////////////////////////
    //校时结构参数
    typedef struct
    {
        DWORD dwYear;		//年
        DWORD dwMonth;		//月
        DWORD dwDay;		//日
        DWORD dwHour;		//时
        DWORD dwMinute;		//分
        DWORD dwSecond;		//秒
    }NET_DVR_TIME, *LPNET_DVR_TIME;
    
    //时间段(子结构)
    typedef struct
    {
        //开始时间
        BYTE byStartHour;
        BYTE byStartMin;
        //结束时间
        BYTE byStopHour;
        BYTE byStopMin;
    }NET_DVR_SCHEDTIME, *LPNET_DVR_SCHEDTIME;
    
    /*设备报警和异常处理方式*/
#define NOACTION			0x0				/*无响应*/
#define WARNONMONITOR		0x1				/*监视器上警告*/
#define WARNONAUDIOOUT		0x2				/*声音警告*/
#define UPTOCENTER			0x4				/*上传中心*/
#define TRIGGERALARMOUT		0x8				/*触发报警输出*/
    
    //报警和异常处理结构(子结构)(多处使用)(9000扩展)
    typedef struct
    {
        DWORD	dwHandleType;	/*处理方式,处理方式的"或"结果*/
        /*0x00: 无响应*/
        /*0x01: 监视器上警告*/
        /*0x02: 声音警告*/
        /*0x04: 上传中心*/
        /*0x08: 触发报警输出*/
        /*0x10: Jpeg抓图并上传EMail*/
        BYTE byRelAlarmOut[MAX_ALARMOUT_V30];  
        //报警触发的输出通道,报警触发的输出,为1表示触发该输出
    }NET_DVR_HANDLEEXCEPTION_V30, *LPNET_DVR_HANDLEEXCEPTION_V30;
    
    //报警和异常处理结构(子结构)(多处使用)
    typedef struct
    {
        DWORD	dwHandleType;			/*处理方式,处理方式的"或"结果*/
        /*0x00: 无响应*/
        /*0x01: 监视器上警告*/
        /*0x02: 声音警告*/
        /*0x04: 上传中心*/
        /*0x08: 触发报警输出*/
        /*0x10: Jpeg抓图并上传EMail*/
        BYTE byRelAlarmOut[MAX_ALARMOUT];  //报警触发的输出通道,报警触发的输出,为1表示触发该输出
    }NET_DVR_HANDLEEXCEPTION, *LPNET_DVR_HANDLEEXCEPTION;
    
    //DVR设备参数
    typedef struct
    {
        DWORD dwSize;
        BYTE sDVRName[NAME_LEN];     //DVR名称
        DWORD dwDVRID;				//DVR ID,用于遥控器 //V1.4(0-99), V1.5(0-255)
        DWORD dwRecycleRecord;		//是否循环录像,0:不是; 1:是
        //以下不可更改
        BYTE sSerialNumber[SERIALNO_LEN];  //序列号
        DWORD dwSoftwareVersion;			//软件版本号,高16位是主版本,低16位是次版本
        DWORD dwSoftwareBuildDate;			//软件生成日期,0xYYYYMMDD
        DWORD dwDSPSoftwareVersion;		    //DSP软件版本,高16位是主版本,低16位是次版本
        DWORD dwDSPSoftwareBuildDate;		// DSP软件生成日期,0xYYYYMMDD
        DWORD dwPanelVersion;				// 前面板版本,高16位是主版本,低16位是次版本
        DWORD dwHardwareVersion;	// 硬件版本,高16位是主版本,低16位是次版本
        BYTE byAlarmInPortNum;		//DVR报警输入个数
        BYTE byAlarmOutPortNum;		//DVR报警输出个数
        BYTE byRS232Num;			//DVR 232串口个数
        BYTE byRS485Num;			//DVR 485串口个数
        BYTE byNetworkPortNum;		//网络口个数
        BYTE byDiskCtrlNum;			//DVR 硬盘控制器个数
        BYTE byDiskNum;				//DVR 硬盘个数
        BYTE byDVRType;				//DVR类型, 1:DVR 2:ATM DVR 3:DVS ......
        BYTE byChanNum;				//DVR 通道个数
        BYTE byStartChan;			//起始通道号,例如DVS-1,DVR - 1
        BYTE byDecordChans;			//DVR 解码路数
        BYTE byVGANum;				//VGA口的个数
        BYTE byUSBNum;				//USB口的个数
        BYTE byAuxoutNum;			//辅口的个数
        BYTE byAudioNum;			//语音口的个数
        BYTE byIPChanNum;			//最大数字通道数
    }NET_DVR_DEVICECFG, *LPNET_DVR_DEVICECFG;
    
    /*
     IP地址
     */
    typedef struct
    {		
        char	sIpV4[16];						/* IPv4地址 */
        BYTE	byRes[128];						/* 保留 */
    }NET_DVR_IPADDR, *LPNET_DVR_IPADDR;
    
    
    /*
     网络数据结构(子结构)(9000扩展)
     */
    typedef struct 
    {
        NET_DVR_IPADDR	struDVRIP;          					//DVR IP地址
        NET_DVR_IPADDR	struDVRIPMask;  //DVR IP地址掩码
        DWORD	dwNetInterface;   								//网络接口1-10MBase-T 2-10MBase-T全双工 3-100MBase-TX 4-100M全双工 5-10M/100M自适应
        WORD	wDVRPort;										//端口号
        WORD	wMTU;											//增加MTU设置，默认1500。
        BYTE	byMACAddr[MACADDR_LEN];							// 物理地址
    }NET_DVR_ETHERNET_V30, *LPNET_DVR_ETHERNET_V30;
    
    /*
     网络数据结构(子结构)
     */
    typedef struct
    {
        char sDVRIP[16];          //DVR IP地址
        char sDVRIPMask[16];      //DVR IP地址掩码
        DWORD dwNetInterface;     //网络接口 1-10MBase-T 2-10MBase-T全双工 3-100MBase-TX 4-100M全双工 5-10M/100M自适应
        WORD wDVRPort;		      //端口号
        BYTE byMACAddr[MACADDR_LEN];		//服务器的物理地址
    }NET_DVR_ETHERNET;
    
    //pppoe结构
    typedef struct 
    {
        DWORD	dwPPPOE;										//0-不启用,1-启用
        BYTE	sPPPoEUser[NAME_LEN];							//PPPoE用户名
        char	sPPPoEPassword[PASSWD_LEN];						// PPPoE密码
        NET_DVR_IPADDR	struPPPoEIP;							//PPPoE IP地址
    }NET_DVR_PPPOECFG, *LPNET_DVR_PPPOECFG;
    
    //网络配置结构(9000扩展)
    typedef struct
    {	
        DWORD dwSize;
        NET_DVR_ETHERNET_V30	struEtherNet[MAX_ETHERNET];		//以太网口
        NET_DVR_IPADDR	struRes1[2];					/*保留*/
        NET_DVR_IPADDR	struAlarmHostIpAddr;					/* 报警主机IP地址 */
        WORD	wRes2[2];								/* 保留 */
        WORD	wAlarmHostIpPort;								/* 报警主机端口号 */
        BYTE    byUseDhcp;                                      /* 是否启用DHCP 0xff-无效 0-不启用 1-启用*/
        BYTE	byRes3;
        NET_DVR_IPADDR	struDnsServer1IpAddr;					/* 域名服务器1的IP地址 */
        NET_DVR_IPADDR	struDnsServer2IpAddr;					/* 域名服务器2的IP地址 */
        BYTE	byIpResolver[MAX_DOMAIN_NAME];					/* IP解析服务器域名或IP地址 */
        WORD	wIpResolverPort;								/* IP解析服务器端口号 */
        WORD	wHttpPortNo;									/* HTTP端口号 */
        NET_DVR_IPADDR	struMulticastIpAddr;					/* 多播组地址 */
        NET_DVR_IPADDR	struGatewayIpAddr;						/* 网关地址 */
        NET_DVR_PPPOECFG struPPPoE;	
        BYTE    byRes[64];
    } NET_DVR_NETCFG_V30, *LPNET_DVR_NETCFG_V30;
    
    //网络配置结构
    typedef struct
    {
        DWORD dwSize;
        NET_DVR_ETHERNET struEtherNet[MAX_ETHERNET];		/* 以太网口 */
        char sManageHostIP[16];		//远程管理主机地址
        WORD wManageHostPort;		//远程管理主机端口号
        char sIPServerIP[16];            //IPServer服务器地址
        char sMultiCastIP[16];     //多播组地址
        char sGatewayIP[16];       	//网关地址
        char sNFSIP[16];			//NFS主机IP地址
        BYTE sNFSDirectory[PATHNAME_LEN];//NFS目录
        DWORD dwPPPOE;				//0-不启用,1-启用
        BYTE sPPPoEUser[NAME_LEN];	//PPPoE用户名
        char sPPPoEPassword[PASSWD_LEN];// PPPoE密码
        char sPPPoEIP[16];			//PPPoE IP地址(只读)
        WORD wHttpPort;				//HTTP端口号
    }NET_DVR_NETCFG, *LPNET_DVR_NETCFG;
    
    //通道图象结构
    //移动侦测(子结构)(9000扩展)
    typedef struct 
    {
        BYTE byMotionScope[64][96];									/*侦测区域,0-96位,表示64行,共有96*64个小宏块,为1表示是移动侦测区域,0-表示不是*/
        BYTE byMotionSensitive;										/*移动侦测灵敏度, 0 - 5,越高越灵敏,oxff关闭*/
        BYTE byEnableHandleMotion;									/* 是否处理移动侦测 0－否 1－是*/ 
        BYTE byPrecision;											/* 移动侦测算法的进度: 0--16*16, 1--32*32, 2--64*64 ... */
        char reservedData;	
        NET_DVR_HANDLEEXCEPTION_V30 struMotionHandleType;				/* 处理方式 */
        NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_V30]; /*布防时间*/
        BYTE byRelRecordChan[MAX_CHANNUM_V30];									/* 报警触发的录象通道*/
    }NET_DVR_MOTION_V30, *LPNET_DVR_MOTION_V30;
    
    //移动侦测(子结构)
    typedef struct 
    {
        BYTE byMotionScope[18][22];	/*侦测区域,共有22*18个小宏块,为1表示改宏块是移动侦测区域,0-表示不是*/
        BYTE byMotionSensitive;		/*移动侦测灵敏度, 0 - 5,越高越灵敏,0xff关闭*/
        BYTE byEnableHandleMotion;	/* 是否处理移动侦测 */
        char reservedData[2];
        NET_DVR_HANDLEEXCEPTION strMotionHandleType;	/* 处理方式 */
        NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT];//布防时间
        BYTE byRelRecordChan[MAX_CHANNUM]; //报警触发的录象通道,为1表示触发该通道
    }NET_DVR_MOTION, *LPNET_DVR_MOTION;
    
    //遮挡报警(子结构)(9000扩展)  区域大小704*576
    typedef struct 
    {
        DWORD dwEnableHideAlarm;				/* 是否启动遮挡报警 ,0-否,1-低灵敏度 2-中灵敏度 3-高灵敏度*/
        WORD wHideAlarmAreaTopLeftX;			/* 遮挡区域的x坐标 */
        WORD wHideAlarmAreaTopLeftY;			/* 遮挡区域的y坐标 */
        WORD wHideAlarmAreaWidth;				/* 遮挡区域的宽 */
        WORD wHideAlarmAreaHeight;				/*遮挡区域的高*/
        NET_DVR_HANDLEEXCEPTION_V30 strHideAlarmHandleType;	/* 处理方式 */
        NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_V30];//布防时间
    }NET_DVR_HIDEALARM_V30, *LPNET_DVR_HIDEALARM_V30;
    //遮挡报警(子结构)  区域大小704*576
    typedef struct 
    {
        DWORD dwEnableHideAlarm;				/* 是否启动遮挡报警 ,0-否,1-低灵敏度 2-中灵敏度 3-高灵敏度*/
        WORD wHideAlarmAreaTopLeftX;			/* 遮挡区域的x坐标 */
        WORD wHideAlarmAreaTopLeftY;			/* 遮挡区域的y坐标 */
        WORD wHideAlarmAreaWidth;				/* 遮挡区域的宽 */
        WORD wHideAlarmAreaHeight;				/*遮挡区域的高*/
        NET_DVR_HANDLEEXCEPTION strHideAlarmHandleType;	/* 处理方式 */
        NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT];//布防时间
    }NET_DVR_HIDEALARM, *LPNET_DVR_HIDEALARM;
    
    //信号丢失报警(子结构)(9000扩展)
    typedef struct 
    {
        BYTE byEnableHandleVILost;	/* 是否处理信号丢失报警 */
        NET_DVR_HANDLEEXCEPTION_V30 strVILostHandleType;	/* 处理方式 */
        NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_V30];//布防时间
    }NET_DVR_VILOST_V30, *LPNET_DVR_VILOST_V30;
    
    //信号丢失报警(子结构)
    typedef struct 
    {
        BYTE byEnableHandleVILost;	/* 是否处理信号丢失报警 */
        NET_DVR_HANDLEEXCEPTION strVILostHandleType;	/* 处理方式 */
        NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT];//布防时间
    }NET_DVR_VILOST, *LPNET_DVR_VILOST;
    
    //遮挡区域(子结构)
    typedef struct 
    {
        WORD wHideAreaTopLeftX;				/* 遮挡区域的x坐标 */
        WORD wHideAreaTopLeftY;				/* 遮挡区域的y坐标 */
        WORD wHideAreaWidth;				/* 遮挡区域的宽 */
        WORD wHideAreaHeight;				/*遮挡区域的高*/
    }NET_DVR_SHELTER, *LPNET_DVR_SHELTER;
    
    typedef struct
    {
        BYTE byBrightness;  	/*亮度,0-255*/
        BYTE byContrast;    	/*对比度,0-255*/	
        BYTE bySaturation;  	/*饱和度,0-255*/
        BYTE byHue;    			/*色调,0-255*/
    }NET_DVR_COLOR, *LPNET_DVR_COLOR;
    
    
    //通道图象结构(9000扩展)
    typedef struct
    {
        DWORD dwSize;
        BYTE sChanName[NAME_LEN];
        DWORD dwVideoFormat;	/* 只读 视频制式 1-NTSC 2-PAL*/
        NET_DVR_COLOR struColor;//	图像参数
        char reservedData [60];/*保留*/
        //显示通道名
        DWORD dwShowChanName; // 预览的图象上是否显示通道名称,0-不显示,1-显示 区域大小704*576
        WORD wShowNameTopLeftX;				/* 通道名称显示位置的x坐标 */
        WORD wShowNameTopLeftY;				/* 通道名称显示位置的y坐标 */
        //视频信号丢失报警
        NET_DVR_VILOST_V30 struVILost;
        NET_DVR_VILOST_V30 struRes;		/*保留*/
        //移动侦测
        NET_DVR_MOTION_V30 struMotion;
        //遮挡报警
        NET_DVR_HIDEALARM_V30 struHideAlarm;
        //遮挡  区域大小704*576
        DWORD dwEnableHide;		/* 是否启动遮挡 ,0-否,1-是*/
        NET_DVR_SHELTER struShelter[MAX_SHELTERNUM];
        //OSD
        DWORD dwShowOsd;// 预览的图象上是否显示OSD,0-不显示,1-显示 区域大小704*576
        WORD wOSDTopLeftX;				/* OSD的x坐标 */
        WORD wOSDTopLeftY;				/* OSD的y坐标 */
        BYTE byOSDType;					/* OSD类型(主要是年月日格式) */
        /* 0: XXXX-XX-XX 年月日 */
        /* 1: XX-XX-XXXX 月日年 */
        /* 2: XXXX年XX月XX日 */
        /* 3: XX月XX日XXXX年 */
        /* 4: XX-XX-XXXX 日月年*/
        /* 5: XX日XX月XXXX年 */
        BYTE byDispWeek;				/* 是否显示星期 */
        BYTE byOSDAttrib;				/* OSD属性:透明，闪烁 */
        /* 0: 不显示OSD */
        /* 1: 透明,闪烁 */
        /* 2: 透明,不闪烁 */
        /* 3: 闪烁,不透明 */
        /* 4: 不透明,不闪烁 */
        BYTE byHourOSDType;				/* OSD小时制:0-24小时制,1-12小时制 */
        BYTE byRes[64];
    }NET_DVR_PICCFG_V30, *LPNET_DVR_PICCFG_V30;
    
    //通道图象结构SDK_V14扩展
    typedef struct 
    {
        DWORD dwSize;
        BYTE sChanName[NAME_LEN];
        DWORD dwVideoFormat;	/* 只读 视频制式 1-NTSC 2-PAL*/
        BYTE byBrightness;  	/*亮度,0-255*/
        BYTE byContrast;    	/*对比度,0-255*/
        BYTE bySaturation;  	/*饱和度,0-255 */
        BYTE byHue;    			/*色调,0-255*/
        //显示通道名
        DWORD dwShowChanName; // 预览的图象上是否显示通道名称,0-不显示,1-显示 区域大小704*576
        WORD wShowNameTopLeftX;				/* 通道名称显示位置的x坐标 */
        WORD wShowNameTopLeftY;				/* 通道名称显示位置的y坐标 */
        //信号丢失报警
        NET_DVR_VILOST struVILost;
        //移动侦测
        NET_DVR_MOTION struMotion;
        //遮挡报警
        NET_DVR_HIDEALARM struHideAlarm;
        //遮挡  区域大小704*576
        DWORD dwEnableHide;		/* 是否启动遮挡 ,0-否,1-是*/
        NET_DVR_SHELTER struShelter[MAX_SHELTERNUM];
        //OSD
        DWORD dwShowOsd;// 预览的图象上是否显示OSD,0-不显示,1-显示 区域大小704*576
        WORD wOSDTopLeftX;				/* OSD的x坐标 */
        WORD wOSDTopLeftY;				/* OSD的y坐标 */
        BYTE byOSDType;					/* OSD类型(主要是年月日格式) */
        /* 0: XXXX-XX-XX 年月日 */
        /* 1: XX-XX-XXXX 月日年 */
        /* 2: XXXX年XX月XX日 */
        /* 3: XX月XX日XXXX年 */
        /* 4: XX-XX-XXXX 日月年*/
        /* 5: XX日XX月XXXX年 */
        BYTE byDispWeek;				/* 是否显示星期 */
        BYTE byOSDAttrib;				/* OSD属性:透明，闪烁 */
        /* 0: 不显示OSD */
        /* 1: 透明,闪烁 */
        /* 2: 透明,不闪烁 */
        /* 3: 闪烁,不透明 */
        /* 4: 不透明,不闪烁 */
        BYTE byHourOsdType;		/* OSD小时制:0-24小时制,1-12小时制 */
    }NET_DVR_PICCFG_EX, *LPNET_DVR_PICCFG_EX;
    
    //通道图象结构(SDK_V13及之前版本)
    typedef struct 
    {
        DWORD dwSize;
        BYTE sChanName[NAME_LEN];
        DWORD dwVideoFormat;	/* 只读 视频制式 1-NTSC 2-PAL*/
        BYTE byBrightness;  	/*亮度,0-255*/
        BYTE byContrast;    	/*对比度,0-255*/
        BYTE bySaturation;  	/*饱和度,0-255 */
        BYTE byHue;    			/*色调,0-255*/
        //显示通道名
        DWORD dwShowChanName; // 预览的图象上是否显示通道名称,0-不显示,1-显示 区域大小704*576
        WORD wShowNameTopLeftX;				/* 通道名称显示位置的x坐标 */
        WORD wShowNameTopLeftY;				/* 通道名称显示位置的y坐标 */
        //信号丢失报警
        NET_DVR_VILOST struVILost;
        //移动侦测
        NET_DVR_MOTION struMotion;
        //遮挡报警
        NET_DVR_HIDEALARM struHideAlarm;
        //遮挡  区域大小704*576
        DWORD dwEnableHide;		/* 是否启动遮挡 ,0-否,1-是*/
        WORD wHideAreaTopLeftX;				/* 遮挡区域的x坐标 */
        WORD wHideAreaTopLeftY;				/* 遮挡区域的y坐标 */
        WORD wHideAreaWidth;				/* 遮挡区域的宽 */
        WORD wHideAreaHeight;				/*遮挡区域的高*/
        //OSD
        DWORD dwShowOsd;// 预览的图象上是否显示OSD,0-不显示,1-显示 区域大小704*576
        WORD wOSDTopLeftX;				/* OSD的x坐标 */
        WORD wOSDTopLeftY;				/* OSD的y坐标 */
        BYTE byOSDType;					/* OSD类型(主要是年月日格式) */
        /* 0: XXXX-XX-XX 年月日 */
        /* 1: XX-XX-XXXX 月日年 */
        /* 2: XXXX年XX月XX日 */
        /* 3: XX月XX日XXXX年 */
        /* 4: XX-XX-XXXX 日月年*/
        /* 5: XX日XX月XXXX年 */
        BYTE byDispWeek;				/* 是否显示星期 */
        BYTE byOSDAttrib;				/* OSD属性:透明，闪烁 */
        /* 0: 不显示OSD */
        /* 1: 透明,闪烁 */
        /* 2: 透明,不闪烁 */
        /* 3: 闪烁,不透明 */
        /* 4: 不透明,不闪烁 */
        char reservedData2;
    }NET_DVR_PICCFG, *LPNET_DVR_PICCFG;
    
    //码流压缩参数(子结构)(9000扩展)
    typedef struct 
    {
        BYTE byStreamType;		//码流类型 0-视频流, 1-复合流, 表示事件压缩参数时最高位表示是否启用压缩参数
        BYTE byResolution;  	//分辨率0-DCIF 1-CIF, 2-QCIF, 3-4CIF, 4-2CIF 5（保留）16-VGA（640*480） 17-UXGA（1600*1200） 18-SVGA （800*600）19-HD720p（1280*720）20-XVGA  21-HD900p
        BYTE byBitrateType;		//码率类型 0:定码率，1:变码率
        BYTE byPicQuality;		//图象质量 0-最好 1-次好 2-较好 3-一般 4-较差 5-差
        DWORD dwVideoBitrate; 	//视频码率 0-保留 1-16K 2-32K 3-48k 4-64K 5-80K 6-96K 7-128K 8-160k 9-192K 10-224K 11-256K 12-320K
        // 13-384K 14-448K 15-512K 16-640K 17-768K 18-896K 19-1024K 20-1280K 21-1536K 22-1792K 23-2048K
        //最高位(31位)置成1表示是自定义码流, 0-30位表示码流值。
        DWORD dwVideoFrameRate;	//帧率 0-全部; 1-1/16; 2-1/8; 3-1/4; 4-1/2; 5-1; 6-2; 7-4; 8-6; 9-8; 10-10; 11-12; 12-16; 13-20; V2.0版本中新加14-15; 15-18; 16-22;
        WORD  wIntervalFrameI;  //I帧间隔
        //2006-08-11 增加单P帧的配置接口，可以改善实时流延时问题
        BYTE  byIntervalBPFrame;//0-BBP帧; 1-BP帧; 2-单P帧
        BYTE  byres1;        //保留
        BYTE  byVideoEncType;   //视频编码类型 0 hik264;1标准h264; 2标准mpeg4;
        BYTE  byAudioEncType;   //音频编码类型 0－OggVorbis
        BYTE  byres[10];//这里保留音频的压缩参数
    }NET_DVR_COMPRESSION_INFO_V30, *LPNET_DVR_COMPRESSION_INFO_V30;
    
    //通道压缩参数(9000扩展)
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_COMPRESSION_INFO_V30 struNormHighRecordPara;    //录像 对应8000的普通
        NET_DVR_COMPRESSION_INFO_V30 struRes;//保留 char reserveData[28];
        NET_DVR_COMPRESSION_INFO_V30 struEventRecordPara;       //事件触发压缩参数
        NET_DVR_COMPRESSION_INFO_V30 struNetPara;               //网传(子码流)
    }NET_DVR_COMPRESSIONCFG_V30, *LPNET_DVR_COMPRESSIONCFG_V30;
    
    //码流压缩参数(子结构)
    typedef struct 
    {
        BYTE byStreamType;		//码流类型0-视频流,1-复合流,表示压缩参数时最高位表示是否启用压缩参数
        BYTE byResolution;  	//分辨率0-DCIF 1-CIF, 2-QCIF, 3-4CIF, 4-2CIF, 5-2QCIF(352X144)(车载专用)
        BYTE byBitrateType;		//码率类型0:变码率，1:定码率
        BYTE  byPicQuality;		//图象质量 0-最好 1-次好 2-较好 3-一般 4-较差 5-差
        DWORD dwVideoBitrate; 	//视频码率 0-保留 1-16K(保留) 2-32K 3-48k 4-64K 5-80K 6-96K 7-128K 8-160k 9-192K 10-224K 11-256K 12-320K
        // 13-384K 14-448K 15-512K 16-640K 17-768K 18-896K 19-1024K 20-1280K 21-1536K 22-1792K 23-2048K
        //最高位(31位)置成1表示是自定义码流, 0-30位表示码流值(MIN-32K MAX-8192K)。
        DWORD dwVideoFrameRate;	//帧率 0-全部; 1-1/16; 2-1/8; 3-1/4; 4-1/2; 5-1; 6-2; 7-4; 8-6; 9-8; 10-10; 11-12; 12-16; 13-20;
    }NET_DVR_COMPRESSION_INFO, *LPNET_DVR_COMPRESSION_INFO;
    
    //通道压缩参数
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_COMPRESSION_INFO struRecordPara; //录像/事件触发录像
        NET_DVR_COMPRESSION_INFO struNetPara;	//网传/保留
    }NET_DVR_COMPRESSIONCFG, *LPNET_DVR_COMPRESSIONCFG;
    
    //码流压缩参数(子结构)(扩展) 增加I帧间隔
    typedef struct 
    {
        BYTE byStreamType;		//码流类型0-视频流, 1-复合流
        BYTE byResolution;  	//分辨率0-DCIF 1-CIF, 2-QCIF, 3-4CIF, 4-2CIF, 5-2QCIF(352X144)(车载专用)
        BYTE byBitrateType;		//码率类型0:变码率，1:定码率
        BYTE  byPicQuality;		//图象质量 0-最好 1-次好 2-较好 3-一般 4-较差 5-差
        DWORD dwVideoBitrate; 	//视频码率 0-保留 1-16K(保留) 2-32K 3-48k 4-64K 5-80K 6-96K 7-128K 8-160k 9-192K 10-224K 11-256K 12-320K
        // 13-384K 14-448K 15-512K 16-640K 17-768K 18-896K 19-1024K 20-1280K 21-1536K 22-1792K 23-2048K
        //最高位(31位)置成1表示是自定义码流, 0-30位表示码流值(MIN-32K MAX-8192K)。
        DWORD dwVideoFrameRate;	//帧率 0-全部; 1-1/16; 2-1/8; 3-1/4; 4-1/2; 5-1; 6-2; 7-4; 8-6; 9-8; 10-10; 11-12; 12-16; 13-20, //V2.0增加14-15, 15-18, 16-22;
        WORD  wIntervalFrameI;  //I帧间隔
        //2006-08-11 增加单P帧的配置接口，可以改善实时流延时问题
        BYTE  byIntervalBPFrame;//0-BBP帧; 1-BP帧; 2-单P帧
        BYTE  byRes;
    }NET_DVR_COMPRESSION_INFO_EX, *LPNET_DVR_COMPRESSION_INFO_EX;
    
    //通道压缩参数(扩展)
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_COMPRESSION_INFO_EX struRecordPara; //录像
        NET_DVR_COMPRESSION_INFO_EX struNetPara;	//网传
    }NET_DVR_COMPRESSIONCFG_EX, *LPNET_DVR_COMPRESSIONCFG_EX;
    
    
    //时间段录像参数配置(子结构)
    typedef struct 
    {
        NET_DVR_SCHEDTIME struRecordTime;
        BYTE byRecordType;	//0:定时录像，1:移动侦测，2:报警录像，3:动测|报警，4:动测&报警, 5:命令触发, 6: 手动录像
        char reservedData[3];
    }NET_DVR_RECORDSCHED, *LPNET_DVR_RECORDSCHED;
    
    //全天录像参数配置(子结构)
    typedef struct 
    {
        WORD wAllDayRecord;				/* 是否全天录像 0-否 1-是*/
        BYTE byRecordType;				/* 录象类型 0:定时录像，1:移动侦测，2:报警录像，3:动测|报警，4:动测&报警 5:命令触发, 6: 手动录像*/
        char reservedData;
    }NET_DVR_RECORDDAY, *LPNET_DVR_RECORDDAY;
    
    //通道录像参数配置(9000扩展)
    typedef struct 
    {
        DWORD	dwSize;
        DWORD	dwRecord;  						/*是否录像 0-否 1-是*/
        NET_DVR_RECORDDAY	struRecAllDay[MAX_DAYS];
        NET_DVR_RECORDSCHED	struRecordSched[MAX_DAYS][MAX_TIMESEGMENT_V30];
        DWORD	dwRecordTime;					/* 录象延时长度 0-5秒， 1-20秒， 2-30秒， 3-1分钟， 4-2分钟， 5-5分钟， 6-10分钟*/
        DWORD	dwPreRecordTime;				/* 预录时间 0-不预录 1-5秒 2-10秒 3-15秒 4-20秒 5-25秒 6-30秒 7-0xffffffff(尽可能预录) */
        DWORD	dwRecorderDuration;				/* 录像保存的最长时间 */
        BYTE	byRedundancyRec;	/*是否冗余录像,重要数据双备份：0/1*/
        BYTE	byAudioRec;		/*录像时复合流编码时是否记录音频数据：国外有此法规*/
        BYTE	byReserve[10];	
    }NET_DVR_RECORD_V30, *LPNET_DVR_RECORD_V30;
    
    //通道录像参数配置
    typedef struct 
    {
        DWORD dwSize;
        DWORD dwRecord;  /*是否录像 0-否 1-是*/
        NET_DVR_RECORDDAY struRecAllDay[MAX_DAYS];
        NET_DVR_RECORDSCHED struRecordSched[MAX_DAYS][MAX_TIMESEGMENT];
        DWORD dwRecordTime;	/* 录象时间长度 */
        DWORD dwPreRecordTime;	/* 预录时间 0-不预录 1-5秒 2-10秒 3-15秒 4-20秒 5-25秒 6-30秒 7-0xffffffff(尽可能预录) */
    }NET_DVR_RECORD, *LPNET_DVR_RECORD;
    
    //云台协议表结构配置
    typedef struct
    { 
        DWORD dwType;               /*解码器类型值，从1开始连续递增*/    
        BYTE  byDescribe[DESC_LEN]; /*解码器的描述符，和8000中的一致*/    
    }NET_DVR_PTZ_PROTOCOL;
    
    typedef struct
    {    
        DWORD   dwSize;    
        NET_DVR_PTZ_PROTOCOL struPtz[PTZ_PROTOCOL_NUM];/*最大200中PTZ协议*/    
        DWORD   dwPtzNum;           /*有效的ptz协议数目，从0开始(即计算时加1)*/
        BYTE    byRes[8];
    }NET_DVR_PTZCFG, *LPNET_DVR_PTZCFG;
    /***************************云台类型(end)******************************/
    
    //通道解码器(云台)参数配置(9000扩展)
    typedef struct 
    {
        DWORD dwSize;
        DWORD dwBaudRate;//波特率(bps)，0－50，1－75，2－110，3－150，4－300，5－600，6－1200，7－2400，8－4800，9－9600，10－19200， 11－38400，12－57600，13－76800，14－115.2k;
        BYTE byDataBit;// 数据有几位 0－5位，1－6位，2－7位，3－8位;
        BYTE byStopBit;// 停止位 0－1位，1－2位;
        BYTE byParity;// 校验 0－无校验，1－奇校验，2－偶校验;
        BYTE byFlowcontrol;// 0－无，1－软流控,2-硬流控
        WORD wDecoderType;//解码器类型, 从0开始，对应ptz协议列表
        WORD wDecoderAddress;	/*解码器地址:0 - 255*/
        BYTE bySetPreset[MAX_PRESET_V30];		/* 预置点是否设置,0-没有设置,1-设置*/
        BYTE bySetCruise[MAX_CRUISE_V30];		/* 巡航是否设置: 0-没有设置,1-设置 */
        BYTE bySetTrack[MAX_TRACK_V30];		    /* 轨迹是否设置,0-没有设置,1-设置*/
    }NET_DVR_DECODERCFG_V30, *LPNET_DVR_DECODERCFG_V30;
    
    //通道解码器(云台)参数配置
    typedef struct 
    {
        DWORD dwSize;
        DWORD dwBaudRate;       //波特率(bps)，0－50，1－75，2－110，3－150，4－300，5－600，6－1200，7－2400，8－4800，9－9600，10－19200， 11－38400，12－57600，13－76800，14－115.2k;
        BYTE byDataBit;         // 数据有几位 0－5位，1－6位，2－7位，3－8位;
        BYTE byStopBit;         // 停止位 0－1位，1－2位;
        BYTE byParity;          // 校验 0－无校验，1－奇校验，2－偶校验;
        BYTE byFlowcontrol;     // 0－无，1－软流控,2-硬流控
        WORD wDecoderType;      //解码器类型, 0－YouLi，1－LiLin-1016，2－LiLin-820，3－Pelco-p，4－DM DynaColor，5－HD600，6－JC-4116，7－Pelco-d WX，8－Pelco-d PICO
        WORD wDecoderAddress;	/*解码器地址:0 - 255*/
        BYTE bySetPreset[MAX_PRESET];		/* 预置点是否设置,0-没有设置,1-设置*/
        BYTE bySetCruise[MAX_CRUISE];		/* 巡航是否设置: 0-没有设置,1-设置 */
        BYTE bySetTrack[MAX_TRACK];		/* 轨迹是否设置,0-没有设置,1-设置*/
    }NET_DVR_DECODERCFG, *LPNET_DVR_DECODERCFG;
    
    //ppp参数配置(子结构)
    typedef struct 
    {
        NET_DVR_IPADDR struRemoteIP;	//远端IP地址
        NET_DVR_IPADDR struLocalIP;		//本地IP地址
        char sLocalIPMask[16];			//本地IP地址掩码
        BYTE sUsername[NAME_LEN];		/* 用户名 */
        BYTE sPassword[PASSWD_LEN];		/* 密码 */
        BYTE byPPPMode;					//PPP模式, 0－主动，1－被动
        BYTE byRedial;					//是否回拨 ：0-否,1-是
        BYTE byRedialMode;				//回拨模式,0-由拨入者指定,1-预置回拨号码
        BYTE byDataEncrypt;				//数据加密,0-否,1-是
        DWORD dwMTU;					//MTU
        char sTelephoneNumber[PHONENUMBER_LEN];   //电话号码
    }NET_DVR_PPPCFG_V30, *LPNET_DVR_PPPCFG_V30;
    
    //ppp参数配置(子结构)
    typedef struct 
    {
        char sRemoteIP[16];				//远端IP地址
        char sLocalIP[16];				//本地IP地址
        char sLocalIPMask[16];			//本地IP地址掩码
        BYTE sUsername[NAME_LEN];		/* 用户名 */
        BYTE sPassword[PASSWD_LEN];		/* 密码 */
        BYTE byPPPMode;					//PPP模式, 0－主动，1－被动
        BYTE byRedial;					//是否回拨 ：0-否,1-是
        BYTE byRedialMode;				//回拨模式,0-由拨入者指定,1-预置回拨号码
        BYTE byDataEncrypt;				//数据加密,0-否,1-是
        DWORD dwMTU;					//MTU
        char sTelephoneNumber[PHONENUMBER_LEN];   //电话号码
    }NET_DVR_PPPCFG, *LPNET_DVR_PPPCFG;
    
    //RS232串口参数配置(9000扩展)
    typedef struct
    {
        DWORD dwBaudRate;   /*波特率(bps)，0－50，1－75，2－110，3－150，4－300，5－600，6－1200，7－2400，8－4800，9－9600，10－19200， 11－38400，12－57600，13－76800，14－115.2k;*/
        BYTE byDataBit;     /* 数据有几位 0－5位，1－6位，2－7位，3－8位 */
        BYTE byStopBit;     /* 停止位 0－1位，1－2位 */
        BYTE byParity;      /* 校验 0－无校验，1－奇校验，2－偶校验 */
        BYTE byFlowcontrol; /* 0－无，1－软流控,2-硬流控 */
        DWORD dwWorkMode;   /* 工作模式，0－232串口用于PPP拨号，1－232串口用于参数控制，2－透明通道 */
    }NET_DVR_SINGLE_RS232;
    
    //RS232串口参数配置(9000扩展)
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_SINGLE_RS232 struRs232;
        BYTE byRes[84]; 
        NET_DVR_PPPCFG_V30 struPPPConfig;
    }NET_DVR_RS232CFG_V30, *LPNET_DVR_RS232CFG_V30;
    
    //RS232串口参数配置
    typedef struct 
    {
        DWORD dwSize;
        DWORD dwBaudRate;//波特率(bps)，0－50，1－75，2－110，3－150，4－300，5－600，6－1200，7－2400，8－4800，9－9600，10－19200， 11－38400，12－57600，13－76800，14－115.2k;
        BYTE byDataBit;// 数据有几位 0－5位，1－6位，2－7位，3－8位;
        BYTE byStopBit;// 停止位 0－1位，1－2位;
        BYTE byParity;// 校验 0－无校验，1－奇校验，2－偶校验;
        BYTE byFlowcontrol;// 0－无，1－软流控,2-硬流控
        DWORD dwWorkMode;// 工作模式，0－窄带传输(232串口用于PPP拨号)，1－控制台(232串口用于参数控制)，2－透明通道
        NET_DVR_PPPCFG struPPPConfig;
    }NET_DVR_RS232CFG, *LPNET_DVR_RS232CFG;
    
    //报警输入参数配置(9000扩展)
    typedef struct 
    {
        DWORD dwSize;
        BYTE sAlarmInName[NAME_LEN];	/* 名称 */
        BYTE byAlarmType;	            //报警器类型,0：常开,1：常闭
        BYTE byAlarmInHandle;	        /* 是否处理 0-不处理 1-处理*/
        BYTE byRes1[2];			
        NET_DVR_HANDLEEXCEPTION_V30 struAlarmHandleType;	/* 处理方式 */
        NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_V30];//布防时间
        BYTE byRelRecordChan[MAX_CHANNUM_V30]; //报警触发的录象通道,为1表示触发该通道
        BYTE byEnablePreset[MAX_CHANNUM_V30];		/* 是否调用预置点 0-否,1-是*/
        BYTE byPresetNo[MAX_CHANNUM_V30];			/* 调用的云台预置点序号,一个报警输入可以调用多个通道的云台预置点, 0xff表示不调用预置点。*/
        BYTE byRes2[192];					/*保留*/
        BYTE byEnableCruise[MAX_CHANNUM_V30];		/* 是否调用巡航 0-否,1-是*/
        BYTE byCruiseNo[MAX_CHANNUM_V30];			/* 巡航 */
        BYTE byEnablePtzTrack[MAX_CHANNUM_V30];		/* 是否调用轨迹 0-否,1-是*/
        BYTE byPTZTrack[MAX_CHANNUM_V30];			/* 调用的云台的轨迹序号 */
        BYTE byRes3[16];
    }NET_DVR_ALARMINCFG_V30, *LPNET_DVR_ALARMINCFG_V30;
    
    //报警输入参数配置
    typedef struct 
    {
        DWORD dwSize;
        BYTE sAlarmInName[NAME_LEN];	/* 名称 */
        BYTE byAlarmType;	//报警器类型,0：常开,1：常闭
        BYTE byAlarmInHandle;	/* 是否处理 0-不处理 1-处理*/
        NET_DVR_HANDLEEXCEPTION struAlarmHandleType;	/* 处理方式 */
        NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT];//布防时间
        BYTE byRelRecordChan[MAX_CHANNUM]; //报警触发的录象通道,为1表示触发该通道
        BYTE byEnablePreset[MAX_CHANNUM];		/* 是否调用预置点 0-否,1-是*/
        BYTE byPresetNo[MAX_CHANNUM];			/* 调用的云台预置点序号,一个报警输入可以调用多个通道的云台预置点, 0xff表示不调用预置点。*/
        BYTE byEnableCruise[MAX_CHANNUM];		/* 是否调用巡航 0-否,1-是*/
        BYTE byCruiseNo[MAX_CHANNUM];			/* 巡航 */
        BYTE byEnablePtzTrack[MAX_CHANNUM];		/* 是否调用轨迹 0-否,1-是*/
        BYTE byPTZTrack[MAX_CHANNUM];			/* 调用的云台的轨迹序号 */
    }NET_DVR_ALARMINCFG, *LPNET_DVR_ALARMINCFG;
    
    
    //上传报警信息(9000扩展)
    typedef struct 
    {
        DWORD dwAlarmType;/*0-信号量报警,1-硬盘满,2-信号丢失,3－移动侦测,4－硬盘未格式化,5-读写硬盘出错,6-遮挡报警,7-制式不匹配, 8-非法访问, 0xa-GPS定位信息(车载定制)*/
        DWORD dwAlarmInputNumber;/*报警输入端口*/
        BYTE byAlarmOutputNumber[MAX_ALARMOUT_V30];/*触发的输出端口，为1表示对应输出*/
        BYTE byAlarmRelateChannel[MAX_CHANNUM_V30];/*触发的录像通道，为1表示对应录像, dwAlarmRelateChannel[0]对应第1个通道*/
        BYTE byChannel[MAX_CHANNUM_V30];/*dwAlarmType为2或3,6时，表示哪个通道，dwChannel[0]对应第1个通道*/
        BYTE byDiskNumber[MAX_DISKNUM_V30];/*dwAlarmType为1,4,5时,表示哪个硬盘, dwDiskNumber[0]对应第1个硬盘*/
    }NET_DVR_ALARMINFO_V30, *LPNET_DVR_ALARMINFO_V30;
    
    typedef struct 
    {
        DWORD dwAlarmType;/*0-信号量报警,1-硬盘满,2-信号丢失,3－移动侦测,4－硬盘未格式化,5-读写硬盘出错,6-遮挡报警,7-制式不匹配, 8-非法访问, 9-串口状态, 0xa-GPS定位信息(车载定制)*/
        DWORD dwAlarmInputNumber;/*报警输入端口, 当报警类型为9时该变量表示串口状态0表示正常， -1表示错误*/
        DWORD dwAlarmOutputNumber[MAX_ALARMOUT];/*触发的输出端口，哪一位为1表示对应哪一个输出*/
        DWORD dwAlarmRelateChannel[MAX_CHANNUM];/*触发的录像通道，哪一位为1表示对应哪一路录像, dwAlarmRelateChannel[0]对应第1个通道*/
        DWORD dwChannel[MAX_CHANNUM];/*dwAlarmType为2或3,6时，表示哪个通道，dwChannel[0]位对应第1个通道*/
        DWORD dwDiskNumber[MAX_DISKNUM];/*dwAlarmType为1,4,5时,表示哪个硬盘, dwDiskNumber[0]位对应第1个硬盘*/
    }NET_DVR_ALARMINFO, *LPNET_DVR_ALARMINFO;
    
    
    
    
    //////////////////////////////////////////////////////////////////////////////////////
    //IPC接入参数配置
    /* IP设备结构 */
    typedef struct 
    {
        DWORD dwEnable;				    /* 该IP设备是否启用 */
        BYTE sUserName[NAME_LEN];		/* 用户名 */
        BYTE sPassword[PASSWD_LEN];	    /* 密码 */ 
        NET_DVR_IPADDR struIP;			/* IP地址 */
        WORD wDVRPort;			 	    /* 端口号 */
        BYTE byRes[34];				/* 保留 */
    }NET_DVR_IPDEVINFO, *LPNET_DVR_IPDEVINFO;
    
    /* IP通道匹配参数 */
    typedef struct 
    {
        BYTE byEnable;					/* 0表示9000设备的数字通道连接对应的IPC或DVS失败，该通道不在线；1表示连接成功，该通道在线；*/
        BYTE byIPID;					/* IP设备ID 取值1- MAX_IP_DEVICE */
        BYTE byChannel;					/* 通道号 */
        BYTE byRes[33];					/* 保留 */
    } NET_DVR_IPCHANINFO, *LPNET_DVR_IPCHANINFO;
    
    /* IP接入配置结构 */
    typedef struct 
    {
        DWORD dwSize;			                            /* 结构大小 */
        NET_DVR_IPDEVINFO  struIPDevInfo[MAX_IP_DEVICE];    /* IP设备 */
        BYTE byAnalogChanEnable[MAX_ANALOG_CHANNUM];        /* 模拟通道是否启用，从低到高表示1-32通道，0表示无效 1有效 */
        NET_DVR_IPCHANINFO struIPChanInfo[MAX_IP_CHANNEL];	/* IP通道 */    
    }NET_DVR_IPPARACFG, *LPNET_DVR_IPPARACFG;
    
    /* 报警输出参数 */
    typedef struct 
    {
        BYTE byIPID;					/* IP设备ID取值1- MAX_IP_DEVICE */
        BYTE byAlarmOut;				/* 报警输出号 */
        BYTE byRes[18];					/* 保留 */
    }NET_DVR_IPALARMOUTINFO, *LPNET_DVR_IPALARMOUTINFO;
    
    /* IP报警输出配置结构 */
    typedef struct 
    {
        DWORD dwSize;			                        /* 结构大小 */    
        NET_DVR_IPALARMOUTINFO struIPAlarmOutInfo[MAX_IP_ALARMOUT];/* IP报警输出 */
    }NET_DVR_IPALARMOUTCFG, *LPNET_DVR_IPALARMOUTCFG;
    
    /* 报警输入参数 */
    typedef struct 
    {
        BYTE byIPID;					/* IP设备ID取值1- MAX_IP_DEVICE */
        BYTE byAlarmIn;					/* 报警输入号 */
        BYTE byRes[18];					/* 保留 */
    }NET_DVR_IPALARMININFO, *LPNET_DVR_IPALARMININFO;
    
    /* IP报警输入配置结构 */
    typedef struct 
    {
        DWORD dwSize;			                        /* 结构大小 */    
        NET_DVR_IPALARMININFO struIPAlarmInInfo[MAX_IP_ALARMIN];/* IP报警输入 */
    }NET_DVR_IPALARMINCFG, *LPNET_DVR_IPALARMINCFG;
    
    //ipc alarm info
    typedef struct 
    {
        NET_DVR_IPDEVINFO  struIPDevInfo[MAX_IP_DEVICE];            /* IP设备 */
        BYTE byAnalogChanEnable[MAX_ANALOG_CHANNUM];                /* 模拟通道是否启用，0-未启用 1-启用 */
        NET_DVR_IPCHANINFO struIPChanInfo[MAX_IP_CHANNEL];	        /* IP通道 */
        NET_DVR_IPALARMININFO struIPAlarmInInfo[MAX_IP_ALARMIN];    /* IP报警输入 */
        NET_DVR_IPALARMOUTINFO struIPAlarmOutInfo[MAX_IP_ALARMOUT]; /* IP报警输出 */
    }NET_DVR_IPALARMINFO, *LPNET_DVR_IPALARMINFO;
    //本地硬盘信息配置
    typedef struct
    {
        DWORD dwHDNo;         /*硬盘号, 取值0~MAX_DISKNUM_V30-1*/
        DWORD dwCapacity;     /*硬盘容量(不可设置)*/
        DWORD dwFreeSpace;    /*硬盘剩余空间(不可设置)*/
        DWORD dwHdStatus;     /*硬盘状态(不可设置) 0-正常, 1-未格式化, 2-错误, 3-SMART状态, 4-不匹配, 5-休眠*/
        BYTE  byHDAttr;       /*0-默认, 1-冗余; 2-只读*/
        BYTE  byRes1[3];
        DWORD dwHdGroup;      /*属于哪个盘组 1-MAX_HD_GROUP*/
        BYTE  byRes2[120];
    }NET_DVR_SINGLE_HD, *LPNET_DVR_SINGLE_HD;
    
    typedef struct
    {
        DWORD dwSize;
        DWORD dwHDCount;          /*硬盘数(不可设置)*/
        NET_DVR_SINGLE_HD struHDInfo[MAX_DISKNUM_V30];//硬盘相关操作都需要重启才能生效；
    }NET_DVR_HDCFG, *LPNET_DVR_HDCFG;
    
    //本地盘组信息配置
    typedef struct
    {
        DWORD dwHDGroupNo;       /*盘组号(不可设置) 1-MAX_HD_GROUP*/        
        BYTE byHDGroupChans[64]; /*盘组对应的录像通道, 0-表示该通道不录象到该盘组，1-表示录象到该盘组*/
        BYTE byRes[8];
    }NET_DVR_SINGLE_HDGROUP, *LPNET_DVR_SINGLE_HDGROUP;
    
    typedef struct
    {
        DWORD dwSize;
        DWORD dwHDGroupCount;        /*盘组总数(不可设置)*/
        NET_DVR_SINGLE_HDGROUP struHDGroupAttr[MAX_HD_GROUP];//硬盘相关操作都需要重启才能生效；
    }NET_DVR_HDGROUP_CFG, *LPNET_DVR_HDGROUP_CFG;
    
    
    //配置缩放参数的结构
    typedef struct
    {
        DWORD dwSize;
        DWORD dwMajorScale;    /* 主显示 0-不缩放，1-缩放*/
        DWORD dwMinorScale;    /* 辅显示 0-不缩放，1-缩放*/
        DWORD dwRes[2];
    }NET_DVR_SCALECFG, *LPNET_DVR_SCALECFG;
    
    
    
    //DVR报警输出(9000扩展)
    typedef struct 
    {
        DWORD dwSize;
        BYTE sAlarmOutName[NAME_LEN];	/* 名称 */
        DWORD dwAlarmOutDelay;	/* 输出保持时间(-1为无限，手动关闭) */
        //0-5秒,1-10秒,2-30秒,3-1分钟,4-2分钟,5-5分钟,6-10分钟,7-手动
        NET_DVR_SCHEDTIME struAlarmOutTime[MAX_DAYS][MAX_TIMESEGMENT_V30];/* 报警输出激活时间段 */
        BYTE byRes[16];
    }NET_DVR_ALARMOUTCFG_V30, *LPNET_DVR_ALARMOUTCFG_V30;
    
    //DVR报警输出
    typedef struct 
    {
        DWORD dwSize;
        BYTE sAlarmOutName[NAME_LEN];	/* 名称 */
        DWORD dwAlarmOutDelay;	/* 输出保持时间(-1为无限，手动关闭) */
        //0-5秒,1-10秒,2-30秒,3-1分钟,4-2分钟,5-5分钟,6-10分钟,7-手动
        NET_DVR_SCHEDTIME struAlarmOutTime[MAX_DAYS][MAX_TIMESEGMENT];/* 报警输出激活时间段 */
    }NET_DVR_ALARMOUTCFG, *LPNET_DVR_ALARMOUTCFG;
    
    //DVR本地预览参数(9000扩展)
    typedef struct 
    {
        DWORD dwSize;
        BYTE byPreviewNumber;//预览数目,0-1画面,1-4画面,2-9画面,3-16画面,0xff:最大画面
        BYTE byEnableAudio;//是否声音预览,0-不预览,1-预览
        WORD wSwitchTime;//切换时间,0-不切换,1-5s,2-10s,3-20s,4-30s,5-60s,6-120s,7-300s
        BYTE bySwitchSeq[MAX_PREVIEW_MODE][MAX_WINDOW_V30];//切换顺序,如果lSwitchSeq[i]为 0xff表示不用
        BYTE byRes[24];
    }NET_DVR_PREVIEWCFG_V30, *LPNET_DVR_PREVIEWCFG_V30;
    //DVR本地预览参数
    typedef struct 
    {
        DWORD dwSize;
        BYTE byPreviewNumber;//预览数目,0-1画面,1-4画面,2-9画面,3-16画面,0xff:最大画面
        BYTE byEnableAudio;//是否声音预览,0-不预览,1-预览
        WORD wSwitchTime;//切换时间,0-不切换,1-5s,2-10s,3-20s,4-30s,5-60s,6-120s,7-300s
        BYTE bySwitchSeq[MAX_WINDOW];//切换顺序,如果lSwitchSeq[i]为 0xff表示不用
    }NET_DVR_PREVIEWCFG, *LPNET_DVR_PREVIEWCFG;
    
    //DVR视频输出
    typedef struct 
    {
        WORD wResolution;							/* 分辨率 */
        WORD wFreq;									/* 刷新频率 */
        DWORD dwBrightness;							/* 亮度 */
    }NET_DVR_VGAPARA;
    
    /*
     * MATRIX输出参数结构
     */
    typedef struct
    {		
        WORD	wOrder[MAX_ANALOG_CHANNUM];		/* 预览顺序, 0xff表示相应的窗口不预览 */
        WORD	wSwitchTime;				/* 预览切换时间 */
        BYTE	res[14];
    }NET_DVR_MATRIXPARA_V30, *LPNET_DVR_MATRIXPARA_V30;
    
    typedef struct 
    {
        WORD wDisplayLogo;						/* 显示视频通道号 */
        WORD wDisplayOsd;						/* 显示时间 */
    }NET_DVR_MATRIXPARA;
    
    typedef struct 
    {
        BYTE byVideoFormat;						/* 输出制式,0-PAL,1-NTSC */
        BYTE byMenuAlphaValue;					/* 菜单与背景图象对比度 */
        WORD wScreenSaveTime;					/* 屏幕保护时间 0-从不,1-1分钟,2-2分钟,3-5分钟,4-10分钟,5-20分钟,6-30分钟 */
        WORD wVOffset;							/* 视频输出偏移 */
        WORD wBrightness;						/* 视频输出亮度 */
        BYTE byStartMode;						/* 启动后视频输出模式(0:菜单,1:预览)*/
        BYTE byEnableScaler;                    /* 是否启动缩放 (0-不启动, 1-启动)*/
    }NET_DVR_VOOUT;
    
    //DVR视频输出(9000扩展)
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_VOOUT struVOOut[MAX_VIDEOOUT_V30];
        NET_DVR_VGAPARA struVGAPara[MAX_VGA_V30];	/* VGA参数 */
        NET_DVR_MATRIXPARA_V30 struMatrixPara[MAX_MATRIXOUT];		/* MATRIX参数 */
        BYTE byRes[16];
    }NET_DVR_VIDEOOUT_V30, *LPNET_DVR_VIDEOOUT_V30;
    
    //DVR视频输出
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_VOOUT struVOOut[MAX_VIDEOOUT];
        NET_DVR_VGAPARA struVGAPara[MAX_VGA];	/* VGA参数 */
        NET_DVR_MATRIXPARA struMatrixPara;		/* MATRIX参数 */
    }NET_DVR_VIDEOOUT, *LPNET_DVR_VIDEOOUT;
    
    //单用户参数(子结构)(9000扩展)
    typedef struct
    {
        BYTE sUserName[NAME_LEN];		/* 用户名 */
        BYTE sPassword[PASSWD_LEN];		/* 密码 */
        BYTE byLocalRight[MAX_RIGHT];	/* 本地权限 */
        /*数组0: 本地控制云台*/
        /*数组1: 本地手动录象*/
        /*数组2: 本地回放*/
        /*数组3: 本地设置参数*/
        /*数组4: 本地查看状态、日志*/
        /*数组5: 本地高级操作(升级，格式化，重启，关机)*/
        /*数组6: 本地查看参数 */
        /*数组7: 本地管理模拟和IP camera */
        /*数组8: 本地备份 */
        /*数组9: 本地关机/重启 */    
        BYTE byRemoteRight[MAX_RIGHT];/* 远程权限 */	
        /*数组0: 远程控制云台*/
        /*数组1: 远程手动录象*/
        /*数组2: 远程回放 */
        /*数组3: 远程设置参数*/
        /*数组4: 远程查看状态、日志*/
        /*数组5: 远程高级操作(升级，格式化，重启，关机)*/
        /*数组6: 远程发起语音对讲*/
        /*数组7: 远程预览*/
        /*数组8: 远程请求报警上传、报警输出*/
        /*数组9: 远程控制，本地输出*/
        /*数组10: 远程控制串口*/	
        /*数组11: 远程查看参数 */
        /*数组12: 远程管理模拟和IP camera */
        /*数组13: 远程关机/重启 */
        BYTE byNetPreviewRight[MAX_CHANNUM_V30];		/* 远程可以预览的通道 0-有权限，1-无权限*/
        BYTE byLocalPlaybackRight[MAX_CHANNUM_V30];	/* 本地可以回放的通道 0-有权限，1-无权限*/
        BYTE byNetPlaybackRight[MAX_CHANNUM_V30];	/* 远程可以回放的通道 0-有权限，1-无权限*/
        BYTE byLocalRecordRight[MAX_CHANNUM_V30];		/* 本地可以录像的通道 0-有权限，1-无权限*/
        BYTE byNetRecordRight[MAX_CHANNUM_V30];		/* 远程可以录像的通道 0-有权限，1-无权限*/
        BYTE byLocalPTZRight[MAX_CHANNUM_V30];		/* 本地可以PTZ的通道 0-有权限，1-无权限*/
        BYTE byNetPTZRight[MAX_CHANNUM_V30];			/* 远程可以PTZ的通道 0-有权限，1-无权限*/
        BYTE byLocalBackupRight[MAX_CHANNUM_V30];		/* 本地备份权限通道 0-有权限，1-无权限*/
        NET_DVR_IPADDR struUserIP;		/* 用户IP地址(为0时表示允许任何地址) */
        BYTE byMACAddr[MACADDR_LEN];	/* 物理地址 */
        BYTE byPriority;				/* 优先级，0xff-无，0--低，1--中，2--高 */
        /*
         无……表示不支持优先级的设置
         低……默认权限:包括本地和远程回放,本地和远程查看日志和状态,本地和远程关机/重启
         中……包括本地和远程控制云台,本地和远程手动录像,本地和远程回放,语音对讲和远程预览
         本地备份,本地/远程关机/重启
         高……管理员
         */
        BYTE byRes[17];	
    }NET_DVR_USER_INFO_V30, *LPNET_DVR_USER_INFO_V30;
    
    //单用户参数(SDK_V15扩展)(子结构)
    typedef struct 
    {
        BYTE sUserName[NAME_LEN];		/* 用户名 */
        BYTE sPassword[PASSWD_LEN];		/* 密码 */
        DWORD dwLocalRight[MAX_RIGHT];	/* 权限 */
        /*数组0: 本地控制云台*/
        /*数组1: 本地手动录象*/
        /*数组2: 本地回放*/
        /*数组3: 本地设置参数*/
        /*数组4: 本地查看状态、日志*/
        /*数组5: 本地高级操作(升级，格式化，重启，关机)*/
        DWORD dwLocalPlaybackRight;		/* 本地可以回放的通道 bit0 -- channel 1*/
        DWORD dwRemoteRight[MAX_RIGHT];	/* 权限 */
        /*数组0: 远程控制云台*/
        /*数组1: 远程手动录象*/
        /*数组2: 远程回放 */
        /*数组3: 远程设置参数*/
        /*数组4: 远程查看状态、日志*/
        /*数组5: 远程高级操作(升级，格式化，重启，关机)*/
        /*数组6: 远程发起语音对讲*/
        /*数组7: 远程预览*/
        /*数组8: 远程请求报警上传、报警输出*/
        /*数组9: 远程控制，本地输出*/
        /*数组10: 远程控制串口*/
        DWORD dwNetPreviewRight;		/* 远程可以预览的通道 bit0 -- channel 1*/
        DWORD dwNetPlaybackRight;		/* 远程可以回放的通道 bit0 -- channel 1*/
        char sUserIP[16];				/* 用户IP地址(为0时表示允许任何地址) */
        BYTE byMACAddr[MACADDR_LEN];	/* 物理地址 */
    }NET_DVR_USER_INFO_EX, *LPNET_DVR_USER_INFO_EX;
    
    //单用户参数(子结构)
    typedef struct 
    {
        BYTE sUserName[NAME_LEN];		/* 用户名 */
        BYTE sPassword[PASSWD_LEN];		/* 密码 */
        DWORD dwLocalRight[MAX_RIGHT];	/* 权限 */
        /*数组0: 本地控制云台*/
        /*数组1: 本地手动录象*/
        /*数组2: 本地回放*/
        /*数组3: 本地设置参数*/
        /*数组4: 本地查看状态、日志*/
        /*数组5: 本地高级操作(升级，格式化，重启，关机)*/
        DWORD dwRemoteRight[MAX_RIGHT];	/* 权限 */
        /*数组0: 远程控制云台*/
        /*数组1: 远程手动录象*/
        /*数组2: 远程回放 */
        /*数组3: 远程设置参数*/
        /*数组4: 远程查看状态、日志*/
        /*数组5: 远程高级操作(升级，格式化，重启，关机)*/
        /*数组6: 远程发起语音对讲*/
        /*数组7: 远程预览*/
        /*数组8: 远程请求报警上传、报警输出*/
        /*数组9: 远程控制，本地输出*/
        /*数组10: 远程控制串口*/
        char sUserIP[16];				/* 用户IP地址(为0时表示允许任何地址) */
        BYTE byMACAddr[MACADDR_LEN];	/* 物理地址 */
    }NET_DVR_USER_INFO, *LPNET_DVR_USER_INFO;
    
    
    //DVR用户参数(9000扩展)
    typedef struct
    {
        DWORD dwSize;
        NET_DVR_USER_INFO_V30 struUser[MAX_USERNUM_V30];
    }NET_DVR_USER_V30, *LPNET_DVR_USER_V30;
    
    //DVR用户参数(SDK_V15扩展)
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_USER_INFO_EX struUser[MAX_USERNUM];
    }NET_DVR_USER_EX, *LPNET_DVR_USER_EX;
    
    //DVR用户参数
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_USER_INFO struUser[MAX_USERNUM];
    }NET_DVR_USER, *LPNET_DVR_USER;
    
    //DVR异常参数(9000扩展)
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_HANDLEEXCEPTION_V30 struExceptionHandleType[MAX_EXCEPTIONNUM_V30];
        /*数组0-盘满,1- 硬盘出错,2-网线断,3-局域网内IP 地址冲突, 4-非法访问, 9-输入/输出视频制式不匹配, 10-视频信号异常*/
    }NET_DVR_EXCEPTION_V30, *LPNET_DVR_EXCEPTION_V30;
    
    //DVR异常参数
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_HANDLEEXCEPTION struExceptionHandleType[MAX_EXCEPTIONNUM];
        /*数组0-盘满,1- 硬盘出错,2-网线断,3-局域网内IP 地址冲突,4-非法访问, 5-视频信号异常, 6-输入/输出视频制式不匹配*/
    }NET_DVR_EXCEPTION, *LPNET_DVR_EXCEPTION;
    
    //通道状态(9000扩展)
    typedef struct 
    {
        BYTE byRecordStatic; //通道是否在录像,0-不录像,1-录像
        BYTE bySignalStatic; //连接的信号状态,0-正常,1-信号丢失
        BYTE byHardwareStatic;//通道硬件状态,0-正常,1-异常,例如DSP死掉
        BYTE byRes1;		//保留
        DWORD dwBitRate;//实际码率
        DWORD dwLinkNum;//客户端连接的个数
        NET_DVR_IPADDR struClientIP[MAX_LINK];//客户端的IP地址
        DWORD dwIPLinkNum;//如果该通道为IP接入，那么表示IP接入当前的连接数
        BYTE byRes[12];
    }NET_DVR_CHANNELSTATE_V30, *LPNET_DVR_CHANNELSTATE_V30;
    
    //通道状态
    typedef struct 
    {
        BYTE byRecordStatic; //通道是否在录像,0-不录像,1-录像
        BYTE bySignalStatic; //连接的信号状态,0-正常,1-信号丢失
        BYTE byHardwareStatic;//通道硬件状态,0-正常,1-异常,例如DSP死掉
        char reservedData;		//保留
        DWORD dwBitRate;//实际码率
        DWORD dwLinkNum;//客户端连接的个数
        DWORD dwClientIP[MAX_LINK];//客户端的IP地址
    }NET_DVR_CHANNELSTATE, *LPNET_DVR_CHANNELSTATE;
    
    //硬盘状态
    typedef struct 
    {
        DWORD dwVolume;//硬盘的容量
        DWORD dwFreeSpace;//硬盘的剩余空间
        DWORD dwHardDiskStatic; //硬盘的状态,0-活动,1-休眠,2-不正常
    }NET_DVR_DISKSTATE, *LPNET_DVR_DISKSTATE;
    
    //DVR工作状态(9000扩展)
    typedef struct 
    {
        DWORD dwDeviceStatic; 	//设备的状态,0-正常,1-CPU占用率太高,超过85%,2-硬件错误,例如串口死掉
        NET_DVR_DISKSTATE  struHardDiskStatic[MAX_DISKNUM_V30];
        NET_DVR_CHANNELSTATE_V30 struChanStatic[MAX_CHANNUM_V30];//通道的状态
        BYTE  byAlarmInStatic[MAX_ALARMIN_V30]; //报警端口的状态,0-没有报警,1-有报警
        BYTE  byAlarmOutStatic[MAX_ALARMOUT_V30]; //报警输出端口的状态,0-没有输出,1-有报警输出
        DWORD  dwLocalDisplay;//本地显示状态,0-正常,1-不正常
        BYTE  byAudioChanStatus[MAX_AUDIO_V30];//表示语音通道的状态 0-未使用，1-使用中, 0xff无效
        BYTE  byRes[10];
    }NET_DVR_WORKSTATE_V30, *LPNET_DVR_WORKSTATE_V30;
    
    //DVR工作状态
    typedef struct 
    {
        DWORD dwDeviceStatic; 	//设备的状态,0-正常,1-CPU占用率太高,超过85%,2-硬件错误,例如串口死掉
        NET_DVR_DISKSTATE  struHardDiskStatic[MAX_DISKNUM];
        NET_DVR_CHANNELSTATE struChanStatic[MAX_CHANNUM];//通道的状态
        BYTE  byAlarmInStatic[MAX_ALARMIN]; //报警端口的状态,0-没有报警,1-有报警
        BYTE  byAlarmOutStatic[MAX_ALARMOUT]; //报警输出端口的状态,0-没有输出,1-有报警输出
        DWORD  dwLocalDisplay;//本地显示状态,0-正常,1-不正常
    }NET_DVR_WORKSTATE, *LPNET_DVR_WORKSTATE;
    
    /************************DVR日志 begin***************************/
    
    /* 报警 */
    //主类型
#define MAJOR_ALARM					0x1
    //次类型
#define MINOR_ALARM_IN					0x1  /* 报警输入 */
#define MINOR_ALARM_OUT					0x2  /* 报警输出 */
#define MINOR_MOTDET_START				0x3  /* 移动侦测报警开始 */
#define MINOR_MOTDET_STOP				0x4  /* 移动侦测报警结束 */
#define MINOR_HIDE_ALARM_START			0x5  /* 遮挡报警开始 */
#define MINOR_HIDE_ALARM_STOP			0x6  /* 遮挡报警结束 */
    
    /* 异常 */
    //主类型
#define MAJOR_EXCEPTION				0x2
    //次类型
#define MINOR_VI_LOST					0x21 /* 视频信号丢失 */
#define MINOR_ILLEGAL_ACCESS			0x22 /* 非法访问 */
#define MINOR_HD_FULL					0x23 /* 硬盘满 */
#define MINOR_HD_ERROR					0x24 /* 硬盘错误 */
#define MINOR_DCD_LOST					0x25 /* MODEM 掉线(保留不使用) */
#define MINOR_IP_CONFLICT				0x26 /* IP地址冲突 */
#define MINOR_NET_BROKEN				0x27 /* 网络断开*/
#define MINOR_REC_ERROR                 0x28    /* 录像出错 */
#define MINOR_IPC_NO_LINK               0x29    /* IPC连接异常 */
#define MINOR_VI_EXCEPTION              0x2a    /* 视频输入异常(只针对模拟通道) */
    
    
    /* 操作 */
    //主类型
#define MAJOR_OPERATION				0x3
    //次类型
#define MINOR_START_DVR					0x41 /* 开机 */
#define MINOR_STOP_DVR					0x42 /* 关机 */
#define MINOR_STOP_ABNORMAL				0x43 /* 异常关机 */
#define MINOR_REBOOT_DVR                0x44    /*本地重启设备*/
    
#define MINOR_LOCAL_LOGIN				0x50 /* 本地登陆 */
#define MINOR_LOCAL_LOGOUT				0x51 /* 本地注销登陆 */
#define MINOR_LOCAL_CFG_PARM			0x52 /* 本地配置参数 */
#define MINOR_LOCAL_PLAYBYFILE			0x53 /* 本地按文件回放或下载 */
#define MINOR_LOCAL_PLAYBYTIME			0x54 /* 本地按时间回放或下载*/
#define MINOR_LOCAL_START_REC			0x55 /* 本地开始录像 */
#define MINOR_LOCAL_STOP_REC			0x56 /* 本地停止录像 */
#define MINOR_LOCAL_PTZCTRL				0x57 /* 本地云台控制 */
#define MINOR_LOCAL_PREVIEW				0x58 /* 本地预览 (保留不使用)*/
#define MINOR_LOCAL_MODIFY_TIME         0x59 /* 本地修改时间(保留不使用) */
#define MINOR_LOCAL_UPGRADE				0x5a /* 本地升级 */
#define MINOR_LOCAL_RECFILE_OUTPUT      0x5b    /* 本地备份录象文件 */
#define MINOR_LOCAL_FORMAT_HDD          0x5c    /* 本地初始化硬盘 */
#define MINOR_LOCAL_CFGFILE_OUTPUT      0x5d    /* 导出本地配置文件 */
#define MINOR_LOCAL_CFGFILE_INPUT       0x5e    /* 导入本地配置文件 */
#define MINOR_LOCAL_COPYFILE            0x5f    /* 本地备份文件 */
#define MINOR_LOCAL_LOCKFILE            0x60    /* 本地锁定录像文件 */
#define MINOR_LOCAL_UNLOCKFILE          0x61    /* 本地解锁录像文件 */
#define MINOR_LOCAL_DVR_ALARM           0x62    /* 本地手动清除和触发报警*/
#define MINOR_IPC_ADD                   0x63    /* 本地添加IPC */
#define MINOR_IPC_DEL                   0x64    /* 本地删除IPC */
#define MINOR_IPC_SET                   0x65    /* 本地设置IPC */
#define MINOR_LOCAL_START_BACKUP		0x66	/* 本地开始备份 */
#define MINOR_LOCAL_STOP_BACKUP			0x67	/* 本地停止备份*/
#define MINOR_LOCAL_COPYFILE_START_TIME 0x68	/* 本地备份开始时间*/
#define MINOR_LOCAL_COPYFILE_END_TIME	0x69	/* 本地备份结束时间*/
    
    
#define MINOR_REMOTE_LOGIN				0x70 /* 远程登录 */
#define MINOR_REMOTE_LOGOUT				0x71 /* 远程注销登陆 */
#define MINOR_REMOTE_START_REC			0x72 /* 远程开始录像 */
#define MINOR_REMOTE_STOP_REC			0x73 /* 远程停止录像 */
#define MINOR_START_TRANS_CHAN			0x74 /* 开始透明传输 */
#define MINOR_STOP_TRANS_CHAN			0x75 /* 停止透明传输 */
#define MINOR_REMOTE_GET_PARM			0x76 /* 远程获取参数 */
#define MINOR_REMOTE_CFG_PARM			0x77 /* 远程配置参数 */
#define MINOR_REMOTE_GET_STATUS         0x78 /* 远程获取状态 */
#define MINOR_REMOTE_ARM				0x79 /* 远程布防 */
#define MINOR_REMOTE_DISARM				0x7a /* 远程撤防 */
#define MINOR_REMOTE_REBOOT				0x7b /* 远程重启 */
#define MINOR_START_VT					0x7c /* 开始语音对讲 */
#define MINOR_STOP_VT					0x7d /* 停止语音对讲 */
#define MINOR_REMOTE_UPGRADE			0x7e /* 远程升级 */
#define MINOR_REMOTE_PLAYBYFILE         0x7f /* 远程按文件回放 */
#define MINOR_REMOTE_PLAYBYTIME         0x80 /* 远程按时间回放 */
#define MINOR_REMOTE_PTZCTRL			0x81 /* 远程云台控制 */
#define MINOR_REMOTE_FORMAT_HDD         0x82    /* 远程格式化硬盘 */
#define MINOR_REMOTE_STOP               0x83    /* 远程关机 */
#define MINOR_REMOTE_LOCKFILE			0x84 /* 远程锁定文件 */
#define MINOR_REMOTE_UNLOCKFILE         0x85 /* 远程解锁文件 */
#define MINOR_REMOTE_CFGFILE_OUTPUT     0x86    /* 远程导出配置文件 */
#define MINOR_REMOTE_CFGFILE_INTPUT     0x87    /* 远程导入配置文件 */
#define MINOR_REMOTE_RECFILE_OUTPUT     0x88    /* 远程导出录象文件 */
#define MINOR_REMOTE_DVR_ALARM          0x89    /* 远程手动清除和触发报警*/
#define MINOR_REMOTE_IPC_ADD			0x8a  /* 远程添加IPC */
#define MINOR_REMOTE_IPC_DEL			0x8b /* 远程删除IPC */
#define MINOR_REMOTE_IPC_SET			0x8c  /* 远程设置IPC */
    
    
    /*日志附加信息*/
    //主类型
#define MAJOR_INFORMATION			0x4     /*附加信息*/
    //次类型
#define MINOR_HDD_INFO                  0xa1 /*硬盘信息*/
#define MINOR_SMART_INFO                0xa2    /*SMART信息*/
#define MINOR_REC_START                 0xa3    /*开始录像*/
#define MINOR_REC_STOP                  0xa4 /*停止录像*/
#define MINOR_REC_OVERDUE				0xa5 /*过期录像删除*/
    
    //当日志的主类型为MAJOR_OPERATION=03，次类型为MINOR_LOCAL_CFG_PARM=0x52或者MINOR_REMOTE_GET_PARM=0x76或者MINOR_REMOTE_CFG_PARM=0x77时，dwParaType:参数类型有效，其含义如下：
#define PARA_VIDEOOUT 0x1
#define PARA_IMAGE  0x2
#define PARA_ENCODE  0x4
#define PARA_NETWORK 0x8
#define PARA_ALARM  0x10
#define PARA_EXCEPTION 0x20
#define PARA_DECODER 0x40    /*解码器*/
#define PARA_RS232  0x80
#define PARA_PREVIEW 0x100
#define PARA_SECURITY 0x200
#define PARA_DATETIME 0x400
#define PARA_FRAMETYPE 0x800    /*帧格式*/
    
    //日志信息(9000扩展)
    typedef struct 
    {
        NET_DVR_TIME strLogTime;
        DWORD	dwMajorType;	//主类型 1-报警; 2-异常; 3-操作; 0xff-全部
        DWORD	dwMinorType;//次类型 0-全部;
        BYTE	sPanelUser[MAX_NAMELEN]; //操作面板的用户名
        BYTE	sNetUser[MAX_NAMELEN];//网络操作的用户名
        NET_DVR_IPADDR	struRemoteHostAddr;//远程主机地址
        DWORD	dwParaType;//参数类型
        DWORD	dwChannel;//通道号
        DWORD	dwDiskNumber;//硬盘号
        DWORD	dwAlarmInPort;//报警输入端口
        DWORD	dwAlarmOutPort;//报警输出端口
        DWORD   dwInfoLen;
        char    sInfo[LOG_INFO_LEN];
    }NET_DVR_LOG_V30, *LPNET_DVR_LOG_V30;
    
    //日志信息
    typedef struct 
    {
        NET_DVR_TIME strLogTime;
        DWORD	dwMajorType;	//主类型 1-报警; 2-异常; 3-操作; 0xff-全部
        DWORD	dwMinorType;//次类型 0-全部;
        BYTE	sPanelUser[MAX_NAMELEN]; //操作面板的用户名
        BYTE	sNetUser[MAX_NAMELEN];//网络操作的用户名
        char	sRemoteHostAddr[16];//远程主机地址
        DWORD	dwParaType;//参数类型
        DWORD	dwChannel;//通道号
        DWORD	dwDiskNumber;//硬盘号
        DWORD	dwAlarmInPort;//报警输入端口
        DWORD	dwAlarmOutPort;//报警输出端口
    }NET_DVR_LOG, *LPNET_DVR_LOG;
    
    /************************DVR日志 end***************************/
    
    
    //报警输出状态(9000扩展)
    typedef struct 
    {
        BYTE Output[MAX_ALARMOUT_V30];
    }NET_DVR_ALARMOUTSTATUS_V30, *LPNET_DVR_ALARMOUTSTATUS_V30;
    
    //报警输出状态
    typedef struct 
    {
        BYTE Output[MAX_ALARMOUT];
    }NET_DVR_ALARMOUTSTATUS, *LPNET_DVR_ALARMOUTSTATUS;
    
    //交易信息
    typedef struct 
    {
        USHORT m_Year;
        USHORT m_Month;
        USHORT m_Day;
        USHORT m_Hour;
        USHORT m_Minute;
        USHORT m_Second;
        BYTE DeviceName[24];	//设备名称
        DWORD dwChannelNumer;	//通道号
        BYTE CardNumber[32];	//卡号
        char cTradeType[12];	//交易类型
        DWORD dwCash;			//交易金额
    }NET_DVR_TRADEINFO, *LPNET_DVR_TRADEINFO;
    
    
    //ATM专用
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
    
    
    /*帧格式*/
    typedef struct 
    {
        BYTE code[12];		/* 代码 */
    }NET_DVR_FRAMETYPECODE;
    
    //ATM参数(9000扩展)
    typedef struct
    {
        DWORD	dwSize;
        NET_DVR_IPADDR	struATMIP;               	/* ATM IP地址 */
        DWORD	dwATMType;							/* ATM类型 */
        DWORD	dwInputMode;						/* 输入方式	0-网络侦听 1-网络接收 2-串口直接输入 3-串口ATM命令输入*/
        DWORD	dwFrameSignBeginPos;				/* 报文标志位的起始位置*/
        DWORD	dwFrameSignLength;					/* 报文标志位的长度 */
        BYTE	byFrameSignContent[12];				/* 报文标志位的内容 */
        DWORD	dwCardLengthInfoBeginPos;			/* 卡号长度信息的起始位置 */
        DWORD	dwCardLengthInfoLength;				/* 卡号长度信息的长度 */
        DWORD	dwCardNumberInfoBeginPos;			/* 卡号信息的起始位置 */
        DWORD	dwCardNumberInfoLength;				/* 卡号信息的长度 */
        DWORD	dwBusinessTypeBeginPos;				/* 交易类型的起始位置 */
        DWORD	dwBusinessTypeLength;				/* 交易类型的长度 */
        NET_DVR_FRAMETYPECODE	frameTypeCode[10];	/* 类型 */
        WORD	wATMPort;							/* 卡号捕捉端口号(网络协议方式) */
        WORD	wProtocolType;						/* 网络协议类型 */
        BYTE    byRes[24];
    }NET_DVR_FRAMEFORMAT_V30, *LPNET_DVR_FRAMEFORMAT_V30;
    
    //ATM参数
    typedef struct 
    {
        DWORD dwSize;
        char sATMIP[16];						/* ATM IP地址 */
        DWORD dwATMType;						/* ATM类型 */
        DWORD dwInputMode;						/* 输入方式	0-网络侦听 1-网络接收 2-串口直接输入 3-串口ATM命令输入*/
        DWORD dwFrameSignBeginPos;              /* 报文标志位的起始位置*/
        DWORD dwFrameSignLength;				/* 报文标志位的长度 */
        BYTE  byFrameSignContent[12];			/* 报文标志位的内容 */
        DWORD dwCardLengthInfoBeginPos;			/* 卡号长度信息的起始位置 */
        DWORD dwCardLengthInfoLength;			/* 卡号长度信息的长度 */
        DWORD dwCardNumberInfoBeginPos;			/* 卡号信息的起始位置 */
        DWORD dwCardNumberInfoLength;			/* 卡号信息的长度 */
        DWORD dwBusinessTypeBeginPos;           /* 交易类型的起始位置 */
        DWORD dwBusinessTypeLength;				/* 交易类型的长度 */
        NET_DVR_FRAMETYPECODE frameTypeCode[10];/* 类型 */
    }NET_DVR_FRAMEFORMAT, *LPNET_DVR_FRAMEFORMAT;
    
    
    /*****************************DS-6001D/F(begin)***************************/
    //DS-6001D Decoder
    typedef struct 
    {
        BYTE byEncoderIP[16];		//解码设备连接的服务器IP
        BYTE byEncoderUser[16];		//解码设备连接的服务器的用户名
        BYTE byEncoderPasswd[16];	//解码设备连接的服务器的密码
        BYTE bySendMode;			//解码设备连接服务器的连接模式
        BYTE byEncoderChannel;		//解码设备连接的服务器的通道号
        WORD wEncoderPort;			//解码设备连接的服务器的端口号
        BYTE reservedData[4];		//保留
    }NET_DVR_DECODERINFO, *LPNET_DVR_DECODERINFO;
    
    typedef struct 
    {
        BYTE byEncoderIP[16];		//解码设备连接的服务器IP
        BYTE byEncoderUser[16];		//解码设备连接的服务器的用户名
        BYTE byEncoderPasswd[16];	//解码设备连接的服务器的密码
        BYTE byEncoderChannel;		//解码设备连接的服务器的通道号
        BYTE bySendMode;			//解码设备连接的服务器的连接模式
        WORD wEncoderPort;			//解码设备连接的服务器的端口号
        DWORD dwConnectState;		//解码设备连接服务器的状态
        BYTE reservedData[4];		//保留
    }NET_DVR_DECODERSTATE, *LPNET_DVR_DECODERSTATE;
    
    /*解码设备控制码定义*/
#define NET_DEC_STARTDEC		1
#define NET_DEC_STOPDEC			2
#define NET_DEC_STOPCYCLE		3
#define NET_DEC_CONTINUECYCLE	4
    /*连接的通道配置*/
    typedef struct 
    {
        char sDVRIP[16];				/* DVR IP地址 */
        WORD wDVRPort;			 		/* 端口号 */
        BYTE sUserName[NAME_LEN];		/* 用户名 */
        BYTE sPassword[PASSWD_LEN];		/* 密码 */
        BYTE byChannel;					/* 通道号 */
        BYTE byLinkMode;				/* 连接模式 */
        BYTE byLinkType;				/* 连接类型 0－主码流 1－子码流 */
    }NET_DVR_DECCHANINFO, *LPNET_DVR_DECCHANINFO;
    
    /*每个解码通道的配置*/
    typedef struct 
    {
        BYTE	byPoolChans;			/*每路解码通道上的循环通道数量, 最多4通道 0表示没有解码*/
        NET_DVR_DECCHANINFO struchanConInfo[MAX_DECPOOLNUM];
        BYTE	byEnablePoll;			/*是否轮巡 0-否 1-是*/
        BYTE	byPoolTime;				/*轮巡时间 0-保留 1-10秒 2-15秒 3-20秒 4-30秒 5-45秒 6-1分钟 7-2分钟 8-5分钟 */
    }NET_DVR_DECINFO, *LPNET_DVR_DECINFO;
    
    /*整个设备解码配置*/
    typedef struct 
    {
        DWORD	dwSize;
        DWORD	dwDecChanNum; 		/*解码通道的数量*/
        NET_DVR_DECINFO struDecInfo[MAX_DECNUM];
    }NET_DVR_DECCFG, *LPNET_DVR_DECCFG;
    
    //2005-08-01
    /* 解码设备透明通道设置 */
    typedef struct 
    {
        DWORD dwEnableTransPort;	/* 是否启动透明通道 0－不启用 1－启用*/
        char sDecoderIP[16];		/* DVR IP地址 */
        WORD wDecoderPort;			/* 端口号 */
        WORD wDVRTransPort;			/* 配置前端DVR是从485/232输出，1表示232串口,2表示485串口 */
        char cReserve[4];
    }NET_DVR_PORTINFO, *LPNET_DVR_PORTINFO;
    
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_PORTINFO struTransPortInfo[MAX_TRANSPARENTNUM]; /* 数组0表示232 数组1表示485 */
    }NET_DVR_PORTCFG, *LPNET_DVR_PORTCFG;
    
    /* 控制网络文件回放 */
    typedef struct 
    {
        DWORD dwSize;
        char sDecoderIP[16];		/* DVR IP地址 */
        WORD wDecoderPort;			/* 端口号 */
        WORD wLoadMode;				/* 回放下载模式 1－按名字 2－按时间 */
        union
        {
            BYTE byFile[100];		/* 回放的文件名 */
            struct
            {
                DWORD dwChannel;
                BYTE sUserName[NAME_LEN];	/*请求视频用户名*/
                BYTE sPassword[PASSWD_LEN];	/* 密码 */
                NET_DVR_TIME struStartTime;	/* 按时间回放的开始时间 */
                NET_DVR_TIME struStopTime;	/* 按时间回放的结束时间 */
            }bytime;
        }mode_size;
    }NET_DVR_PLAYREMOTEFILE, *LPNET_DVR_PLAYREMOTEFILE;
    
    /*当前设备解码连接状态*/
    typedef struct 
    {
        DWORD dwWorkType;		/*工作方式：1：轮巡、2：动态连接解码、3：文件回放下载 4：按时间回放下载*/
        char sDVRIP[16];		/*连接的设备ip*/
        WORD wDVRPort;			/*连接端口号*/
        BYTE byChannel;			/* 通道号 */
        BYTE byLinkMode;		/* 连接模式 */
        DWORD	dwLinkType;		/*连接类型 0－主码流 1－子码流*/
        union
        {
            struct
            {
                BYTE sUserName[NAME_LEN];	/*请求视频用户名*/
                BYTE sPassword[PASSWD_LEN];	/* 密码 */
                char cReserve[52];
            }userInfo;
            struct
            {
                BYTE   fileName[100];
            }fileInfo;
            struct
            {
                DWORD	dwChannel;
                BYTE	sUserName[NAME_LEN];	/*请求视频用户名*/
                BYTE	sPassword[PASSWD_LEN];	/* 密码 */
                NET_DVR_TIME struStartTime;		/* 按时间回放的开始时间 */
                NET_DVR_TIME struStopTime;		/* 按时间回放的结束时间 */
            }timeInfo;
        }objectInfo;
    }NET_DVR_DECCHANSTATUS, *LPNET_DVR_DECCHANSTATUS;
    
    typedef struct 
    {
        DWORD   dwSize;
        NET_DVR_DECCHANSTATUS struDecState[MAX_DECNUM];
    }NET_DVR_DECSTATUS, *LPNET_DVR_DECSTATUS;
    /*****************************DS-6001D/F(end)***************************/
    
    //单字符参数(子结构)
    typedef struct 
    {
        WORD wShowString;				// 预览的图象上是否显示字符,0-不显示,1-显示 区域大小704*576,单个字符的大小为32*32
        WORD wStringSize;				/* 该行字符的长度，不能大于44个字符 */
        WORD wShowStringTopLeftX;		/* 字符显示位置的x坐标 */
        WORD wShowStringTopLeftY;		/* 字符名称显示位置的y坐标 */
        char sString[44];				/* 要显示的字符内容 */
    }NET_DVR_SHOWSTRINGINFO, *LPNET_DVR_SHOWSTRINGINFO;
    
    //叠加字符(9000扩展)
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_SHOWSTRINGINFO struStringInfo[MAX_STRINGNUM_V30];				/* 要显示的字符内容 */
    }NET_DVR_SHOWSTRING_V30, *LPNET_DVR_SHOWSTRING_V30;
    
    //叠加字符扩展(8条字符)
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_SHOWSTRINGINFO struStringInfo[MAX_STRINGNUM_EX];				/* 要显示的字符内容 */
    }NET_DVR_SHOWSTRING_EX, *LPNET_DVR_SHOWSTRING_EX;
    
    //叠加字符
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_SHOWSTRINGINFO struStringInfo[MAX_STRINGNUM];				/* 要显示的字符内容 */
    }NET_DVR_SHOWSTRING, *LPNET_DVR_SHOWSTRING;
    
    /****************************DS9000新增结构(begin)******************************/
    
    /*
     EMAIL参数结构
     */
    typedef struct
    {		
        DWORD		dwSize;
        BYTE		sAccount[NAME_LEN];				/* 账号*/ 
        BYTE		sPassword[MAX_EMAIL_PWD_LEN];			/*密码 */
        struct
        {
            BYTE	sName[NAME_LEN];				/* 发件人姓名 */
            BYTE	sAddress[MAX_EMAIL_ADDR_LEN];		/* 发件人地址 */
        }struSender;
        BYTE		sSmtpServer[MAX_EMAIL_ADDR_LEN];	/* smtp服务器 */
        BYTE		sPop3Server[MAX_EMAIL_ADDR_LEN];	/* pop3服务器 */
        struct
        {
            BYTE	sName[NAME_LEN];				/* 收件人姓名 */
            BYTE	sAddress[MAX_EMAIL_ADDR_LEN];		/* 收件人地址 */
        }struReceiver[3];							/* 最多可以设置3个收件人 */
        BYTE		byAttachment;					/* 是否带附件 */
        BYTE		bySmtpServerVerify;				/* 发送服务器要求身份验证 */
        BYTE        byMailInterval;                 /* mail interval */
        BYTE        res[77];
    } NET_DVR_EMAILCFG_V30, *LPNET_DVR_EMAILCFG_V30;
    
    /*
     DVR实现巡航数据结构
     */
    typedef struct
    {	
        DWORD 	dwSize;
        BYTE	byPresetNo[CRUISE_MAX_PRESET_NUMS];		/* 预置点号 */
        BYTE 	byCruiseSpeed[CRUISE_MAX_PRESET_NUMS];	/* 巡航速度 */
        WORD	wDwellTime[CRUISE_MAX_PRESET_NUMS];		/* 停留时间 */
        BYTE	byEnableThisCruise;						/* 是否启用 */
        BYTE	res[15];
    }NET_DVR_CRUISE_PARA, *LPNET_DVR_CRUISE_PARA; 
    /****************************DS9000新增结构(end)******************************/
    
    
    //时间点
    typedef struct 
    {
        DWORD dwMonth;		//月 0-11表示1-12个月
        DWORD dwWeekNo;		//第几周 0－第1周 1－第2周 2－第3周 3－第4周 4－最后一周
        DWORD dwWeekDate;	//星期几 0－星期日 1－星期一 2－星期二 3－星期三 4－星期四 5－星期五 6－星期六
        DWORD dwHour;		//小时	开始时间0－23 结束时间1－23
        DWORD dwMin;		//分	0－59
    }NET_DVR_TIMEPOINT;
    
    //夏令时参数
    typedef struct 
    {
        DWORD dwSize;
        BYTE byRes1[16];			//保留
        DWORD dwEnableDST;		//是否启用夏时制 0－不启用 1－启用
        BYTE byDSTBias;	//夏令时偏移值，30min, 60min, 90min, 120min, 以分钟计，传递原始数值
        BYTE byRes2[3];
        NET_DVR_TIMEPOINT struBeginPoint;	//夏时制开始时间
        NET_DVR_TIMEPOINT struEndPoint;	//夏时制停止时间
    }NET_DVR_ZONEANDDST, *LPNET_DVR_ZONEANDDST;
    
    
    
    //图片质量
    typedef struct 
    {
        /*注意：当图像压缩分辨率为VGA时，支持0=CIF, 1=QCIF, 2=D1抓图，
         当分辨率为3=UXGA(1600x1200), 4=SVGA(800x600), 5=HD720p(1280x720),6=VGA,7=XVGA, 8=HD900p
         仅支持当前分辨率的抓图*/
        WORD	wPicSize;				/* 0=CIF, 1=QCIF, 2=D1 3=UXGA(1600x1200), 4=SVGA(800x600), 5=HD720p(1280x720),6=VGA*/
        WORD	wPicQuality;			/* 图片质量系数 0-最好 1-较好 2-一般 */
    }NET_DVR_JPEGPARA, *LPNET_DVR_JPEGPARA;
    
    /* aux video out parameter */
    //辅助输出参数配置
    typedef struct 
    {
        DWORD dwSize;
        DWORD dwAlarmOutChan;                       /* 选择报警弹出大报警通道切换时间：1画面的输出通道: 0:主输出/1:辅1/2:辅2/3:辅3/4:辅4 */
        DWORD dwAlarmChanSwitchTime;                /* :1秒 - 10:10秒 */
        DWORD dwAuxSwitchTime[MAX_AUXOUT];			/* 辅助输出切换时间: 0-不切换,1-5s,2-10s,3-20s,4-30s,5-60s,6-120s,7-300s */
        BYTE  byAuxOrder[MAX_AUXOUT][MAX_WINDOW];	/* 辅助输出预览顺序, 0xff表示相应的窗口不预览 */
    }NET_DVR_AUXOUTCFG, *LPNET_DVR_AUXOUTCFG;
    
    
    //ntp
    typedef struct 
    {
        BYTE sNTPServer[64];   /* Domain Name or IP addr of NTP server */
        WORD wInterval;		 /* adjust time interval(hours) */
        BYTE byEnableNTP;    /* enable NPT client 0-no，1-yes*/
        signed char cTimeDifferenceH; /* 与国际标准时间的 小时偏移-12 ... +13 */
        signed char cTimeDifferenceM;/* 与国际标准时间的 分钟偏移0, 30, 45*/
        BYTE res1;
        WORD wNtpPort;         /* ntp server port 9000新增 设备默认为123*/
        BYTE res2[8];
    }NET_DVR_NTPPARA, *LPNET_DVR_NTPPARA;
    
    //ddns
    typedef struct 
    {
        BYTE sUsername[NAME_LEN];  /* DDNS账号用户名/密码 */
        BYTE sPassword[PASSWD_LEN];
        BYTE sDomainName[64];       /* 域名 */
        BYTE byEnableDDNS;			/*是否应用 0-否，1-是*/
        BYTE res[15];
    }NET_DVR_DDNSPARA, *LPNET_DVR_DDNSPARA;
    
    
    typedef struct
    {
        BYTE byHostIndex;					/* 0-Hikvision DNS 1－Dyndns 2－PeanutHull(花生壳), 3-希网3322*/
        BYTE byEnableDDNS;					/*是否应用DDNS 0-否，1-是*/
        WORD wDDNSPort;						/* DDNS端口号 */
        BYTE sUsername[NAME_LEN];			/* DDNS用户名*/
        BYTE sPassword[PASSWD_LEN];			/* DDNS密码 */
        BYTE sDomainName[MAX_DOMAIN_NAME];	/* 设备配备的域名地址 */
        BYTE sServerName[MAX_DOMAIN_NAME];	/* DDNS 对应的服务器地址，可以是IP地址或域名 */
        BYTE byRes[16];
    }NET_DVR_DDNSPARA_EX, *LPNET_DVR_DDNSPARA_EX;
    
    //9000扩展
    typedef struct
    {
        BYTE byEnableDDNS;
        BYTE byHostIndex;/* 0-Hikvision DNS(保留) 1－Dyndns 2－PeanutHull(花生壳) 3-希网3322 */
        BYTE byRes1[2];
        struct
        {    
            BYTE sUsername[NAME_LEN];			/* DDNS账号用户名*/
            BYTE sPassword[PASSWD_LEN];			/* 密码 */
            BYTE sDomainName[MAX_DOMAIN_NAME];	/* 设备配备的域名地址 */
            BYTE sServerName[MAX_DOMAIN_NAME];	/* DDNS协议对应的服务器地址，可以是IP地址或域名 */
            WORD wDDNSPort;						/* 端口号 */
            BYTE byRes[10];
        } struDDNS[MAX_DDNS_NUMS];
        BYTE byRes2[16];
    }NET_DVR_DDNSPARA_V30, *LPNET_DVR_DDNSPARA_V30;
    
    //email
    typedef struct 
    {
        BYTE sUsername[64];  /* 邮件账号/密码 */
        BYTE sPassword[64];
        BYTE sSmtpServer[64];
        BYTE sPop3Server[64];
        BYTE sMailAddr[64];   /* email */
        BYTE sEventMailAddr1[64];  /* 上传报警/异常等的email */
        BYTE sEventMailAddr2[64];
        BYTE res[16];
    }NET_DVR_EMAILPARA, *LPNET_DVR_EMAILPARA;
    
    //网络参数配置
    typedef struct 
    {
        DWORD  dwSize;
        char  sDNSIp[16];                /* DNS服务器地址 */
        NET_DVR_NTPPARA  struNtpClientParam;      /* NTP参数 */
        NET_DVR_DDNSPARA struDDNSClientParam;     /* DDNS参数 */
        BYTE res[464];			/* 保留 */
    }NET_DVR_NETAPPCFG, *LPNET_DVR_NETAPPCFG;
    
    //nfs结构配置
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
    
    //巡航点配置(HIK IP快球专用)
    typedef struct
    {
        BYTE	PresetNum;	//预置点
        BYTE	Dwell;		//停留时间
        BYTE	Speed;		//速度
        BYTE	Reserve;	//保留
    }NET_DVR_CRUISE_POINT, *LPNET_DVR_CRUISE_POINT;
    
    typedef struct 
    {
        NET_DVR_CRUISE_POINT struCruisePoint[32];			//最大支持32个巡航点
    }NET_DVR_CRUISE_RET, *LPNET_DVR_CRUISE_RET;
    
    /************************************多路解码器(begin)***************************************/
    typedef struct 
    {
        DWORD	dwSize;
        char	sFirstDNSIP[16];
        char	sSecondDNSIP[16];
        char	sRes[32];
    }NET_DVR_NETCFG_OTHER, *LPNET_DVR_NETCFG_OTHER;
    
    typedef struct 
    {
        char 	sDVRIP[16];				/* DVR IP地址 */
        WORD 	wDVRPort;			 	/* 端口号 */
        BYTE 	byChannel;				/* 通道号 */
        BYTE	byTransProtocol;			/* 传输协议类型 0-TCP, 1-UDP */
        BYTE	byTransMode;				/* 传输码流模式 0－主码流 1－子码流*/
        BYTE	byRes[3];
        BYTE	sUserName[NAME_LEN];			/* 监控主机登陆帐号 */
        BYTE	sPassword[PASSWD_LEN];			/* 监控主机密码 */
    }NET_DVR_MATRIX_DECINFO, *LPNET_DVR_MATRIX_DECINFO;
    
    //启动/停止动态解码
    typedef struct 
    {
        DWORD	dwSize;				
        NET_DVR_MATRIX_DECINFO struDecChanInfo;		/* 动态解码通道信息 */
    }NET_DVR_MATRIX_DYNAMIC_DEC, *LPNET_DVR_MATRIX_DYNAMIC_DEC;
    
    typedef struct  
    {
        DWORD 	dwSize;
        DWORD   dwIsLinked;         /* 解码通道状态 0－休眠 1－正在连接 2－已连接 3-正在解码 */
        DWORD   dwStreamCpRate;     /* Stream copy rate, X kbits/second */
        char    cRes[64];		/* 保留 */
    }NET_DVR_MATRIX_DEC_CHAN_STATUS, *LPNET_DVR_MATRIX_DEC_CHAN_STATUS;
    
    typedef struct 
    {
        DWORD	dwSize;
        NET_DVR_MATRIX_DECINFO struDecChanInfo;		/* 解码通道信息 */
        DWORD	dwDecState;	/* 0-动态解码 1－循环解码 2－按时间回放 3－按文件回放 */
        NET_DVR_TIME StartTime;		/* 按时间回放开始时间 */
        NET_DVR_TIME StopTime;		/* 按时间回放停止时间 */
        char    sFileName[128];		/* 按文件回放文件名 */
    }NET_DVR_MATRIX_DEC_CHAN_INFO, *LPNET_DVR_MATRIX_DEC_CHAN_INFO;
    
    //连接的通道配置 2007-11-05
    typedef struct 
    {
        DWORD dwEnable;					/* 是否启用 0－否 1－启用*/
        NET_DVR_MATRIX_DECINFO struDecChanInfo;		/* 轮循解码通道信息 */
    }NET_DVR_MATRIX_DECCHANINFO, *LPNET_DVR_MATRIX_DECCHANINFO;
    
    //2007-11-05 新增每个解码通道的配置
    typedef struct 
    {
        DWORD	dwSize;
        DWORD	dwPoolTime;			/*轮巡时间 */
        NET_DVR_MATRIX_DECCHANINFO struchanConInfo[MAX_CYCLE_CHAN];
    }NET_DVR_MATRIX_LOOP_DECINFO, *LPNET_DVR_MATRIX_LOOP_DECINFO;
    
    //2007-12-22
    typedef struct 
    {
        BYTE	baudrate; 	/* 波特率 */
        BYTE	databits;		/* 数据位 */
        BYTE	stopbits;		/* 停止位 */
        BYTE	parity;		/* 奇偶校验位 */
        BYTE	flowcontrol;	/* 流控 */
        BYTE	res[3];
    }TTY_CONFIG, *LPTTY_CONFIG;
    
    typedef struct  
    {					
        BYTE byTranChanEnable;	/* 当前透明通道是否打开 0：关闭 1：打开 */	
        /*
         *	多路解码器本地有1个485串口，1个232串口都可以作为透明通道,设备号分配如下：
         *	0 RS485
         *	1 RS232 Console
         */
        BYTE	byLocalSerialDevice;			/* Local serial device */
        /*
         *	远程串口输出还是两个,一个RS232，一个RS485
         *	1表示232串口
         *	2表示485串口
         */
        BYTE	byRemoteSerialDevice;			/* Remote output serial device */
        BYTE	res1;							/* 保留 */
        char	sRemoteDevIP[16];				/* Remote Device IP */
        WORD	wRemoteDevPort;				/* Remote Net Communication Port */
        BYTE	res2[2];						/* 保留 */
        TTY_CONFIG RemoteSerialDevCfg;
    }NET_DVR_MATRIX_TRAN_CHAN_INFO, *LPNET_DVR_MATRIX_TRAN_CHAN_INFO;
    
    typedef struct  
    {
        DWORD dwSize;
        BYTE 	by232IsDualChan; /* 设置哪路232透明通道是全双工的 取值1到MAX_SERIAL_NUM */
        BYTE	by485IsDualChan; /* 设置哪路485透明通道是全双工的 取值1到MAX_SERIAL_NUM */
        BYTE	res[2];	/* 保留 */
        NET_DVR_MATRIX_TRAN_CHAN_INFO struTranInfo[MAX_SERIAL_NUM];/*同时支持建立MAX_SERIAL_NUM个透明通道*/
    }NET_DVR_MATRIX_TRAN_CHAN_CONFIG, *LPNET_DVR_MATRIX_TRAN_CHAN_CONFIG;
    
    //2007-12-24 Merry Christmas Eve...
    typedef struct 
    {
        DWORD	dwSize;
        char	sDVRIP[16];		/* DVR IP地址 */	
        WORD	wDVRPort;			/* 端口号 */	
        BYTE	byChannel;			/* 通道号 */
        BYTE 	byReserve;
        BYTE	sUserName[NAME_LEN];		/* 用户名 */
        BYTE	sPassword[PASSWD_LEN];		/* 密码 */
        DWORD	dwPlayMode;   	/* 0－按文件 1－按时间*/        	
        NET_DVR_TIME StartTime;
        NET_DVR_TIME StopTime;
        char    sFileName[128];
    }NET_DVR_MATRIX_DEC_REMOTE_PLAY, *LPNET_DVR_MATRIX_DEC_REMOTE_PLAY;
    
    /* 文件播放命令 */
#define NET_DVR_PLAYSTART		1//开始播放
#define NET_DVR_PLAYSTOP		2//停止播放
#define NET_DVR_PLAYPAUSE		3//暂停播放
#define NET_DVR_PLAYRESTART		4//恢复播放
#define NET_DVR_PLAYFAST		5//快放
#define NET_DVR_PLAYSLOW		6//慢放
#define NET_DVR_PLAYNORMAL		7//正常速度
#define NET_DVR_PLAYSTARTAUDIO	9//打开声音
#define NET_DVR_PLAYSTOPAUDIO	10//关闭声音
#define NET_DVR_PLAYSETPOS		12//改变文件回放的进度
    
    typedef struct 
    {
        DWORD	dwSize;
        DWORD	dwPlayCmd;		/* 播放命令 见文件播放命令*/
        DWORD	dwCmdParam;		/* 播放命令参数 */
    }NET_DVR_MATRIX_DEC_REMOTE_PLAY_CONTROL, *LPNET_DVR_MATRIX_DEC_REMOTE_PLAY_CONTROL;
    
    typedef struct  
    {
        DWORD dwSize;
        DWORD dwCurMediaFileLen;		/* 当前播放的媒体文件长度 */       
        DWORD dwCurMediaFilePosition;	/* 当前播放文件的播放位置 */        
        DWORD dwCurMediaFileDuration;	/* 当前播放文件的总时间 */        
        DWORD dwCurPlayTime;			/* 当前已经播放的时间 */        
        DWORD dwCurMediaFIleFrames;		/* 当前播放文件的总帧数 */        
        DWORD dwCurDataType;			/* 当前传输的数据类型，19-文件头，20-流数据， 21-播放结束标志 */        
        BYTE res[72];	
    }NET_DVR_MATRIX_DEC_REMOTE_PLAY_STATUS, *LPNET_DVR_MATRIX_DEC_REMOTE_PLAY_STATUS;
    /************************************多路解码器(end)***************************************/
    
    typedef struct 
    {	/* 12 bytes */
        DWORD	dwSize;
        char	sUserName[32];
        char 	sPassWord[32];
        char 	sFromName[32];			/* Sender *///字符串中的第一个字符和最后一个字符不能是"@",并且字符串中要有"@"字符
        char 	sFromAddr[48];			/* Sender address */
        char 	sToName1[32];			/* Receiver1 */
        char 	sToName2[32];			/* Receiver2 */
        char 	sToAddr1[48];			/* Receiver address1 */
        char 	sToAddr2[48];			/* Receiver address2 */
        char	sEmailServer[32];		/* Email server address */
        BYTE	byServerType;			/* Email server type: 0-SMTP, 1-POP, 2-IMTP…*/
        BYTE	byUseAuthen;			/* Email server authentication method: 1-enable, 0-disable */
        BYTE	byAttachment;			/* enable attachment */
        BYTE	byMailinterval;			/* mail interval 0-2s, 1-3s, 2-4s. 3-5s*/
    } NET_DVR_EMAILCFG, *LPNET_DVR_EMAILCFG;
    
    typedef struct 
    {
        DWORD dwSize;
        NET_DVR_COMPRESSION_INFO_EX  struLowCompression;	//定时录像
        NET_DVR_COMPRESSION_INFO_EX  struEventCompression;	//事件触发录像
    }NET_DVR_COMPRESSIONCFG_NEW, *LPNET_DVR_COMPRESSIONCFG_NEW;
    
    //球机位置信息
    typedef struct
    {
        WORD wAction;//获取时该字段无效
        WORD wPanPos;//水平参数
        WORD wTiltPos;//垂直参数
        WORD wZoomPos;//变倍参数
    }NET_DVR_PTZPOS, *LPNET_DVR_PTZPOS;
    
    //球机范围信息
    typedef struct
    {
        WORD wPanPosMin;//水平参数min
        WORD wPanPosMax;//水平参数max
        WORD wTiltPosMin;//垂直参数min
        WORD wTiltPosMax;//垂直参数max
        WORD wZoomPosMin;//变倍参数min
        WORD wZoomPosMax;//变倍参数max
    }NET_DVR_PTZSCOPE, *LPNET_DVR_PTZSCOPE;
    
    //rtsp配置 ipcamera专用
    typedef struct
    {
        DWORD dwSize;         //长度
        WORD  wPort;          //rtsp服务器侦听端口
        BYTE  byReserve[54];  //预留
    }NET_DVR_RTSPCFG, *LPNET_DVR_RTSPCFG;
    
    
    /********************************接口参数结构(begin)*********************************/
    
    //NET_DVR_Login()参数结构
    typedef struct
    {
        BYTE sSerialNumber[SERIALNO_LEN];   //序列号
        BYTE byAlarmInPortNum;		        //DVR报警输入个数
        BYTE byAlarmOutPortNum;		        //DVR报警输出个数
        BYTE byDiskNum;				        //DVR硬盘个数
        BYTE byDVRType;				        //DVR类型, 1:DVR 2:ATM DVR 3:DVS ......
        BYTE byChanNum;				        //DVR 通道个数
        BYTE byStartChan;			        //起始通道号,例如DVS-1,DVR - 1
    }NET_DVR_DEVICEINFO, *LPNET_DVR_DEVICEINFO;
    
    //NET_DVR_Login_V30()参数结构
    typedef struct
    {
        BYTE sSerialNumber[SERIALNO_LEN];  //序列号
        BYTE byAlarmInPortNum;		        //报警输入个数
        BYTE byAlarmOutPortNum;		        //报警输出个数
        BYTE byDiskNum;				    //硬盘个数
        BYTE byDVRType;				    //设备类型, 1:DVR 2:ATM DVR 3:DVS ......
        BYTE byChanNum;				    //模拟通道个数
        BYTE byStartChan;			        //起始通道号,例如DVS-1,DVR - 1
        BYTE byAudioChanNum;                //语音通道数
        BYTE byIPChanNum;					//最大数字通道个数  
        BYTE byRes1[24];					//保留
    }NET_DVR_DEVICEINFO_V30, *LPNET_DVR_DEVICEINFO_V30;
    
    //sdk网络环境枚举变量，用于远程升级
    typedef enum _SDK_NET_ENV
    {
        LOCAL_AREA_NETWORK = 0,
        WIDE_AREA_NETWORK
    }SDK_NETWORK_ENVIRONMENT;
    
    //显示模式
    typedef enum
    {
        NORMALMODE = 0,
        OVERLAYMODE
    }DISPLAY_MODE;
    
    //发送模式
    typedef enum
    {
        PTOPTCPMODE = 0,
        PTOPUDPMODE,
        MULTIMODE,
        RTPMODE,
        RESERVEDMODE
    }SEND_MODE;
    
    //抓图模式
    typedef enum 
    {
        BMP_MODE = 0,		//BMP模式
        JPEG_MODE = 1		//JPEG模式 
    }CAPTURE_MODE;
    
    //实时声音模式
    typedef enum
    {
        MONOPOLIZE_MODE = 1,//独占模式
        SHARE_MODE = 2		//共享模式
    }REALSOUND_MODE;
    
    //软解码预览参数
    typedef struct
    {
        LONG lChannel;//通道号
        LONG lLinkMode;//最高位(31)为0表示主码流，为1表示子，0－30位表示码流连接方式: 0：TCP方式,1：UDP方式,2：多播方式,3 - RTP方式，4-音视频分开(TCP)
        HWND hPlayWnd;//播放窗口的句柄,为NULL表示不播放图象
        char* sMultiCastIP;//多播组地址
    }NET_DVR_CLIENTINFO, *LPNET_DVR_CLIENTINFO;
    
    //SDK状态信息(9000新增)
    typedef struct 
    {
        DWORD dwTotalLoginNum;		//当前login用户数
        DWORD dwTotalRealPlayNum;	//当前realplay路数
        DWORD dwTotalPlayBackNum;	//当前回放或下载路数
        DWORD dwTotalAlarmChanNum;	//当前建立报警通道路数
        DWORD dwTotalFormatNum;		//当前硬盘格式化路数
        DWORD dwTotalFileSearchNum;	//当前日志或文件搜索路数
        DWORD dwTotalLogSearchNum;	//当前日志或文件搜索路数
        DWORD dwTotalSerialNum;	    //当前透明通道路数
        DWORD dwTotalUpgradeNum;	//当前升级路数
        DWORD dwTotalVoiceComNum;	//当前语音转发路数
        DWORD dwTotalBroadCastNum;	//当前语音广播路数
        DWORD dwRes[10];
    }NET_DVR_SDKSTATE, *LPNET_DVR_SDKSTATE;
    
    //SDK功能支持信息(9000新增)
    typedef struct 
    {
        DWORD dwMaxLoginNum;		//最大login用户数 MAX_LOGIN_USERS
        DWORD dwMaxRealPlayNum;		//最大realplay路数 WATCH_NUM
        DWORD dwMaxPlayBackNum;		//最大回放或下载路数 WATCH_NUM
        DWORD dwMaxAlarmChanNum;	//最大建立报警通道路数 ALARM_NUM
        DWORD dwMaxFormatNum;		//最大硬盘格式化路数 SERVER_NUM
        DWORD dwMaxFileSearchNum;	//最大文件搜索路数 SERVER_NUM
        DWORD dwMaxLogSearchNum;	//最大日志搜索路数 SERVER_NUM
        DWORD dwMaxSerialNum;	    //最大透明通道路数 SERVER_NUM
        DWORD dwMaxUpgradeNum;	    //最大升级路数 SERVER_NUM
        DWORD dwMaxVoiceComNum;		//最大语音转发路数 SERVER_NUM
        DWORD dwMaxBroadCastNum;	//最大语音广播路数 MAX_CASTNUM
        DWORD dwRes[10];
    }NET_DVR_SDKABL, *LPNET_DVR_SDKABL;
    
    //报警设备信息
    typedef struct
    {   
        BYTE byUserIDValid;                 /* userid是否有效 0-无效，1-有效 */
        BYTE bySerialValid;                 /* 序列号是否有效 0-无效，1-有效 */
        BYTE byVersionValid;                /* 版本号是否有效 0-无效，1-有效 */
        BYTE byDeviceNameValid;             /* 设备名字是否有效 0-无效，1-有效 */
        BYTE byMacAddrValid;                /* MAC地址是否有效 0-无效，1-有效 */    
        BYTE byLinkPortValid;               /* login端口是否有效 0-无效，1-有效 */
        BYTE byDeviceIPValid;               /* 设备IP是否有效 0-无效，1-有效 */
        BYTE bySocketIPValid;               /* socket ip是否有效 0-无效，1-有效 */
        LONG lUserID;                       /* NET_DVR_Login()返回值, 布防时有效 */
        BYTE sSerialNumber[SERIALNO_LEN];	/* 序列号 */
        DWORD dwDeviceVersion;			    /* 版本信息 高16位表示主版本，低16位表示次版本*/
        char sDeviceName[NAME_LEN];		    /* 设备名字 */
        BYTE byMacAddr[MACADDR_LEN];		/* MAC地址 */    
        WORD wLinkPort;                     /* link port */
        char sDeviceIP[128];    			/* IP地址 */
        char sSocketIP[128];    			/* 报警主动上传时的socket IP地址 */
        BYTE byIpProtocol;                  /* Ip协议 0-IPV4, 1-IPV6 */
        WORD wSocketPort;                   /* 报警主动上传时的socket 端口 */
        BYTE byRes2[9];
    }NET_DVR_ALARMER, *LPNET_DVR_ALARMER;
    
    //硬解码显示区域参数(子结构)
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
    
    //硬解码预览参数
    typedef struct
    {
        LONG lChannel;//通道号
        LONG lLinkMode; //最高位(31)为0表示主码流，为1表示子，0－30位表示码流连接方式:0：TCP方式,1：UDP方式,2：多播方式,3 - RTP方式，4-电话线，5－128k宽带，6－256k宽带，7－384k宽带，8－512k宽带；
        char* sMultiCastIP;
        NET_DVR_DISPLAY_PARA struDisplayPara;
    }NET_DVR_CARDINFO, *LPNET_DVR_CARDINFO;
    
    //录象文件参数
    typedef struct 
    {
        char sFileName[100];//文件名
        NET_DVR_TIME struStartTime;//文件的开始时间
        NET_DVR_TIME struStopTime;//文件的结束时间
        DWORD dwFileSize;//文件的大小
    }NET_DVR_FIND_DATA, *LPNET_DVR_FIND_DATA;
    
    //录象文件参数(9000)
    typedef struct 
    {
        char sFileName[100];//文件名
        NET_DVR_TIME struStartTime;//文件的开始时间
        NET_DVR_TIME struStopTime;//文件的结束时间
        DWORD dwFileSize;//文件的大小
        char sCardNum[32];
        BYTE byLocked;//9000设备支持,1表示此文件已经被锁定,0表示正常的文件
        BYTE byRes[3];
    }NET_DVR_FINDDATA_V30, *LPNET_DVR_FINDDATA_V30;
    
    //录象文件参数(带卡号)
    typedef struct 
    {
        char sFileName[100];//文件名
        NET_DVR_TIME struStartTime;//文件的开始时间
        NET_DVR_TIME struStopTime;//文件的结束时间
        DWORD dwFileSize;//文件的大小
        char sCardNum[32];
    }NET_DVR_FINDDATA_CARD, *LPNET_DVR_FINDDATA_CARD;
    
    
    //录象文件查找条件结构
    typedef struct 
    {
        LONG lChannel;//通道号
        DWORD dwFileType;//录象文件类型0xff－全部，0－定时录像,1-移动侦测 ，2－报警触发，
        //3-报警|移动侦测 4-报警&移动侦测 5-命令触发 6-手动录像
        DWORD dwIsLocked;//是否锁定 0-正常文件,1-锁定文件, 0xff表示所有文件
        DWORD dwUseCardNo;//是否使用卡号
        BYTE sCardNumber[32];//卡号
        NET_DVR_TIME struStartTime;//开始时间
        NET_DVR_TIME struStopTime;//结束时间
    }NET_DVR_FILECOND, *LPNET_DVR_FILECOND;
    
    
    //云台区域选择放大缩小(HIK 快球专用)
    typedef struct 
    {
        int xTop;     //方框起始点的x坐标
        int yTop;     //方框结束点的y坐标
        int xBottom;  //方框结束点的x坐标
        int yBottom;  //方框结束点的y坐标
        int bCounter; //保留
    }NET_DVR_POINT_FRAME, *LPNET_DVR_POINT_FRAME;
    
    //语音对讲参数
    typedef struct 
    {
        BYTE  byAudioEncType;   //音频编码类型 0-G722; 1-G711
        BYTE  byres[7];//这里保留音频的压缩参数 
    }NET_DVR_COMPRESSION_AUDIO, *LPNET_DVR_COMPRESSION_AUDIO;
    
    /********************************接口参数结构(end)*********************************/
    
    
    /********************************SDK接口函数声明*********************************/
    NET_DVR_API BOOL __stdcall NET_DVR_Init();
    NET_DVR_API BOOL __stdcall NET_DVR_Cleanup();
    
    //注册异常消息回调函数
    NET_DVR_API BOOL __stdcall NET_DVR_SetExceptionCallBack_V30(UINT reserved1, void* reserved2, void (CALLBACK* fExceptionCallBack)(DWORD dwType, LONG lUserID, LONG lHandle, void *pUser), void *pUser);
    //注册报警回调函数
    typedef void (CALLBACK *MSGCallBack)(LONG lCommand, NET_DVR_ALARMER *pAlarmer, char *pAlarmInfo, DWORD dwBufLen, void* pUser);
    NET_DVR_API BOOL __stdcall NET_DVR_SetDVRMessageCallBack_V30(MSGCallBack fMessageCallBack, void* pUser);
    //设置超时和重连
    NET_DVR_API BOOL __stdcall NET_DVR_SetConnectTime(DWORD dwWaitTime = 5000, DWORD dwTryTimes = 3);
    NET_DVR_API BOOL __stdcall NET_DVR_SetReconnect(DWORD dwInterval = 30000, BOOL bEnableRecon = TRUE);
    //获取sdk版本信息
    NET_DVR_API DWORD __stdcall NET_DVR_GetSDKVersion();
    NET_DVR_API DWORD __stdcall NET_DVR_GetSDKBuildVersion();
    //注册
    NET_DVR_API LONG __stdcall NET_DVR_Login(char *sDVRIP,WORD wDVRPort,char *sUserName,char *sPassword,LPNET_DVR_DEVICEINFO lpDeviceInfo);
    NET_DVR_API LONG __stdcall NET_DVR_Login_V30(char *sDVRIP, WORD wDVRPort, char *sUserName, char *sPassword, LPNET_DVR_DEVICEINFO_V30 lpDeviceInfo);
    NET_DVR_API BOOL __stdcall NET_DVR_Logout(LONG lUserID);
    NET_DVR_API BOOL __stdcall NET_DVR_Logout_V30(LONG lUserID);
    //获取错误码
    NET_DVR_API DWORD __stdcall NET_DVR_GetLastError();
    NET_DVR_API char* __stdcall NET_DVR_GetErrorMsg(LONG *pErrorNo = NULL);
    
    //预览
    NET_DVR_API LONG __stdcall NET_DVR_RealPlay(LONG lUserID,LPNET_DVR_CLIENTINFO lpClientInfo);
    NET_DVR_API LONG __stdcall NET_DVR_RealPlay_V30(LONG lUserID, LPNET_DVR_CLIENTINFO lpClientInfo, void(CALLBACK *fRealDataCallBack_V30) (LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer, DWORD dwBufSize, void* pUser) = NULL, void* pUser = NULL, BOOL bBlocked = FALSE);
    NET_DVR_API BOOL __stdcall NET_DVR_StopRealPlay(LONG lRealHandle);
    
    //动态生成I帧
    NET_DVR_API BOOL __stdcall NET_DVR_MakeKeyFrame(LONG lUserID, LONG lChannel);//主码流
    NET_DVR_API BOOL __stdcall NET_DVR_MakeKeyFrameSub(LONG lUserID, LONG lChannel);//子码流
    
    //视频参数调节
    NET_DVR_API BOOL __stdcall NET_DVR_ClientSetVideoEffect(LONG lRealHandle,DWORD dwBrightValue,DWORD dwContrastValue, DWORD dwSaturationValue,DWORD dwHueValue);
    NET_DVR_API BOOL __stdcall NET_DVR_ClientGetVideoEffect(LONG lRealHandle,DWORD *pBrightValue,DWORD *pContrastValue, DWORD *pSaturationValue,DWORD *pHueValue);
    
    //保存实时数据
    NET_DVR_API BOOL __stdcall NET_DVR_SaveRealData(LONG lRealHandle,char *sFileName);
    NET_DVR_API BOOL __stdcall NET_DVR_StopSaveRealData(LONG lRealHandle);
    //实时数据回调
    NET_DVR_API BOOL __stdcall NET_DVR_SetRealDataCallBack(LONG lRealHandle,void(CALLBACK *fRealDataCallBack) (LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer,DWORD dwBufSize,DWORD dwUser),DWORD dwUser);
    
    //云台控制
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
    //报警布防
    NET_DVR_API LONG __stdcall NET_DVR_SetupAlarmChan(LONG lUserID);
    NET_DVR_API BOOL __stdcall NET_DVR_CloseAlarmChan(LONG lAlarmHandle);
    NET_DVR_API LONG __stdcall NET_DVR_SetupAlarmChan_V30(LONG lUserID);
    NET_DVR_API BOOL __stdcall NET_DVR_CloseAlarmChan_V30(LONG lAlarmHandle);
    //jpeg抓图
    NET_DVR_API BOOL __stdcall NET_DVR_CaptureJPEGPicture(LONG lUserID, LONG lChannel, LPNET_DVR_JPEGPARA lpJpegPara, char *sPicFileName);
    //JPEG抓图到内存
    NET_DVR_API BOOL __stdcall NET_DVR_CaptureJPEGPicture_NEW(LONG lUserID, LONG lChannel, LPNET_DVR_JPEGPARA lpJpegPara, char *sJpegPicBuffer, DWORD dwPicSize,  LPDWORD lpSizeReturned);
    //重启
    NET_DVR_API BOOL __stdcall NET_DVR_RebootDVR(LONG lUserID);
    //关闭DVR
    NET_DVR_API BOOL __stdcall NET_DVR_ShutDownDVR(LONG lUserID);
    //参数配置
    NET_DVR_API BOOL __stdcall NET_DVR_GetDVRConfig(LONG lUserID, DWORD dwCommand,LONG lChannel, LPVOID lpOutBuffer, DWORD dwOutBufferSize, LPDWORD lpBytesReturned);
    NET_DVR_API BOOL __stdcall NET_DVR_SetDVRConfig(LONG lUserID, DWORD dwCommand,LONG lChannel, LPVOID lpInBuffer, DWORD dwInBufferSize);
    
    
    
    /*
     //2005.01.11 增加两个接口,Linux专有 
     NET_DVR_API BOOL NET_DVR_DrawAreaInit( INITINFO InitInfo );
     NET_DVR_API BOOL NET_DVR_DrawAreaRelease();
     
     //NET_DVR_SetDVRMessage的扩展
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
     
     //预览相关接口
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
     
     //动态生成I帧
     NET_DVR_API BOOL __stdcall NET_DVR_MakeKeyFrame(LONG lUserID, LONG lChannel);//主码流
     NET_DVR_API BOOL __stdcall NET_DVR_MakeKeyFrameSub(LONG lUserID, LONG lChannel);//子码流
     
     //云台控制相关接口
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
     
     //文件查找与回放
     NET_DVR_API LONG __stdcall NET_DVR_FindFile(LONG lUserID,LONG lChannel,DWORD dwFileType, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime);
     NET_DVR_API LONG __stdcall NET_DVR_FindNextFile(LONG lFindHandle,LPNET_DVR_FIND_DATA lpFindData);
     NET_DVR_API BOOL __stdcall NET_DVR_FindClose(LONG lFindHandle);
     NET_DVR_API LONG __stdcall NET_DVR_FindNextFile_V30(LONG lFindHandle, LPNET_DVR_FINDDATA_V30 lpFindData);
     NET_DVR_API LONG __stdcall NET_DVR_FindFile_V30(LONG lUserID, LPNET_DVR_FILECOND pFindCond);
     NET_DVR_API BOOL __stdcall NET_DVR_FindClose_V30(LONG lFindHandle);
     //2007-04-16增加查询结果带卡号的文件查找
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
     
     //升级
     NET_DVR_API LONG __stdcall NET_DVR_Upgrade(LONG lUserID, char *sFileName);
     NET_DVR_API int __stdcall NET_DVR_GetUpgradeState(LONG lUpgradeHandle);
     NET_DVR_API int __stdcall NET_DVR_GetUpgradeProgress(LONG lUpgradeHandle);
     NET_DVR_API BOOL __stdcall NET_DVR_CloseUpgradeHandle(LONG lUpgradeHandle);
     NET_DVR_API BOOL __stdcall NET_DVR_SetNetworkEnvironment(DWORD dwEnvironmentLevel);
     //远程格式化硬盘
     NET_DVR_API LONG __stdcall NET_DVR_FormatDisk(LONG lUserID,LONG lDiskNumber);
     NET_DVR_API BOOL __stdcall NET_DVR_GetFormatProgress(LONG lFormatHandle, LONG *pCurrentFormatDisk,LONG *pCurrentDiskPos,LONG *pFormatStatic);
     NET_DVR_API BOOL __stdcall NET_DVR_CloseFormatHandle(LONG lFormatHandle);
     //报警
     NET_DVR_API LONG __stdcall NET_DVR_SetupAlarmChan(LONG lUserID);
     NET_DVR_API BOOL __stdcall NET_DVR_CloseAlarmChan(LONG lAlarmHandle);
     NET_DVR_API LONG __stdcall NET_DVR_SetupAlarmChan_V30(LONG lUserID);
     NET_DVR_API BOOL __stdcall NET_DVR_CloseAlarmChan_V30(LONG lAlarmHandle);
     
     //语音对讲
     
     NET_DVR_API BOOL __stdcall NET_DVR_StopVoiceCom(LONG lVoiceComHandle);
     //语音转发
     NET_DVR_API LONG __stdcall NET_DVR_StartVoiceCom_MR(LONG lUserID, void(CALLBACK *fVoiceDataCallBack)(LONG lVoiceComHandle, char *pRecvDataBuffer, DWORD dwBufSize, BYTE byAudioFlag, DWORD dwUser), DWORD dwUser);
     NET_DVR_API LONG __stdcall NET_DVR_StartVoiceCom_MR_V30(LONG lUserID, DWORD dwVoiceChan, void(CALLBACK *fVoiceDataCallBack)(LONG lVoiceComHandle, char *pRecvDataBuffer, DWORD dwBufSize, BYTE byAudioFlag, void* pUser), void* pUser);
     NET_DVR_API BOOL __stdcall NET_DVR_VoiceComSendData(LONG lVoiceComHandle, char *pSendBuf, DWORD dwBufSize);
     
     //语音广播
     
     ////////////////////////////////////////////////////////////
     //透明通道设置
     NET_DVR_API LONG __stdcall NET_DVR_SerialStart(LONG lUserID,LONG lSerialPort,void(CALLBACK *fSerialDataCallBack)(LONG lSerialHandle,char *pRecvDataBuffer,DWORD dwBufSize,DWORD dwUser),DWORD dwUser);
     //485作为透明通道时，需要指明通道号，因为不同通道号485的设置可以不同(比如波特率)
     NET_DVR_API BOOL __stdcall NET_DVR_SerialSend(LONG lSerialHandle, LONG lChannel, char *pSendBuf,DWORD dwBufSize);
     NET_DVR_API BOOL __stdcall NET_DVR_SerialStop(LONG lSerialHandle);
     NET_DVR_API BOOL __stdcall NET_DVR_SendTo232Port(LONG lUserID, char *pSendBuf, DWORD dwBufSize);
     NET_DVR_API BOOL __stdcall NET_DVR_SendToSerialPort(LONG lUserID, DWORD dwSerialPort, DWORD dwSerialIndex, char *pSendBuf, DWORD dwBufSize);
     
     //解码 nBitrate = 16000
     NET_DVR_API void* __stdcall NET_DVR_InitG722Decoder(int nBitrate = 16000);
     NET_DVR_API void __stdcall NET_DVR_ReleaseG722Decoder(void *pDecHandle);
     NET_DVR_API BOOL __stdcall NET_DVR_DecodeG722Frame(void *pDecHandle, unsigned char* pInBuffer, unsigned char* pOutBuffer);
     //编码
     NET_DVR_API void* __stdcall NET_DVR_InitG722Encoder();
     NET_DVR_API BOOL __stdcall NET_DVR_EncodeG722Frame(void *pEncodeHandle,unsigned char* pInBuffer, unsigned char* pOutBuffer);
     NET_DVR_API void __stdcall NET_DVR_ReleaseG722Encoder(void *pEncodeHandle);
     
     //远程控制本地显示
     NET_DVR_API BOOL __stdcall NET_DVR_ClickKey(LONG lUserID, LONG lKeyIndex);
     //远程控制设备端手动录像
     NET_DVR_API BOOL __stdcall NET_DVR_StartDVRRecord(LONG lUserID,LONG lChannel,LONG lRecordType);
     NET_DVR_API BOOL __stdcall NET_DVR_StopDVRRecord(LONG lUserID,LONG lChannel);
     //解码卡
     
     //日志
     NET_DVR_API LONG __stdcall NET_DVR_FindDVRLog(LONG lUserID, LONG lSelectMode, DWORD dwMajorType,DWORD dwMinorType, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime);
     NET_DVR_API LONG __stdcall NET_DVR_FindNextLog(LONG lLogHandle, LPNET_DVR_LOG lpLogData);
     NET_DVR_API BOOL __stdcall NET_DVR_FindLogClose(LONG lLogHandle);
     NET_DVR_API LONG __stdcall NET_DVR_FindDVRLog_V30(LONG lUserID, LONG lSelectMode, DWORD dwMajorType,DWORD dwMinorType, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime, BOOL bOnlySmart = FALSE);
     NET_DVR_API LONG __stdcall NET_DVR_FindNextLog_V30(LONG lLogHandle, LPNET_DVR_LOG_V30 lpLogData);
     NET_DVR_API BOOL __stdcall NET_DVR_FindLogClose_V30(LONG lLogHandle);
     //截止2004年8月5日,共113个接口
     //ATM DVR
     NET_DVR_API LONG __stdcall NET_DVR_FindFileByCard(LONG lUserID,LONG lChannel,DWORD dwFileType, int nFindType, BYTE *sCardNumber, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime);
     //截止2004年10月5日,共116个接口
     
     
     
     //编码
     NET_DVR_API void* __stdcall NET_DVR_InitG722Encoder();
     NET_DVR_API BOOL __stdcall NET_DVR_EncodeG722Frame(void *pEncodeHandle,unsigned char* pInBuffer, unsigned char* pOutBuffer);
     NET_DVR_API void __stdcall NET_DVR_ReleaseG722Encoder(void *pEncodeHandle);
     //2005-09-15
     NET_DVR_API BOOL __stdcall NET_DVR_CaptureJPEGPicture(LONG lUserID, LONG lChannel, LPNET_DVR_JPEGPARA lpJpegPara, char *sPicFileName);
     //JPEG抓图到内存
     NET_DVR_API BOOL __stdcall NET_DVR_CaptureJPEGPicture_NEW(LONG lUserID, LONG lChannel, LPNET_DVR_JPEGPARA lpJpegPara, char *sJpegPicBuffer, DWORD dwPicSize,  LPDWORD lpSizeReturned);
     
     
     //2006-02-16
     NET_DVR_API int __stdcall NET_DVR_GetRealPlayerIndex(LONG lRealHandle);
     NET_DVR_API int __stdcall NET_DVR_GetPlayBackPlayerIndex(LONG lPlayHandle);
     
     //2006-08-28 704-640 缩放配置
     NET_DVR_API BOOL __stdcall NET_DVR_SetScaleCFG(LONG lUserID, DWORD dwScale);
     NET_DVR_API BOOL __stdcall NET_DVR_GetScaleCFG(LONG lUserID, DWORD *lpOutScale);
     NET_DVR_API BOOL __stdcall NET_DVR_SetScaleCFG_V30(LONG lUserID, LPNET_DVR_SCALECFG pScalecfg);
     NET_DVR_API BOOL __stdcall NET_DVR_GetScaleCFG_V30(LONG lUserID, LPNET_DVR_SCALECFG pScalecfg);
     //2006-08-28 ATM机端口设置
     NET_DVR_API BOOL __stdcall NET_DVR_SetATMPortCFG(LONG lUserID, WORD wATMPort);
     NET_DVR_API BOOL __stdcall NET_DVR_GetATMPortCFG(LONG lUserID, WORD *LPOutATMPort);
     
     //2006-11-10 支持显卡辅助输出
     NET_DVR_API BOOL __stdcall NET_DVR_InitDDrawDevice();
     NET_DVR_API BOOL __stdcall NET_DVR_ReleaseDDrawDevice();
     NET_DVR_API LONG __stdcall NET_DVR_GetDDrawDeviceTotalNums();
     NET_DVR_API BOOL __stdcall NET_DVR_SetDDrawDevice(LONG lPlayPort, DWORD nDeviceNum);
     
     NET_DVR_API BOOL __stdcall NET_DVR_PTZSelZoomIn(LONG lRealHandle, LPNET_DVR_POINT_FRAME pStruPointFrame);
     NET_DVR_API BOOL __stdcall NET_DVR_PTZSelZoomIn_EX(LONG lUserID, LONG lChannel, LPNET_DVR_POINT_FRAME pStruPointFrame);
     
     
     
     //解码设备DS-6001D/DS-6001F
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
     
     //多路解码器
     //2007-11-30 V211支持以下接口 //11
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
     //2007-12-22 增加支持接口 //18
     NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetTranInfo(LONG lUserID, LPNET_DVR_MATRIX_TRAN_CHAN_CONFIG lpTranInfo);
     NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetTranInfo(LONG lUserID, LPNET_DVR_MATRIX_TRAN_CHAN_CONFIG lpTranInfo);
     NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetRemotePlay(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_DEC_REMOTE_PLAY lpInter);
     NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetRemotePlayControl(LONG lUserID, DWORD dwDecChanNum, DWORD dwControlCode, DWORD dwInValue, DWORD *LPOutValue);
     NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetRemotePlayStatus(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_DEC_REMOTE_PLAY_STATUS lpOuter);
     //end
     NET_DVR_API BOOL __stdcall NET_DVR_RefreshPlay(LONG lPlayHandle);
     //恢复默认值
     NET_DVR_API BOOL __stdcall NET_DVR_RestoreConfig(LONG lUserID);
     //保存参数
     NET_DVR_API BOOL __stdcall NET_DVR_SaveConfig(LONG lUserID);
     //重启
     NET_DVR_API BOOL __stdcall NET_DVR_RebootDVR(LONG lUserID);
     //关闭DVR
     NET_DVR_API BOOL __stdcall NET_DVR_ShutDownDVR(LONG lUserID);
     
     
     
     //参数配置 begin
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
     
     //视频参数调节
     NET_DVR_API BOOL __stdcall NET_DVR_ClientSetVideoEffect(LONG lRealHandle,DWORD dwBrightValue,DWORD dwContrastValue, DWORD dwSaturationValue,DWORD dwHueValue);
     NET_DVR_API BOOL __stdcall NET_DVR_ClientGetVideoEffect(LONG lRealHandle,DWORD *pBrightValue,DWORD *pContrastValue, DWORD *pSaturationValue,DWORD *pHueValue);
     
     //配置文件
     NET_DVR_API BOOL __stdcall NET_DVR_GetConfigFile(LONG lUserID, char *sFileName);
     NET_DVR_API BOOL __stdcall NET_DVR_SetConfigFile(LONG lUserID, char *sFileName);
     NET_DVR_API BOOL __stdcall NET_DVR_GetConfigFile_V30(LONG lUserID, char *sOutBuffer, DWORD dwOutSize, DWORD *pReturnSize);
     
     NET_DVR_API BOOL __stdcall NET_DVR_GetConfigFile_EX(LONG lUserID, char *sOutBuffer, DWORD dwOutSize);
     NET_DVR_API BOOL __stdcall NET_DVR_SetConfigFile_EX(LONG lUserID, char *sInBuffer, DWORD dwInSize);
     
     //启用日志文件写入接口
     NET_DVR_API BOOL __stdcall NET_DVR_SetLogToFile(BOOL bLogEnable = FALSE, char * strLogDir = NULL, BOOL bAutoDel = TRUE);
     NET_DVR_API BOOL __stdcall NET_DVR_GetSDKState(LPNET_DVR_SDKSTATE pSDKState);
     NET_DVR_API BOOL __stdcall NET_DVR_GetSDKAbility(LPNET_DVR_SDKABL pSDKAbl);
     NET_DVR_API BOOL __stdcall NET_DVR_GetPTZProtocol(LONG lUserID, NET_DVR_PTZCFG *pPtzcfg);
     //前面板锁定
     NET_DVR_API BOOL __stdcall NET_DVR_LockPanel(LONG lUserID);
     NET_DVR_API BOOL __stdcall NET_DVR_UnLockPanel(LONG lUserID);
     
     NET_DVR_API BOOL __stdcall NET_DVR_SetRtspConfig(LONG lUserID, DWORD dwCommand, LPNET_DVR_RTSPCFG lpInBuffer, DWORD dwInBufferSize);
     NET_DVR_API BOOL __stdcall NET_DVR_GetRtspConfig(LONG lUserID, DWORD dwCommand, LPNET_DVR_RTSPCFG lpOutBuffer, DWORD dwOutBufferSize);
     */
    
#ifdef __cplusplus
}
#endif

#endif 
