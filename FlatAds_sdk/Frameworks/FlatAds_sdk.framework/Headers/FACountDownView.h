//
//  FACountView.h
//  FlatAds_sdk
//
//  Created by chenwenhao on 2021/4/24.
//  Copyright © 2021 FlatAds. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^FADidCountdownOverBlock)(void);

typedef void(^FADidCountdownCloseBlock)(void);

typedef NS_ENUM(NSUInteger, FACountDownType) {
    FACountDownTypeInterstitial,
    FACountDownTypeRewarded,
};

@interface FACountDownView : UIView

@property (nonatomic, assign) NSInteger interval;

@property (nonatomic, copy) FADidCountdownOverBlock countdownOverBlock;

@property (nonatomic, copy) FADidCountdownCloseBlock closeBlock;



- (void)start;

- (void)invalidate;

- (void)updateStyleWithType:(FACountDownType)type;

- (void)updateWhiteColorStyle:(BOOL)isWhite;

@end

NS_ASSUME_NONNULL_END
