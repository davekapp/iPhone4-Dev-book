//
//  ControlFunAppDelegate.h
//  ControlFun
//
//  Created by David Kapp on 6/15/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ControlFunViewController;

@interface ControlFunAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet ControlFunViewController *viewController;

@end
