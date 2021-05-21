//
//  FAImageInfoModel.h
//  FlatAds_sdk
//
//  Created by EkoHu on 2021/4/16.
//  Copyright © 2021 FlatAds. All rights reserved.
//

/**
 广告图片信息
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FAImageInfoModel : NSObject
@property (nonatomic, assign) NSUInteger w;
@property (nonatomic, assign) NSUInteger h;
@property (nonatomic, copy) NSString *url;
@end

NS_ASSUME_NONNULL_END
