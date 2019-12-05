//
//  ApexMultiThreadObject.h
//  ApexDataCollect
//
//  Created by yulin chi on 2018/12/28.
//  Copyright © 2018 yulin chi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ApexMultiThreadObject : NSObject
@property (nonatomic, strong) NSObject *container; /**< 外部声明的数组/字典 具体子类实例化 */
@property (nonatomic, strong) dispatch_queue_t dispatchQueue; /**<  */
@end

NS_ASSUME_NONNULL_END
