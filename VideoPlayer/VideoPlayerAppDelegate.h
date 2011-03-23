//
//  VideoPlayerAppDelegate.h
//  VideoPlayer
//
//  Created by Dmitry Kabanov on 23.03.11.
//  Copyright 2011 Home. All rights reserved.
//

#import <UIKit/UIKit.h>

@class VideoPlayerViewController;

@interface VideoPlayerAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet VideoPlayerViewController *viewController;

@end
