//
//  GetEnterpriseDetailRequest.m
//  LoveChain
//
//  Created by xnpeng on  2018/1/30.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import "GetEnterpriseDetailRequest.h"

@implementation GetEnterpriseDetailRequest

-(NSString *)requestUrlPath{
    return [NSString stringWithFormat:@"%@/enterprise/intro_app", REQUEST_PERSONAL_BASEURL];
}

-(id)parameters{
    return @{@"id" : VALIDATE_NUMBER(self.enterprise_id)};
}
@end
