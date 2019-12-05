//
//  ApexMutableArray.h
//  ApexDataCollect
//
//  Created by yulin chi on 2018/12/28.
//  Copyright © 2018 yulin chi. All rights reserved.
//

#import "ApexMultiThreadObject.h"

NS_ASSUME_NONNULL_BEGIN

@protocol ApexMuitlThreadMutableArrayProtocal <NSObject>
@optional
- (void)removeAllObjects;
- (id)lastObject;
- (id)objectAtIndex:(NSUInteger)index;
- (NSUInteger)count;
- (void)addObject:(id)anObject;
- (void)insertObject:(id)anObject atIndex:(NSUInteger)index;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(NSUInteger)index;
- (void)replaceObjectAtIndex:(NSUInteger)index withObject:(id)anObject;
- (void)removeObjectsInArray:(NSArray *)otherArray;
- (void)addObjectsFromArray:(NSArray *)otherArray;
- (void)enumerateObjectsUsingBlock:(void (NS_NOESCAPE ^)(id obj, NSUInteger idx, BOOL *stop))block API_AVAILABLE(macos(10.6), ios(4.0), watchos(2.0), tvos(9.0));
@end

@interface ApexMutableArray : ApexMultiThreadObject <ApexMuitlThreadMutableArrayProtocal>

@end

NS_ASSUME_NONNULL_END
