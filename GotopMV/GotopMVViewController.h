//
//  GotopMVViewController.h
//  GotopMV
//
//  Created by WANG FUXIN on 11-6-8.
//  Copyright 2011年 Gotop Co.Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#include "HikDecoderInterface.h"

#include "hcnetsdk.h"


@interface GotopMVViewController : UIViewController {
    
	long  lRealHandle;
	HANDLE handle;
    IBOutlet UILabel *m_Label;

    IBOutlet UITextField *ip;
    IBOutlet UITextField *port;
    UIButton *btnPlay;
    UIView *viewVideo;
}
@property (nonatomic, retain) IBOutlet UIView *viewVideo;
@property (nonatomic, retain) IBOutlet UIButton *btnPlay;
- (IBAction)realPlayVideo:(id)sender;
- (IBAction)decodeFile:(id)sender;

-(void)initstream;

-(IBAction)DecodeStream:(id)sender;

@end
