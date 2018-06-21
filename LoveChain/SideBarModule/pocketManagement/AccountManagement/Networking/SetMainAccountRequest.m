//
//  SetMainAccountRequest.m
//  LoveChain
//
//  Created by xnpeng on  2018/1/31.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import "SetMainAccountRequest.h"

@implementation SetMainAccountRequest
-(NSString *)requestUrlPath{
    return [NSString stringWithFormat:@"%@/user/toggleEosMain", REQUEST_PERSONAL_BASEURL];;
}
-(id)parameters{
    return @{@"uid" : VALIDATE_STRING(self.uid),
             @"eosAccountName" : VALIDATE_STRING(self.eosAccountName)};
}
@end
