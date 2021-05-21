#import <Foundation/Foundation.h>

#import "GDPerformanceMonitorProtocol.h"

@class UILabel;

@interface GDPerformanceMonitor : NSObject

/**
 GDPerformanceMonitorDelegate delegate.
 */
@property (nonatomic, weak) id<GDPerformanceMonitorDelegate> delegate;

/**
 Change it to hide or show application version from monitoring view. Default is NO.
 */
@property (nonatomic, getter=isAppVersionHidden) BOOL appVersionHidden;

/**
 Change it to hide or show device iOS version from monitoring view. Default is NO.
 */
@property (nonatomic, getter=isDeviceVersionHidden) BOOL deviceVersionHidden;


/**
 Creates and returns instance of GDPerformanceMonitor, as singleton.
 */
+ (instancetype)sharedInstance;

/**
 Creates and returns instance of GDPerformanceMonitor.
 */
- (instancetype)init NS_DESIGNATED_INITIALIZER;

/**
 Overrides prefersStatusBarHidden and preferredStatusBarStyle properties to return the desired status bar attributes.
 
 Default prefersStatusBarHidden is NO, preferredStatusBarStyle is UIStatusBarStyleDefault.
 */
- (void)configureStatusBarAppearanceWithPrefersStatusBarHidden:(BOOL)prefersStatusBarHidden preferredStatusBarStyle:(NSInteger)preferredStatusBarStyle;

/**
 Starts or resumes performance monitoring, initialize monitoring view if not initialized and shows monitoring view. Use configuration block to change appearance as you like.
 */
- (void)startMonitoringWithConfiguration:(void (^)(UILabel *textLabel))configuration;

/**
 Starts or resumes performance monitoring, initialize monitoring view if not initialized and shows monitoring view.
 */
- (void)startMonitoring;

/**
 Pauses performance monitoring and hides monitoring view.
 */
- (void)pauseMonitoring;

/**
 Hides monitoring view.
 */
- (void)hideMonitoring;

/**
 Stops and removes monitoring view. Call when you're done with performance monitoring.
 */
- (void)stopMonitoring;

/**
 Use configuration block to change appearance as you like.
 */
- (void)configureWithConfiguration:(void (^)(UILabel *textLabel))configuration;

@end
