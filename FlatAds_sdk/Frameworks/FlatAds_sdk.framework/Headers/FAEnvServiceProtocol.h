//
//  FAEnvServiceProtocol.h
//  FlatAds_sdk
//
//  Created by EkoHu on 2021/4/15.
//  Copyright © 2021 FlatAds. All rights reserved.
//

/**
 * 切换环境
 */

#import "FABaseServiceProtocol.h"
#import "FABaseEnvironment.h"

@protocol FAEnvServiceProtocol <FABaseServiceProtocol>
/// Config
-(void)autoConfig;

/// Env
-(FAEnvironmentType)envType;
-(__kindof FABaseEnvironment*)env;

/// IO
-(void)saveEnvType:(FAEnvironmentType)type;
@end
