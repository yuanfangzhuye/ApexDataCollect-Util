//
//  PEXCommonUtil.h
//  ChinapexAnalytics
//
//  Created by Cedric Wu on 2017/7/20.
//  Copyright © 2017年 Cedric Wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface APEXCommonUtil : NSObject

#pragma mark - 硬件相关
+ (NSString *)getBluetoothMAC;
+ (NSString*)iphoneType;

#pragma mark - IP相关
+ (NSString *)getIPAddress:(BOOL)preferIPv4;

#pragma mark - 正则表达式相关
+ (BOOL)match:(NSString *)str withRegex:(NSString *)regexString;

+ (BOOL)isVaildUrl:(NSString *)str;

#pragma mark - Bundle
+ (NSBundle *)getBundle;
+ (NSString *)getDocumentsDirectory;
+ (BOOL)isPathExist:(NSString *)path;
+ (void)createFileAt:(NSString *)path;
+ (NSData *)loadFileAt:(NSString *)path;

#pragma mark - Localized String
+ (NSString *)getLocalizedStringBy:(NSString *)key;

#pragma mark - UIViewController
+ (UIViewController *)getCurrentVC:(UIView*)view;
+ (UIViewController *)topViewController;
+ (UIViewController *)viewControllerOfView:(UIView*)view;

#pragma mark - UIView
+ (UITableView*)tableViewForCell:(UITableViewCell*)cell;
+ (UICollectionView *)collctionViewForItem:(UICollectionViewCell*)item;
+ (NSIndexPath*)indexForCell:(UIView*)cell;
+ (CGFloat)statusHeight;
+ (BOOL)isViewDisplayedInScreen:(UIView*)view;

/* 获取view的md5 cell:MD5(pageClassName+ViewPath+DataPath)   other: MD5(ViewPath) */
+ (NSString *)md5_getSpecificID:(UIView *)view viewPath:(NSString*)viewPath pageName:(NSString*)pageClassName;
+ (NSString*)listPathFromWholePath:(NSString*)wholePath;
#pragma mark - NetWork

/**
 获取当前网络状
 */
+ (NSString *)getNetType;

+ (NSArray *)splitArray: (NSArray *)array withSubSize : (int)subSize;

#pragma mark - 转化工具
+ (NSString*)dictToJsonString:(NSDictionary*)dict;
@end
