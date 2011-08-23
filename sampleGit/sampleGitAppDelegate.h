//
//  sampleGitAppDelegate.h
//  sampleGit
//
//  Created by subashinik-i on 23/08/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class sampleGitViewController;

@interface sampleGitAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet sampleGitViewController *viewController;

@end
