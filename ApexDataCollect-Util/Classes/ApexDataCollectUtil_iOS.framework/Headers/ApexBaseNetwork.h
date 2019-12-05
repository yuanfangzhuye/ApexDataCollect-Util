//
//  ApexBaseNetwork.h
//  ApexTracker
//
//  Created by 李超 on 2018/10/17.
//  Copyright © 2018年 LiChao. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^callBackSuccess)(NSData* data, NSURLResponse *response);
typedef void(^callBackFailed)(NSError *connErr, NSURLResponse *response);

typedef NS_ENUM(NSInteger,ApexHTTPmimeType){
    ApexHTTPmimeTypeImgJPEG,
    ApexHTTPmimeTypeImgPNG,
};

@interface ApexBaseNetwork : NSObject

+ (instancetype)sharedInstanceNetwork;

//GET
- (NSURLRequest *)getRequestURL:(NSString *)url params:(id)params responseSuccess:(callBackSuccess)success fail:(callBackFailed)failed;

//POST
- (NSURLRequest *)postRequestURL:(NSString *)url params:(id)params responseSuccess:(callBackSuccess)success fail:(callBackFailed)failed;

/**
 *  多文件上传的主方法
 *
 *  @param urlString      文件上传的地址
 *  @param serverName 服务器接收文件的字段名
 *  @param filenames      上传文件名称的数组
 *  @param datas          上传文件的数组
 *  @param textDict       文件上传的附带信息
 *  @param mimeType       媒体类型
 */
- (void)uploadFilesWithURLString:(NSString *)urlString serverName:(NSArray <NSString *>*)serverName filenames:(NSArray <NSString *>*)filenames datas:(NSArray <NSData *>*)datas textDict:(NSDictionary *)textDict mimeType:(ApexHTTPmimeType)mimeType responseSuccess:(callBackSuccess)success fail:(callBackFailed)failed;


@end

