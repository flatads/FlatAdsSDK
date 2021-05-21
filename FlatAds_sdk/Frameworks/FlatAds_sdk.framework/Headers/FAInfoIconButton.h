//
//  FAInfoIconButton.h
//  FlatAds_sdk
//
//  Created by EkoHu on 2021/4/22.
//  Copyright © 2021 FlatAds. All rights reserved.
//

/**
 * 广告右上角信息按钮，点击展开扩展信息
 */

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, FAInfoIconButtonPosition) {
    FAInfoIconButtonPositionLeft = 0,
    FAInfoIconButtonPositionRight
};

typedef void(^onClickInfoJumpBlock)(void);

@interface FAInfoIconButton : UIView

/// 跳转 block 点击第一次展开详细信息 点击第二次则跳转
@property (nonatomic, copy) onClickInfoJumpBlock jumpBlock;

/// 详细信息
@property (nonatomic, copy) NSString *infoText;

/// 按钮在父视图位置
@property (nonatomic, assign) FAInfoIconButtonPosition position;

/// 是否展开详细信息
@property (nonatomic, readonly, assign) BOOL isExpand;

/// 是否需要切换成白色样式 默认 YES
@property (nonatomic, assign) BOOL shouldChangWhitStyle;

@end

NS_ASSUME_NONNULL_END
