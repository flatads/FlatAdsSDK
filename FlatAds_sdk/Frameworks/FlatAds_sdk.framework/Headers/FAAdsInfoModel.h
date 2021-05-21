//
//  FAAdsInfoModel.h
//  FlatAds_sdk
//
//  Created by EkoHu on 2021/4/16.
//  Copyright © 2021 FlatAds. All rights reserved.
//

/**
 * 广告返回信息
 */

#import <Foundation/Foundation.h>
#import "FAImageInfoModel.h"
#import "FAIconInfoModel.h"
#import "FAVideoInfoModel.h"
#import "FARewardedInfoModel.h"

NS_ASSUME_NONNULL_BEGIN

/// 广告类型
typedef NS_ENUM(NSUInteger, FAAdShowType) {
    FAAdShowTypeNone,
    FAAdShowTypeHtml = 1, // html
    FAAdShowTypeImage, // image
    FAAdShowTypeVideo, // video
    FAAdShowTypeVast,
    FAAdShowTypePlayable
};

/// 跳转类型
typedef NS_ENUM(NSUInteger, FAAdActionType) {
    FAAdActionTypeNone,
    FAAdActionTypeBrowser = 1,
    FAAdActionTypeMarket,
    FAAdActionTypeApk
};


@interface FAAdsInfoModel : NSObject
/// 广告类型：native、banner、video
@property (nonatomic, copy) NSString *adType;
/// 广告内容类型
@property (nonatomic, copy) NSString *showType;
/// 展示id
@property (nonatomic, copy) NSString *impId;
/// 广告位id
@property (nonatomic, copy) NSString *unitid;
/// dsp名称
@property (nonatomic, copy) NSString *platform;
/// 广告机会id
@property (nonatomic, copy) NSString *campaignId;
/// 素材id
@property (nonatomic, copy) NSString *creativeId;
/// 广告动作类型，browser :在浏览器打开, market:google play, apk:App端内下载
@property (nonatomic, copy) NSString *action;
/// 标题
@property (nonatomic, copy) NSString *title;
/// 描述
@property (nonatomic, copy) NSString *desc;
/// 包名
@property (nonatomic, copy) NSString *appBundle;
/// 跳转链
@property (nonatomic, copy) NSString *deepLink;
/// 被推广的app版本
@property (nonatomic, copy) NSString *appVer;
/// 广告链接
@property (nonatomic, copy) NSString *link;
/// 按钮文案
@property (nonatomic, copy) NSString *adBtn;
/// 刷新时间间隔
@property (nonatomic, assign) NSTimeInterval refreshInterval;
/// 请求id
@property (nonatomic, copy) NSString *reqId;
///
@property (nonatomic, copy) NSString *protocal;
/// 展示追踪链数组
@property (nonatomic, strong) NSArray<NSString*> *impTrackers;
/// 点击追踪链数组
@property (nonatomic, strong) NSArray<NSString*> *clickTrackers;
///
@property (nonatomic, copy) NSString *appName;
/// 被推广的app的图标
@property (nonatomic, copy) NSString *appIcon;
/// 胜出的dsp id
@property (nonatomic, assign) NSUInteger winDspId;
/// 被推广的app大小
@property (nonatomic, copy) NSString *appSize;
/// 被推广的app分类
@property (nonatomic, copy) NSString *appCategory;
/// 被推广包的广告主名称
@property (nonatomic, copy) NSString *advertiserName;
/// 品牌置顶优先级
@property (nonatomic, assign) NSUInteger priority;
/// 品牌置顶展示次数
@property (nonatomic, assign) NSUInteger showTimes;

#pragma mark 广告位上的配置

/// 0表示非静音; 1表示静音
@property (nonatomic, assign) NSUInteger isMute;
/// 表示两个广告之间的刷新时间，单位s 0表示不刷新；其他表示刷新描述
@property (nonatomic, assign) NSUInteger refreshTime;
/// 是否需要cta点击
@property (nonatomic, assign) NSUInteger isCta;
/// 弹出按钮的表达信息
//@property (nonatomic, copy) NSString *ctaDesc;
// 多久后可以skip广告, 单位s
@property (nonatomic, assign) NSUInteger skipAfter;

/// 根据广告类型, 获取相应的数据
@property (nonatomic, copy) NSString *html;
///
@property (nonatomic, copy) NSString *xml;
/// 图片object
@property (nonatomic, strong) NSArray<FAImageInfoModel*> *image;
/// icon object
@property (nonatomic, strong) FAIconInfoModel *icon;
/// video object
@property (nonatomic, strong) FAVideoInfoModel *video;
/// 激励视频信息
@property (nonatomic, strong) FARewardedInfoModel *rewardInfo;



#pragma mark - Custom

@property (nonatomic, assign) FAAdShowType adShowType;

@property (nonatomic, assign) FAAdActionType actionType;

/// 根据 adShowType 返回不同类型数据
@property (nonatomic, copy) NSString *sourceUrl;


@end

NS_ASSUME_NONNULL_END
