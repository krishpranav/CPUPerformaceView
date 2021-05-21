
#import <Foundation/Foundation.h>

@protocol GDPerformanceMonitorDelegate <NSObject>

- (void)performanceMonitorDidReportFPS:(int)fpsValue CPU:(float)cpuValue;

@end
