//
//  WalletAccountsResult.m
//  LoveChain
//
//  Created by xnpeng on  2018/1/31.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import "WalletAccountsResult.h"

@implementation WalletAccountsResult
+(NSDictionary *)mj_objectClassInArray{
    return @{
             @"data" : @"WalletAccount"
             };
}

@end
