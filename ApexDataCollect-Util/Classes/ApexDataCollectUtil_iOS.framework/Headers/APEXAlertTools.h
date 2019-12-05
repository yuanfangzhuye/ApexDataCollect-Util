//
//  APEXAlertTools.h
//  ApexDataCollectUtil-iOS
//
//  Created by gary on 2019/4/24.
//  Copyright © 2019 Apex. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface APEXAlertTools : NSObject
+ (void)showMessage:(NSString*)msg viewController:(UIViewController*)vc;
@end

NS_ASSUME_NONNULL_END
