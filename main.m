//
//  main.m
//  cocos2d-ios-framework
//
//  Created by Mio Nilsson on 11/20/10.
//  Copyright Eskipol 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

int main(int argc, char *argv[]) {
	NSAutoreleasePool *pool = [NSAutoreleasePool new];
	int retVal = UIApplicationMain(argc, argv, nil, @"helloWorldAppDelegate");
	[pool release];
	return retVal;
}
