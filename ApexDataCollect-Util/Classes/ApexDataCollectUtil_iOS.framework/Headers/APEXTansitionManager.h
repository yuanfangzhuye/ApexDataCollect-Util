//
//  APEXBaseTansition.h
//  APEXTransitioning
//
//  Created by 迟钰林 on 2017/6/16.
//  Copyright © 2017年 迟钰林. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "APEXBaseTransitionAnimation.h"

@interface APEXTansitionManager : NSObject<UIViewControllerAnimatedTransitioning>

+ (id<UIViewControllerAnimatedTransitioning>)transitionObjectwithTransitionStyle:(APEXTransitionStyle)style animateDuration:(CGFloat)duration andTransitionAnimation:(APEXBaseTransitionAnimation*)animator;

@end
