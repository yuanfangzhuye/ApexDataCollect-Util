//
//  APEXLogModel.h
//  ApexDataCollectUtil-iOS
//
//  Created by gary on 2019/4/22.
//  Copyright © 2019 Apex. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSUInteger, LoggerLevel) {
    LoggerLevelNone = 0, /* 不打印任何log */
    LoggerLevelError = 9,
    LoggerLevelInfo = 7,
    LoggerLevelDebug = 5,
    LoggerLevelVerbose = 1, /* 最高权限 打印全部log*/
};

@interface APEXLogModel : NSObject
@property (nonatomic, assign) NSTimeInterval timeStamp; /**<  */
@property (nonatomic, copy) NSString *log; /**<  */
@property (nonatomic, assign) LoggerLevel logLevel; /**<  */
@end

NS_ASSUME_NONNULL_END
