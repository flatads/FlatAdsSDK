//
//  FAUIMarco.h
//  FlatAds_sdk
//
//  Created by EkoHu on 2021/4/21.
//  Copyright © 2021 FlatAds. All rights reserved.
//

/**
 * 定义UI宏
 */

#ifndef FAUIMarco_h
#define FAUIMarco_h

/// SCREEN SIZE
#define FA_SCREEN_WIDTH     ([UIScreen mainScreen].bounds.size.width)
#define FA_SCREEN_HEIGHT    ([UIScreen mainScreen].bounds.size.height)
#define FA_IS_LANDSCAPE     (FA_SCREEN_WIDTH > FA_SCREEN_HEIGHT)

#define FA_REAL_SCREEN_WIDTH  (FA_IS_LANDSCAPE ? FA_SCREEN_HEIGHT:FA_SCREEN_WIDTH)
#define FA_REAL_SCREEN_HEIGHT (FA_IS_LANDSCAPE ? FA_SCREEN_WIDTH:FA_SCREEN_HEIGHT)

/// SafeArea
#define FA_IS_BangsScreen ({\
    BOOL isBangsScreen = NO; \
    if (@available(iOS 11.0, *)) { \
    UIWindow *window = [[UIApplication sharedApplication].windows firstObject]; \
    isBangsScreen = window.safeAreaInsets.bottom > 0; \
    } \
    isBangsScreen; \
})

#define FA_SafeAreaTopHeight (FA_IS_LANDSCAPE? 0.:44.)
#define FA_SafeAreaBottomHeight (FA_IS_LANDSCAPE? 21.:34.)

#define FA_LayoutAreaTopHeight (FA_IS_BangsScreen? FA_SafeAreaTopHeight:0)
#define FA_LayoutAreaBottomHeight (FA_IS_BangsScreen? FA_SafeAreaBottomHeight:0)

#define FA_StatusBarHeight (FA_IS_BangsScreen? FA_SafeAreaTopHeight:20.)

/// Device
#define FA_DeviceOrientation [[UIDevice currentDevice] orientation]
#define FA_IsPortrait ([[UIApplication sharedApplication] statusBarOrientation] == UIInterfaceOrientationPortrait || [[UIApplication sharedApplication] statusBarOrientation] == UIInterfaceOrientationPortraitUpsideDown)

/// Color
#define FA_Color(r, g, b, a) [UIColor colorWithRed:(r/255.0) green:(g/255.0) blue:(b/255.0) alpha:a]
#define FA_ColorFromRGB(hexStr) [UIColor colorWithRGBHexStr:hexStr]
#define FA_ColorFromARGB(hexStr) [UIColor colorWithARGBHexStr:hexStr]

/// Animation
#define FA_AnimateWithDuration (0.25)

#define FA_BundleObject(key) [[NSBundle mainBundle] objectForInfoDictionaryKey:key];

#define FA_BundleId [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleIdentifier"];

#endif /* FAUIMarco_h */
