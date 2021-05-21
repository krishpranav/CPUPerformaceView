//
//  CPUPerformanceView.m
//  CPUPerformaceView
//
//  Created by Elangovan Ayyasamy on 21/05/21.
//  Copyright © 2021 Krisna Pranav. All rights reserved.
//

#import "CPUPerformanceView.h"

#import <mach/mach.h>
#import <QuartzCore/QuartzCore.h>

#import "GDMarginLabel.h"
#import "CPUWindowViewController.h"

@interface CPUPerformanceView()

@property (nonatomic, strong) CADisplayLink *displayLink;

@property (nonatomic, strong) GDMarginLabel *monitoringTextLabel;

@property (nonatomic) int screenUpdatesCount;

@property (nonatomic) CFTimeInterval screenUpdatesBeginTime;

@property (nonatomic) CFTimeInterval averageScreenUpdatesTime;

@property (nonatomic) NSString *versionsString;

@end

@implementation CPUPerformanceView

#pragma mark -
#pragma mark - Init Methods & Superclass Overriders

- (instancetype)init {
    self = [super initWithFrame: [GDPerforma]]
}


@end
