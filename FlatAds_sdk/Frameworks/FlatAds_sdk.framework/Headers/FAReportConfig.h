//
//  FAReportConfig.h
//  FlatAds_sdk
//
//  Created by EkoHu on 2021/4/14.
//  Copyright © 2021 FlatAds. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger
{
    FAReportServiceEnv_Dev,
    FAReportServiceEnv_Test,
    FAReportServiceEnv_Product,
} FAReportServiceEnv;

@protocol FAReportChannelProtocol <NSObject>
-(void)reportWithData:(NSString*)data;
@end

@interface FAReportConfig : NSObject
@property(assign)FAReportServiceEnv env;
@property(weak)id<FAReportChannelProtocol> channel;
@property(strong)NSString* uploadURL;
@end

NS_ASSUME_NONNULL_END
