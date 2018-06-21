//
//  GetAccountRequest.m
//  LoveChain
//
//  Created by xnpeng on  2018/2/6.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import "GetAccountRequest.h"

@implementation GetAccountRequest
-(NSString *)requestUrlPath{
    return @"/get_account";
}

-(id)parameters{
    return @{@"name" : VALIDATE_STRING(self.name) };
}

@end

