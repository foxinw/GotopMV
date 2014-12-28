//
//  GotopMVViewController.m
//  GotopMV
//
//  Created by WANG FUXIN on 11-6-8.
//  Copyright 2011年 Gotop Co.Ltd. All rights reserved.
//

#import "GotopMVViewController.h"


#define MAX_BUF_SIZE 6000
//FILE * fp_yuv = fopen("/test.yuv", "wb");

@implementation GotopMVViewController
@synthesize viewVideo;
@synthesize btnPlay;

void CALLBACK fRealDataCallBack_V30(LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer, DWORD dwBufSize, void* pUser)
{
	printf("bufsize = %d \n",dwBufSize);
	GotopMVViewController * pOwner = (GotopMVViewController *)pUser;
	if(dwDataType == 1)
	{
		HK_STD_CreateHandle(pBuffer, 40, 1024*1024, pOwner->handle);
	}
	else {
		HK_STD_InputData(pOwner->handle, pBuffer, dwBufSize);
	}
	STD_FRAME_INFO stFrameInfo;
	while (HK_STD_GetOneFrame(pOwner->handle, &stFrameInfo)) {
		
		if( 1 == stFrameInfo.dwFrameType  )
		{
			//fwrite(stFrameInfo.pFrameBuffer, 1, stFrameInfo.dwFrameSize, fp_yuv);
			printf("widt %ld %ld ",stFrameInfo.dwWidthOrChannels , stFrameInfo.dwHeightOrBPS);
			//fwrite(stFrameInfo.pFrameBuffer, 1,stFrameInfo.dwFrameSize, fp_w);
			printf("Framenum = %d \n",stFrameInfo.dwFrameNum);
		}
		else
		{
			
			NSLog(@"other");
		}
		
	}
    
}

void CALLBACK AlarmMsgCallBack(LONG lCommand, NET_DVR_ALARMER *pAlarmer, char *pAlarmInfo, DWORD dwBufLen, void *pUser)
{
	printf("recv alarm! Command: %x, alarm len: %d\n", lCommand, dwBufLen);
}


- (void)dealloc
{
    [btnPlay release];
    [ip release];
    [port release];
    [viewVideo release];
    [m_Label release];
    [super dealloc];
}

- (void)didReceiveMemoryWarning
{
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}

#pragma mark - View lifecycle

/*
// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad
{
    [super viewDidLoad];
}
*/

- (void)viewDidUnload
{
    [self setBtnPlay:nil];
    [ip release];
    ip = nil;
    [port release];
    port = nil;
    [self setViewVideo:nil];
    [m_Label release];
    m_Label = nil;
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

- (IBAction)realPlayVideo:(id)sender 
{
    UIAlertView * alert = [[UIAlertView alloc] initWithTitle:@"视频预览"
                                                     message:@"实时视频预览"
                                                    delegate:self
                                           cancelButtonTitle:nil
                                           otherButtonTitles:@"确认", nil];
    [alert show];
    [alert release];
    
}

- (IBAction)decodeFile:(id)sender {
    
	FILE * fp_w;
	FILE * fp;
	long getBytes = 0;
	fp_w = fopen("/test.yuv","wb");
	fp = fopen("/1.mp4", "rb");
	BYTE fileheader[40]={0};
	BOOL flag = FALSE;
	getBytes = fread(fileheader, 1, 40, fp);
	
	flag = HK_STD_CreateHandle(fileheader,40,1024*1024,handle);
    BYTE * pBuf = NULL;
	try
	{
        pBuf = new BYTE[MAX_BUF_SIZE];
        if(NULL == pBuf)
        {
            [m_Label setText:@"alloc fail"];
            return;
            
			
        }
	}
	
	catch(...)
	{
        
		[m_Label setText:@"alloc fail"];
        
	}
	int len=MAX_BUF_SIZE;
	do
	{
		if(len < MAX_BUF_SIZE)
		{
			break;
		}
		len = fread(pBuf,1,MAX_BUF_SIZE,fp);
		
		HK_STD_InputData(handle, pBuf, len);
		STD_FRAME_INFO stFrameInfo = {0};
		while(	HK_STD_GetOneFrame(handle, &stFrameInfo))
		{
			//printf("type = %ld size = %ld num = %ld \n",stFrameInfo.dwFrameType , stFrameInfo.dwFrameSize ,stFrameInfo.dwFrameNum);
			if( 1 == stFrameInfo.dwFrameType  )
			{
				printf("widt %ld %ld \n",stFrameInfo.dwWidthOrChannels , stFrameInfo.dwHeightOrBPS);
				//fwrite(stFrameInfo.pFrameBuffer, 1,stFrameInfo.dwFrameSize, fp_w);
				printf("Framenum = %d \n",stFrameInfo.dwFrameNum);
			}
			else
			{
				
				NSLog(@"other");
			}
		}
		
	}while(1);
	
	HK_STD_DestroyHandle(handle);
	fclose(fp_w);
	fclose(fp);
	//[m_Label setText:@"hello"];
    
}


-(IBAction)DecodeStream:(id)sender
{
	
	[self initstream];
	
	
}
-(void)initstream
{
	bool bRet = NET_DVR_Init(); 
	if (!bRet)
	{
		NSLog(@"NET_DVR_Init Fail");
		return ;
	}
	
	NET_DVR_DEVICEINFO_V30 DeviceInfo = {0};
	//LONG lUserID = NET_DVR_Login_V30((char*)"172.7.76.85", 8001, (char*)"admin", (char*)"12345", &DeviceInfo);
	LONG lUserID = NET_DVR_Login_V30((char*)"218.207.115.21",/*"60.241.225.32",*/ 8000, (char*)"admin", (char*)"12345", &DeviceInfo);
	
	if(lUserID == -1)
	{
		printf("NET_DVR_Login_V30 failed! errorno: %d, Error msg: %s\n", errno, NET_DVR_GetErrorMsg(NULL));
		return ;
	}
	else
	{
		printf("NET_DVR_Login_V30 succ!\n");
	}
	
	
	NET_DVR_CLIENTINFO ClientInfo = {0};
	ClientInfo.lChannel = 1;
	ClientInfo.lLinkMode = 1<<31;
	lRealHandle = NET_DVR_RealPlay_V30(lUserID, &ClientInfo, fRealDataCallBack_V30, self, TRUE);
	if (-1 == lRealHandle)
	{
		printf("NET_DVR_RealPlay_V30 failed! Error msg: %s\n", NET_DVR_GetErrorMsg(NULL));
	}
	else
	{
		printf("NET_DVR_RealPlay_V30 succ! lRealHandle: %d\n", lRealHandle);
	}
}


@end
