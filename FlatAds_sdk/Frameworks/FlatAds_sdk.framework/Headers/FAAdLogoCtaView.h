//
//  FAAdLogonCtaView.h
//  FlatAds_sdk
//
//  Created by chenwenhao on 2021/4/22.
//  Copyright © 2021 FlatAds. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^onClickCtaButtonBlock)(void);

@interface FAAdLogoCtaView : UIView

//@property (nonatomic, copy) onClickCtaButtonBlock clickBlock;

@property (nonatomic, copy) NSString *logoUrl;

@property (nonatomic, copy) NSString *ctaTitle;

@end

NS_ASSUME_NONNULL_END
