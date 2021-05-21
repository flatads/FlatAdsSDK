//
//  FAObserverProtocol.h
//  FlatAds_sdk
//
//  Created by EkoHu on 2021/4/14.
//  Copyright © 2021 FlatAds. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol FAObserverProtocol <NSObject>
//注册所有可支持的protocol
-(BOOL)addObserver:(id)observer;
//仅注册指定的protocol
-(BOOL)addObserver:(id)observer protocol:(Protocol *)protocol;

//删除所有包含的protocol
-(void)removeObserver:(id)observer;
//仅删除指定的protocol
-(void)removeObserver:(id)observer protocol:(Protocol *)protocol;

//是否要添加查询支持哪些protocol和是否支持某个protocol？ 还是软约定，大家知道我支持哪些protocol

@end
