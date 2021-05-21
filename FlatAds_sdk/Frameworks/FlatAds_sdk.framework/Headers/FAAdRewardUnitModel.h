//
//  FAAdRewardUnitModel.h
//  FlatAds_sdk
//
//  Created by chenwenhao on 2021/5/18.
//  Copyright © 2021 FlatAds. All rights reserved.
//

#import "FAAdUnitModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface FAAdRewardUnitModel : FAAdUnitModel

/// The rewarded customer ID
@property (nonatomic, copy) NSString *customerId;

/// A rewarded unique id
@property (nonatomic, copy) NSString *uniqueId;

/// Type of the reward.
@property(nonatomic, copy) NSString *rewardType;

/// Value of the reward.
@property(nonatomic, copy) NSString *rewardValue;

/// Captcha code, used for callback chain validation
@property (nonatomic, copy) NSString *verifier;

/// Custom information: json string
@property (nonatomic, copy) NSString *extinfo;

@end

NS_ASSUME_NONNULL_END
