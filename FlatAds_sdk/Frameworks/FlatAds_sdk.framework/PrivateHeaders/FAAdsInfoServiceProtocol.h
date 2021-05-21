//
//  FAAdsInfoServiceProtocol.h
//  FlatAds_sdk
//
//  Created by EkoHu on 2021/4/15.
//  Copyright © 2021 FlatAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FABaseServiceProtocol.h"
#import "FAObserverProtocol.h"
#import "FAAdsInfoModel.h"
#import "FANetInfoModel.h"

@protocol FAAdsInfoServiceDelegate <NSObject>
@optional
/// 广告数据回调
-(void)onRequestAdsInfoFailed:(NSInteger)code msg:(nullable NSString*)msg unitId:(nonnull NSString *)unitId;
-(void)onRequestAdsInfoSuccess:(nonnull NSString *)unitId;

/// 广告追踪回调
-(void)onTrackAdsInfoFailed:(NSInteger)code msg:(nullable NSString*)msg trackUrl:(nonnull NSString *)trackUrl;
-(void)onTrackAdsInfoSuccess:(nonnull NSString *)trackUrl;
@end

@protocol FAAdsInfoServiceProtocol <FABaseServiceProtocol, FAObserverProtocol>
/// 请求广告数据
-(BOOL)requestWithUnitId:(nonnull NSString *)unitId appendInfo:(nullable NSDictionary *)appendInfo;
-(nullable NSArray<FAAdsInfoModel*>*)getAdsWithUnitId:(nonnull NSString *)unitId;
-(nullable FANetInfoModel*)getNetInfoWithUnitId:(nonnull NSString *)unitId;

/// 广告追踪
-(BOOL)trackUrls:(nonnull NSArray<NSString*>*)urls;
@end
