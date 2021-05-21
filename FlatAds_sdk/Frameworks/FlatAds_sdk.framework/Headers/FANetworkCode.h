//
//  FANetworkCode.h
//  FlatAds_sdk
//
//  Created by EkoHu on 2021/4/14.
//  Copyright © 2021 FlatAds. All rights reserved.
//

/**
 * 此处约定协议用到的返回码
 */

#ifndef FANetworkCode_h
#define FANetworkCode_h

#pragma mark - HTTP
// 通用 - 系统
#define FANetworkCode_Success          (0)      // 成功
#define FANetworkCode_Timeout          (900000) // 超时
#define FANetworkCode_ParserFailed     (900001) // 解析错误
#define FANetworkCode_ErrorParam       (900002) // 请求参数错误
#define FANetworkCode_EmptyParam       (900003) // 请求数据包体为空
#define FANetworkCode_Unknow           (900004) // 未知错误
#define FANetworkCode_ChannelUnReady   (900005) // 通道还没搭建完毕
#define FANetworkCode_NoPayload        (900006) // 包体没有长度(node端的pb出错经常弄出这种问题)
#define FANetworkCode_NoNetwork        (900010) // 无网络

#define FANetworkCode_SignFailed       (80000)  // timestamp 或者 nonce 不合法； token已失效
#define FANetworkCode_Forbiden         (80002)  // 当前用户被禁止登录；登录请求时检查用户是否能够获取登录信息
#define FANetworkCode_Expire           (80003)  // 当前用户的登录信息已发生变化(多台设备登录同一帐号时，后登录的会使前面登录的信息失效果)
#define FANetworkCode_ShouldLogin      (80004)  // 该请求不支持匿名用户(该命令字请求要求用户登录，命令不支持匿名用户使用时返回)

#define FANetworkCode_ServerHangup     (70001)  // 服务器CKV调用业务server超时
#define FANetworkCode_NotConfig        (70002)  // 命令没有添加到白名单时返回
#define FANetworkCode_ServerTimeout    (70003)  // 接入层到各个server之间超时
#define FANetworkCode_OverLoad         (70004)  // 当前服务无法继续接收请求; 当前请求超出系统处理能力，避免后台服务异常

#pragma mark - 业务错误码
#define FABusinessCode_Success         (1)     // 业务请求成功

#define FABusinessCode_NoAdData        (600000)  // 返回空广告信息数据
#define FABusinessCode_NoUnitId        (600001)  // 广告 unitId 为空

#endif /* FANetworkCode_h */
