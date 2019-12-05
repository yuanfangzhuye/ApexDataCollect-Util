//
//  APEXBaseTransitionAnimation.h
//  APEXTransitioning
//
//  Created by 迟钰林 on 2017/6/16.
//  Copyright © 2017年 迟钰林. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, APEXTransitionStyle) {
    APEXTransitionStyle_Pop,
    APEXTransitionStyle_Push,
    APEXTransitionStyle_Present,
    APEXTransitionStyle_Dismiss
};

@interface APEXBaseTransitionAnimation : NSObject
- (void)showAnimationWithDuration:(CGFloat)duration transitionStyle:(APEXTransitionStyle)style andtransitionContext:(id<UIViewControllerContextTransitioning>)transitionContext;
@end
