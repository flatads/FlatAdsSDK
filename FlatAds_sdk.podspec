#
# Be sure to run `pod lib lint FlatAds_sdk.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
    s.name         = "FlatAds_sdk"
    s.version      = "1.1.0"
    s.summary      = "Flat Ads SDK for iOS"
    s.description  = <<-DESC
                       Flat Ads SDK for iOS
                     DESC
    s.homepage     = "https://github.com/flatads/FlatAdsSDK"
    s.license      = "MIT"
    s.author       = { "FlatAds Team" => "flatincbr.dev@gmail.com" }
    
    s.platform     = :ios, "10.0"
    s.source       = { :git => "https://github.com/flatads/FlatAdsSDK.git", :tag => s.version }

    s.platform = :ios, "10.0"
    s.ios.deployment_target = "10.0"

    s.libraries = "c++"
    s.requires_arc = true
    s.static_framework = true

    s.frameworks = 'Foundation', 'Security', 'WebKit','SystemConfiguration', 'CoreTelephony', 'MobileCoreServices', 'AppTrackingTransparency', 'AVFoundation','CoreMedia'
    
    s.pod_target_xcconfig = {
        'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64',
        'CLANG_ALLOW_NON_MODULAR_INCLUDES_IN_FRAMEWORK_MODULES' => 'YES'
    }
    
    s.user_target_xcconfig = {
        'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64',
        'CLANG_ALLOW_NON_MODULAR_INCLUDES_IN_FRAMEWORK_MODULES' => 'YES'
    }

    s.resource_bundles = {
        'FlatAds_sdk' => ['FlatAds_sdk/**/*.xcassets']
    }

    s.vendored_frameworks = "FlatAds_sdk/**/*.{framework}"
    
    s.dependency "TCFoundation", "~> 1.0"
  
    s.dependency "MJExtension", "~> 3.2.2"
    s.dependency "Masonry", "~> 1.1.0"
    s.dependency "GoogleAds-IMA-iOS-SDK", "~> 3.14.3"
    s.dependency "YYWebImage", "~> 1.0.5"
    s.dependency "YYImage/WebP", "~> 1.0.4"
  
end
