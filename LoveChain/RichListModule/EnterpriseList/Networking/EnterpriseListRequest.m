//
//  EnterpriseListRequest.m
//  LoveChain
//
//  Created by xnpeng on  2018/1/25.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import "EnterpriseListRequest.h"

@implementation EnterpriseListRequest

-(NSString *)requestUrlPath{
    return [NSString stringWithFormat:@"%@/top/getEnterprise", REQUEST_PERSONAL_BASEURL];
}

-(id)parameters{
    NSMutableDictionary *params = [NSMutableDictionary dictionary];
    [params setObject:VALIDATE_NUMBER(self.offset) forKey:@"offset"];
    [params setObject:VALIDATE_NUMBER(self.size) forKey:@"size"];
    
    return [params clearEmptyObject];
}
@end
