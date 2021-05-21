//
//  FABaseServiceProtocol.h
//  FlatAds_sdk
//
//  Created by EkoHu on 2021/4/14.
//  Copyright © 2021 FlatAds. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol FABaseServiceProtocol<NSObject>
-(void)reset;
-(nonnull NSString*)serviceID;
@end
