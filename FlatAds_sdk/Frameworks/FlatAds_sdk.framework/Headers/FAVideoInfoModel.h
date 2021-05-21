//
//  FAVideoInfoModel.h
//  FlatAds_sdk
//
//  Created by EkoHu on 2021/4/16.
//  Copyright © 2021 FlatAds. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, FAVideoInfoType) {
    FAVideoInfoType16x9,
    FAVideoInfoType9x16,
};

NS_ASSUME_NONNULL_BEGIN

@interface FAVideoInfoModel : NSObject
/// 视频宽度
@property (nonatomic, assign) CGFloat w;
/// 视频高度
@property (nonatomic, assign) CGFloat h;
/// 视频播放URL
@property (nonatomic, copy) NSString *url;
/// 视频大小
@property (nonatomic, assign) NSUInteger size;
/// 视频时长
@property (nonatomic, assign) NSUInteger duration;

/// 其他信息
@property (nonatomic, assign) NSUInteger adBtnJumpType;


@property (nonatomic, copy) NSArray<NSString *> *imp_trackers;

@property (nonatomic, copy) NSArray<NSString *> *imp2_trackers;

@property (nonatomic, copy) NSArray<NSString *> *imp5_trackers;

@property (nonatomic, copy) NSArray<NSString *> *imp7_trackers;

@property (nonatomic, copy) NSArray<NSString *> *impf_trackers;


/// 自定义字段
@property (nonatomic, assign) FAVideoInfoType videoType;

@end

NS_ASSUME_NONNULL_END
