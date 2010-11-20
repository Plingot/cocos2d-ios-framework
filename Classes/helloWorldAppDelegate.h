//
//  helloWorldAppDelegate.h
//  cocos2d-ios-framework
//
//  Created by Mio Nilsson on 11/20/10.
//  Copyright Eskipol 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface helloWorldAppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
