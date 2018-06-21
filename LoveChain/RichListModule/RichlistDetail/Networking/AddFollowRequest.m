//
//  AddFollowRequest.m
//  LoveChain
//
//  Created by xnpeng on  2018/2/9.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import "AddFollowRequest.h"

@implementation AddFollowRequest
-(NSString *)requestUrlPath{
    return [NSString stringWithFormat:@"%@/add_follow", REQUEST_PERSONAL_BASEURL];
}
-(id)parameters{
    return @{
             @"fuid" : VALIDATE_STRING(self.fuid),
             @"followType" : VALIDATE_NUMBER(self.followType),
             @"uid" : VALIDATE_STRING(self.uid),
             @"followTarget" : VALIDATE_STRING(self.followTarget),
             
             };
}
@end
