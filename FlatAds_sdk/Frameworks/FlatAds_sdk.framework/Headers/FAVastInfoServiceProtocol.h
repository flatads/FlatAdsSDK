//
//  FAVastInfoServiceProtocol.h
//  FlatAds_sdk
//
//  Created by EkoHu on 2021/4/26.
//  Copyright © 2021 FlatAds. All rights reserved.
//

/**
 * 解析VAST协议信息，取部分我们关心的信息
 * @note https://iabtechlab.com/standards/vast
 */

#import <Foundation/Foundation.h>
#import "FABaseServiceProtocol.h"
#import "FAObserverProtocol.h"
#import "FAVastInfoModel.h"

@protocol FAVastInfoServiceDelegate <NSObject>
@optional
-(void)onParseVastInfoFailed:(NSInteger)code msg:(nullable NSString*)msg;
-(void)onParseVastInfoSuccess;
@end

@protocol FAVastInfoServiceProtocol <FABaseServiceProtocol, FAObserverProtocol>
/// 同步解析xml
- (void)parseVastXml:(nonnull NSString *)xml;
/// 获取解析xml后的信息
- (nullable FAVastInfoModel *)getVastInfo;
@end
