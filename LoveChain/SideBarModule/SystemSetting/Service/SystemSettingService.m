//
//  SystemSettingService.m
//  LoveChain
//
//  Created by xnpeng on  2018/1/17.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import "SystemSettingService.h"

@implementation SystemSettingService

- (NSDictionary *)dataSourceDictionary{
    if (!_dataSourceDictionary) {
        _dataSourceDictionary = @{
                                  @"topSection" : @[NSLocalizedString(@"消息反馈", nil)]  ,
                                  @"bottomSection" : @[NSLocalizedString(@"清空缓存", nil),NSLocalizedString(@"语言", nil), NSLocalizedString(@"法律条款与隐私政策", nil), NSLocalizedString(@"关于Pocket EOS", nil)]
                                  };
    }
    return _dataSourceDictionary;
}

-(void)buildDataSource:(CompleteBlock)complete{
    
    
    complete(self , YES);
}
@end

// 设置语言
//    if (indexPath.row == 0) {
//        [DAConfig setUserLanguage:nil];
//    } else if (indexPath.row == 1) {
//        [DAConfig setUserLanguage:@"zh-Hans"];
//    } else {
//        [DAConfig setUserLanguage:@"en"];
//    }
//
//    dispatch_async(dispatch_get_main_queue(), ^{
//        for (UIView *view in WINDOW.subviews) {
//            [view removeFromSuperview];
//        }
//        AppDelegate *appDele = (AppDelegate *)[UIApplication sharedApplication].delegate;
//        BaseTabBarController * vc =[[BaseTabBarController alloc]init];
//        appDele.window.rootViewController = vc;
//        [TOASTVIEW showWithText:NSLocalizedString(NSLocalizedString(@"语言切换中", nil), nil) duration:1];
//
//    });
