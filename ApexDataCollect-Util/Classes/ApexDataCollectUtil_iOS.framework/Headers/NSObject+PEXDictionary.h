//
//  NSObject+Dictionary.h
//  ApexCollect
//
//  Created by yulin chi on 2018/10/23.
//  Copyright © 2018 yulin chi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (PEXDictionary)
- (NSDictionary*)pex_toDict;
- (NSString *)pex_toJSON;
@end

NS_ASSUME_NONNULL_END
