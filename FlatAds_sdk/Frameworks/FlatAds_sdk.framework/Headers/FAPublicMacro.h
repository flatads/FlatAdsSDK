//
//  FAPublicMacro.h
//  FlatAds_sdk
//
//  Created by EkoHu on 2021/4/14.
//  Copyright © 2021 FlatAds. All rights reserved.
//

/**
 * 对外的宏定义
 */

#import "FALanguageManager.h"
#import "FAThemeManager.h"

#ifndef FAPublicMacro_h
#define FAPublicMacro_h

// wording相关
#define FAWording(key, cmt)                         [[FALanguageManager shareInstance] localizedStringForKey:key description:cmt]
#define FAFixedPluralWording(key, c1, cmt)          FAWording(FAFixedPluralWordingKey(key, c1, 0), cmt)
#define FAFixedPluralWording2(key, c1, c2, cmt)     FAWording(FAFixedPluralWordingKey(key, c1, c2), cmt)

#define FASpecialWording(key, cmt, lan)             [[FALanguageManager shareInstance] localizedStringForKey:key description:cmt language:lan]
#define FAFixedPluralWordingKey(key, c1, c2)        [[FALanguageManager shareInstance] fixedPluralKeyWithKey:key count1:c1 count2:c2]


// 主题(图片加载)相关
#define FAImage(key)                                [[FAThemeManager shareInstance] imageNamed:key]
#define FAImageBundleImage(key, bundle)             [[FAThemeManager shareInstance] imageNamed:key inBundle:bundle]

#endif /* FAPublicMacro_h */
