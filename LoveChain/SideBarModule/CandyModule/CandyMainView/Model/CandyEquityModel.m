//
//  CandyEquityModel.m
//  LoveChain
//
//  Created by xnpeng on  2018/5/21.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import "CandyEquityModel.h"

@implementation CandyEquityModel
+(NSDictionary *)mj_replacedKeyFromPropertyName{
    return @{@"equity_id" : @"id" ,
             @"equity_description" : @"description"
             };
}
@end
