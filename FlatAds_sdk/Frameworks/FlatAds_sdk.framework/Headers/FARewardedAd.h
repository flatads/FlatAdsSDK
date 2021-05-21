//
//  FARewardedAd.h
//  FlatAds_sdk
//
//  Created by chenwenhao on 2021/5/12.
//  Copyright © 2021 FlatAds. All rights reserved.
//

#import "FAAdViewProtocol.h"

@class FARewardedAd;
@class FAAdRewardUnitModel;

NS_ASSUME_NONNULL_BEGIN

typedef void(^FARewardedAdRequestBlock)(FARewardedAd * _Nullable rewardedAd, NSError *_Nullable error);

@protocol FARewardedAdDelegate <NSObject>

@optional

/// This method is called when adView ad slot failed to load.
- (void)rewardedAd:(FARewardedAd *)rewardedAd didFailWithError:(NSError * __nullable)error;

/// This method is called when ad is clicked.
- (void)rewardedAdDidClicked:(nonnull FARewardedAd *)rewardedAd;

/// This method is called when ad is Closed.
- (void)rewardedAdDidClosed:(nonnull FARewardedAd *)rewardedAd;

/// This method is called when the user earns a reward.
- (void)rewardVideoAdDidRewardEffective:(nonnull FARewardedAd *)rewardedAd;

@end

@interface FARewardedAd : NSObject<FAAdViewProtocol>

/**
 * This is a method to initialize an FAAdBaseView with the given unit id.
 * @param model Ad view request parameter info.
 * @return object
 */
- (nonnull instancetype)initWithUnitModel:(nonnull FAAdRewardUnitModel *)model;

/**
 * Reference to the object that implements FAAdInterstitialDelegate protocol; will receive load events for the given unitId.
 */
@property (nonatomic, weak, nullable) id<FARewardedAdDelegate> delegate;

/**
 Display Rewarded ad.
 @param rootViewController : root view controller for displaying ad.
 @return : whether it is successfully displayed.
 */
- (BOOL)presentAdFromRootViewController:(UIViewController *)rootViewController;


+ (void)loadWithAdUnitModel:(FAAdRewardUnitModel *)unitModel completionHandler:(FARewardedAdRequestBlock)completion;

@end

NS_ASSUME_NONNULL_END


