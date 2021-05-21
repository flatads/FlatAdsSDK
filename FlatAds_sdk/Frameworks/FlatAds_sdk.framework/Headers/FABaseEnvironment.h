//
//  FABaseEnvironment.h
//  FlatAds_sdk
//
//  Created by EkoHu on 2021/4/14.
//  Copyright © 2021 FlatAds. All rights reserved.
//

/**
 * 环境配置信息
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger
{
    FAEnvironmentType_Dev,
    FAEnvironmentType_Test,
    FAEnvironmentType_Production,
    FAEnvironmentType_Count,
} FAEnvironmentType;

@interface FABaseEnvironment : NSObject
/// 基本信息
@property (nonatomic, copy, readonly) NSString *envName;        // 环境名(no wording)
@property (nonatomic, assign, readonly) BOOL isProduction;      // 是否为现网

/// Domain
@property (nonatomic, copy, readonly) NSString *cgiUrl;         // 协议URL
@property (nonatomic, copy, readonly) NSString *imageUrlPrefix;  // 图片URL
@property (nonatomic, copy, readonly) NSString *reportUrl;      // 上报URL
@property (nonatomic, copy, readonly) NSString *logUploadUrl;    // 日志文件上传专用的链接
@property (nonatomic, copy, readonly) NSString *webUrlPrefix;    // app内部跳转网页前缀，如：about页，欢迎页各种权限页
@end

NS_ASSUME_NONNULL_END
