//
//  TransactionResult.m
//  LoveChain
//
//  Created by xnpeng on  2018/3/22.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import "TransactionResult.h"

@implementation TransactionResult
+(NSDictionary *)mj_replacedKeyFromPropertyName{
    return @{
             @"transaction_id" : @"data.transaction_id"
             };
}
@end
