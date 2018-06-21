//
//  GetBPCandidateListRequest.h
//  LoveChain
//
//  Created by xnpeng on  2018/6/9.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import "BaseNetworkRequest.h"

@interface GetBPCandidateListRequest : BaseNetworkRequest
@property(nonatomic, strong) NSNumber *pageNum;
@property(nonatomic, strong) NSNumber *pageSize;
@end
