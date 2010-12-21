//
//  cocos2d_ios_frameworkAppDelegate.h
//  cocos2d-ios-framework
//
//  Created by Mio Nilsson on 12/21/10.
//  Copyright Eskipol 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface cocos2d_ios_frameworkAppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
