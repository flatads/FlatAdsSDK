//
//  FAVastInfoModel.h
//  FlatAds_sdk
//
//  Created by EkoHu on 2021/4/26.
//  Copyright © 2021 FlatAds. All rights reserved.
//

/**
 * 解析Vast协议返回的数据（部分我们使用到的）
 */

#import <Foundation/Foundation.h>
#import "FAVideoInfoModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface FAVastInfoModel : NSObject
/// 基本信息
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, copy) NSString *clickThrough;
@property (nonatomic, strong) NSArray<NSString *> *clickTrackings;

@property (nonatomic, copy) NSArray<NSString *> *impTrackers;

/// 视频信息
@property (nonatomic, strong) FAVideoInfoModel *videoInfo;
@end

NS_ASSUME_NONNULL_END
