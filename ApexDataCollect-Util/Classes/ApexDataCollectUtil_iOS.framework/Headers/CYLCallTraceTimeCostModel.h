//
//  CYLCallTraceTimeCostModel.h
//  Apex
//
//  Created by gary on 2019/4/8.
//  Copyright © 2019 Gary. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CYLCallTraceTimeCostModel : NSObject

@property (nonatomic, copy) NSString *className;       //类名
@property (nonatomic, copy) NSString *methodName;      //方法名
@property (nonatomic, assign) BOOL isClassMethod;        //是否是类方法
@property (nonatomic, assign) NSTimeInterval timeCost;   //时间消耗
@property (nonatomic, assign) NSUInteger callDepth;      //Call 层级
@property (nonatomic, copy) NSString *path;              //路径
@property (nonatomic, assign) BOOL lastCall;             //是否是最后一个 Call
@property (nonatomic, assign) NSUInteger frequency;      //访问频次
@property (nonatomic, copy) NSArray <CYLCallTraceTimeCostModel *> *subCosts;

#ifdef __aarch64__
- (NSString *)des;
+ (void)printCallTrace;
+ (NSArray<CYLCallTraceTimeCostModel *>*)loadRecords;
#endif

@end

NS_ASSUME_NONNULL_END
