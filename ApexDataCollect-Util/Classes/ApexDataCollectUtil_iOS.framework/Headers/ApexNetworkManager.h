//
//  ApexNetworkManager.h
//  ApexTracker
//
//  Created by 李超 on 2018/10/19.
//  Copyright © 2018年 LiChao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ApexBaseNetwork.h"

//网络状态
typedef NS_ENUM(NSInteger, ApexNetWorkStatus) {
    ApexNetWorkStatus_NotReachable = 0,
    ApexNetWorkStatus_WIFI,
    ApexNetWorkStatus_4G,
    ApexNetWorkStatus_3G,
    ApexNetWorkStatus_2G,
    ApexNetWorkStatus_GPRS,
    ApexNetWorkStatus_UNKNOW
};

@class ApexModel;

NS_ASSUME_NONNULL_BEGIN

@interface ApexNetworkManager : NSObject
@property (nonatomic, assign, readonly) ApexNetWorkStatus currentNetStatus; /**< 当前网络状态 */
@property (nonatomic, copy, readonly) NSString *domain; /**<  */

+ (instancetype)sharedInstance;

//当前网络状态
- (ApexNetWorkStatus)internetStatus;
//单个上传
- (void)uploadDataToServer:(id)datas responseSuccess:(callBackSuccess)success responseFailed:(callBackFailed)failed;

- (void)startNetworkMonitor;
- (void)setDomainForReq:(NSString*)domain;
@end

NS_ASSUME_NONNULL_END
