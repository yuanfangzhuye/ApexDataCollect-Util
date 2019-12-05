//
//  APEXLogger.h
//  ChinaAPEXAnalytics
//
//  Created by Cedric Wu on 2017/7/18.
//  Copyright © 2017年 Cedric Wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "APEXLogModel.h"

#define debugLogger(log) [[APEXLogger sharedInstance] debug:log]
@interface APEXLogger : NSObject
+ (instancetype)sharedInstance;

- (void)setLogLevel:(LoggerLevel)aLevel;
- (NSArray*)logArray;

- (void)error:(id)log;
- (void)info:(id)log;
- (void)debug:(id)log;
- (void)Verbose:(id)log;

@end
