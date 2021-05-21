//
//  FANetInfoModel.h
//  FlatAds_sdk
//
//  Created by EkoHu on 2021/5/6.
//  Copyright © 2021 FlatAds. All rights reserved.
//

/**
 * 记录协议请求网络信息
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FANetInfoModel : NSObject
/// 请求开始到结束/返回错误 所耗费的时间 单位： ms  取整
@property(nonatomic, assign) NSInteger respondTimes;
@end

NS_ASSUME_NONNULL_END
