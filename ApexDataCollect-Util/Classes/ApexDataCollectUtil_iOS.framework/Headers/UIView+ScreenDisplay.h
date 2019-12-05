//
//  UIView+ScreenDisplay.h
//  ApexDataCollect
//
//  Created by gary on 2019/3/20.
//  Copyright © 2019 yulin chi. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (ScreenDisplay)

/**
 判断view是否显示在屏幕上
 @param indexPath 若view在cell上 则传入indexPath z否则传nil
 */
- (BOOL)isDisplayedInScreenOnCell:(NSIndexPath*)indexPath;
@end

NS_ASSUME_NONNULL_END
