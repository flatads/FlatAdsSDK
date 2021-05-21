//
//  FAAdBannerUnitModel.h
//  FlatAds_sdk
//
//  Created by chenwenhao on 2021/4/23.
//  Copyright © 2021 FlatAds. All rights reserved.
//

#import "FAAdUnitModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, FAAdBannerStyle) {
    FAAdBannerStyleDefault, // 320x50
    FAAdBannerStyleBig, // 320x250
};

@interface FAAdBannerUnitModel : FAAdUnitModel

/// Banner size Defaule FAAdBannerStyleDefault
@property (nonatomic, assign) FAAdBannerStyle sizeType;

@end

NS_ASSUME_NONNULL_END
