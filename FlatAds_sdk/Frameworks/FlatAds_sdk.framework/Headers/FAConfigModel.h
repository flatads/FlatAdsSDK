//
//  FAConfigModel.h
//  FlatAds_sdk
//
//  Created by EkoHu on 2021/4/29.
//  Copyright © 2021 FlatAds. All rights reserved.
//

/**
 * 云控配置信息
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FAConfigModel : NSObject
/// 上传日志的概率（即SDK上报）
@property (nonatomic, assign) CGFloat uploadLogRatio;
/// 是否启用gzip压缩上报数据，再请求
@property (nonatomic, assign) BOOL uploadLogCompression;
/// 上次请求的update time（用于请求传参）
@property (nonatomic, assign) NSInteger lastUpdateTime;
@end

NS_ASSUME_NONNULL_END
