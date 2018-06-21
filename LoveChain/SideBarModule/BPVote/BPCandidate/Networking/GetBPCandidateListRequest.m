//
//  GetBPCandidateListRequest.m
//  LoveChain
//
//  Created by xnpeng on  2018/6/9.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import "GetBPCandidateListRequest.h"

@implementation GetBPCandidateListRequest

- (NSString *)requestUrlPath{
    return [NSString stringWithFormat:@"%@/voteoraclechain/GetBpJson", REQUEST_BP_BASEURL];
}

- (id)parameters{
    return @{
             @"pageNum" : VALIDATE_STRING(self.pageNum),
             @"pageSize" : VALIDATE_STRING(self.pageSize)
             };
}

@end

