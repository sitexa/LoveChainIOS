//
//  CompleteBPVoteRequest.h
//  LoveChain
//
//  Created by xnpeng on  2018/6/13.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import "BaseNetworkRequest.h"

@interface CompleteBPVoteRequest : BaseNetworkRequest

@property(nonatomic , copy) NSString *task_ID;
@property(nonatomic , copy) NSString *uid;

@end
