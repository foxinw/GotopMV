//
//  GotopMVAppDelegate.h
//  GotopMV
//
//  Created by WANG FUXIN on 11-6-8.
//  Copyright 2011年 Gotop Co.Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GotopMVViewController;

@interface GotopMVAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet GotopMVViewController *viewController;

@end
