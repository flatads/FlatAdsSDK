//
//  FAViewController.m
//  FlatAds_sdk
//
//  Created by flatads on 05/21/2021.
//  Copyright (c) 2021 flatads. All rights reserved.
//

#import "FAViewController.h"
#import <FlatAds_sdk/FlatAds_sdk.h>

@interface FAViewController ()<FAAdInterstitialDelegate>

@property (nonatomic, strong) FAInterstitialAd *interstitialAd;

@end

@implementation FAViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    FAAdUnitModel* unitModel = [FAAdUnitModel new];
    unitModel.unitId = @"";

    [FAInterstitialAd loadWithAdUnitModel:unitModel
                        completionHandler:^(FAInterstitialAd * _Nullable interstitialAd, NSError * _Nullable error) {
        if (error) {

        } else {
            interstitialAd.delegate = self;
            [interstitialAd presentAdFromRootViewController:self];
            self.interstitialAd = interstitialAd;
        }
    }];
    
}

// This method is called when adView ad slot failed to load.
- (void)interstitialAd:(FAInterstitialAd *)interstitialAd didFailWithError:(NSError * __nullable)error
{
    
}

/// This method is called when ad is clicked.
- (void)interstitialAdDidClicked:(nonnull FAInterstitialAd *)interstitialAd
{
    
}

/// This method is called when ad is Closed.
- (void)interstitialAdDidClosed:(nonnull FAInterstitialAd *)interstitialAd
{
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
