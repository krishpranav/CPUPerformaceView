//
//  CPUPerformanceView.h
//  CPUPerformaceView
//
//  Created by Elangovan Ayyasamy on 21/05/21.
//  Copyright © 2021 Krisna Pranav. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "CPUPerformanceMonitorProtocol.h"

@interface CPUPerformanceView : UIWindow

@property (nonatomic, weak) id<CPUPerformanceMonitorDelegate> performanceDelegate;

/**
 Change it to hide or show application version from monitoring view. Default is NO.
 */
@property (nonatomic, getter=isAppVersionHidden) BOOL appVersionHidden;

/**
 Change it to hide or show device iOS version from monitoring view. Default is NO.
 */
@property (nonatomic, getter=isDeviceVersionHidden) BOOL deviceVersionHidden;

/**
 Override this properties to return the desired status bar attributes.
 
 Default prefersStatusBarHidden is false, preferredStatusBarStyle is UIStatusBarStyle.default.
 */
@property (nonatomic) BOOL prefersStatusBarHidden;

@property (nonatomic) UIStatusBarStyle preferredStatusBarStyle;


/**
 Returns weak monitoring text label.
 */
- (UILabel *)textLabel;

/**
 Pauses performance monitoring and hides monitoring view.
 */
- (void)pauseMonitoring;

/**
 Resumes performance monitoring and shows monitoring view.
 */
- (void)resumeMonitoringAndShowMonitoringView:(BOOL)showMonitoringView;

/**
 Hides monitoring view.
 */
- (void)hideMonitoring;

/**
 Adds monitoring view above the status bar.
 */
- (void)addMonitoringViewAboveStatusBar;

/**
 Configures root view controller with prefersStatusBarHidden and preferredStatusBarStyle.
 */
- (void)configureRootViewController;

/**
 Stops and removes monitoring view. Call when you're done with performance monitoring.
 */
- (void)stopMonitoring;

@end
