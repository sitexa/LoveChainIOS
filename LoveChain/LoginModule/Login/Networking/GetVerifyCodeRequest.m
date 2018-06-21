//
//  GetVerifyCodeRequest.m
//  LoveChain
//
//  Created by xnpeng on  2018/1/19.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import "GetVerifyCodeRequest.h"

@implementation GetVerifyCodeRequest
- (NSString *)requestUrlPath{
    return [NSString stringWithFormat:@"%@/message/send", REQUEST_PERSONAL_BASEURL];
}

-(id)parameters{
    
    return @{@"phoneNum" :VALIDATE_STRING( self.phoneNum)};
}
@end
