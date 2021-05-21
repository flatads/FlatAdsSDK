//
//  FAAdNativeView.h
//  FlatAds_sdk
//
//  Created by EkoHu on 2021/4/20.
//  Copyright © 2021 FlatAds. All rights reserved.
//

/**
 * Native Ad View
 * @note Support Image / Video
 */

#import "FAAdBaseView.h"

#import "FAInfoIconButton.h"

NS_ASSUME_NONNULL_BEGIN

@class FAAdNativeView;

typedef void(^FALoadNativeAdBlock)(FAAdNativeView * _Nullable nativeView, NSError *_Nullable error);

@protocol FANativeAdViewDelegate <NSObject>

@optional

/// This method is called when adView ad slot loaded successfully.
- (void)nativeAdViewLoadSuccess:(nonnull FAAdNativeView *)nativeView;

/// This method is called when adView ad slot failed to load.
- (void)nativeAdView:(nonnull FAAdNativeView *)nativeView didLoadFailWithError:(nonnull NSError *)error;

/// This method is called when ad is clicked.
- (void)nativeAdViewDidClick:(nonnull FAAdNativeView *)nativeView;

/// This method is called when ad is Closed.
- (void)nativeAdViewDidClosed:(nonnull FAAdNativeView *)nativeView;

@end

@interface FAAdNativeView : FAAdBaseView

/**
 * Reference to the object that implements FANativeAdViewDelegate protocol; will receive load events for the given unitId.
 */
@property (nonatomic, weak, nullable) id<FANativeAdViewDelegate> delegate;

/// media view
@property (nonatomic, readonly, strong) UIView *mediaView;

/// logo image
@property (nonatomic, readonly, strong) UIImageView *logoImageView;

/// ad title
@property (nonatomic, readonly, strong) UILabel *titleLabel;

/// ad desc
@property (nonatomic, readonly, strong) UILabel *contentLabel;

/// info button
@property (nonatomic, readonly, strong) FAInfoIconButton *infoIconButton;

/// call to action button
@property (nonatomic, readonly, strong) UIButton *ctaButton;

/// close button
@property (nonatomic, readonly, strong) UIButton *closeButton;


/// Load ad data
/// @param unitModel unitModel
/// @param completion request completion
+ (void)loadWithAdUnitModel:(FAAdUnitModel *)unitModel completionHandler:(FALoadNativeAdBlock)completion;

/// Start rendering the view
- (void)renderAdData;

@end

NS_ASSUME_NONNULL_END
