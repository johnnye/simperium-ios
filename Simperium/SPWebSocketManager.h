//
//  SPWebSocketManager
//  Simperium
//
//  Created by Michael Johnston on 12-08-06.
//  Copyright 2011 Simperium. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SPNetworkProvider.h"

@class Simperium;
@class SPBucket;
@class SRWebSocket;
@class SRWebSocketChannel;

@interface SPWebSocketManager : NSObject <SPNetworkProvider> {
    BOOL open;
    NSMutableArray *webSocketChannels;
    SRWebSocket *webSocket;
}

@property (nonatomic, retain) SRWebSocket *webSocket;

+(void)setNetworkActivityIndicatorEnabled:(BOOL)enabled;
-(id)initWithSimperium:(Simperium *)s appURL:(NSString *)url clientID:(NSString *)cid;
-(void)loadChannelsForBuckets:(NSDictionary *)bucketList overrides:(NSDictionary *)overrides;

@end