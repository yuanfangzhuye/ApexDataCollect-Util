//
//  ApexLoading.h
//  Apex
//
//  Created by yulin chi on 2018/7/20.
//  Copyright © 2018年 Gary. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ApexLoadingView : UIView
+ (void)showOnView:(UIView*)superView Message:(NSString*)message;
+ (void)hideOnView:(UIView*)superView;
@end
