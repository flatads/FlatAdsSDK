//
//  FANetworkStatusModel.h
//  FlatAds_sdk
//
//  Created by EkoHu on 2021/4/14.
//  Copyright © 2021 FlatAds. All rights reserved.
//

/**
 * 网络状态信息
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger
{
    FANetworkType_NotReach,
    FANetworkType_Wifi,
    FANetworkType_2G,
    FANetworkType_3G,
    FANetworkType_4G,
    FANetworkType_XG,
    FANetworkType_Unknow,
}FANetworkType;

typedef enum : NSUInteger
{
    FACarrierType_ChinaMobile,          // 移动
    FACarrierType_ChinaUnicom,          // 联通
    FACarrierType_ChinaTelecomk,        // 电信
    FACarrierType_ChinaTietong,         // 铁通
    FACarrierType_Unknow,               // 未知
} FACarrierType;

@interface FANetworkStatusModel : NSObject
@property FANetworkType oldType;
@property FANetworkType newType;
+(NSString*)networkTypeStrWithNetworkType:(FANetworkType)type;
@end

NS_ASSUME_NONNULL_END
