//
//  LanguageSettingService.m
//  LoveChain
//
//  Created by xnpeng on  2018/6/8.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import "LanguageSettingService.h"

@implementation LanguageSettingService

-(void)buildDataSource:(CompleteBlock)complete{
    self.dataSourceArray = @[NSLocalizedString(@"中文", nil), @"English"];
    complete(self, YES);
}

@end
