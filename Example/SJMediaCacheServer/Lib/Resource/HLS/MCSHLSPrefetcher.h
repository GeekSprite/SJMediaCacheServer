//
//  MCSHLSPrefetcher.h
//  SJMediaCacheServer_Example
//
//  Created by BlueDancer on 2020/6/10.
//  Copyright © 2020 changsanjiang@gmail.com. All rights reserved.
//

#import "MCSDefines.h"
@class MCSHLSResource;

NS_ASSUME_NONNULL_BEGIN

@interface MCSHLSPrefetcher : NSObject<MCSResourcePrefetcher>
- (instancetype)initWithResource:(__weak MCSHLSResource *)resource request:(NSURLRequest *)request;

@property (nonatomic, weak, nullable) id<MCSResourcePrefetcherDelegate> delegate;

@property (nonatomic, readonly) BOOL isPrepared;
@property (nonatomic, readonly) BOOL isFinished;
@property (nonatomic, readonly) BOOL isClosed;

- (void)prepare;
- (void)close;
@end

NS_ASSUME_NONNULL_END
