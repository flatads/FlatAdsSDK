//
//  FAReportServiceProtocol.h
//  FlatAds_sdk
//
//  Created by EkoHu on 2021/4/14.
//  Copyright © 2021 FlatAds. All rights reserved.
//

/**
 * 上报(此模块线程安全)
 */

#import <Foundation/Foundation.h>
#import "FABaseServiceProtocol.h"
#import "FAReportConfig.h"
#import "FAReportModule.h"

@protocol FAReportServiceProtocol <FABaseServiceProtocol>
/// 上报配置
-(void)config:(FAReportConfig*)cfg;
/// 延迟上报
-(void)reportEvent:(NSString*)eventID attri:(NSDictionary*)attri;
@end
