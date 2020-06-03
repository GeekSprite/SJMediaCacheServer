//
//  SJResourcePartialContent.h
//  SJMediaCacheServer_Example
//
//  Created by BlueDancer on 2020/6/2.
//  Copyright © 2020 changsanjiang@gmail.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface SJResourcePartialContent : NSObject
- (instancetype)initWithName:(NSString *)name;
- (instancetype)initWithName:(NSString *)name offset:(NSUInteger)offset;

@property (nonatomic, copy, readonly) NSString *name;
@property (nonatomic, readonly) NSUInteger offset;
@property (nonatomic, readonly) NSUInteger length;

- (void)updateLength:(NSUInteger)length;

@end
NS_ASSUME_NONNULL_END
