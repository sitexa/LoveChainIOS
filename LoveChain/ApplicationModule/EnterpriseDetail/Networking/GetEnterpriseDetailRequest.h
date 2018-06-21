//
//  GetEnterpriseDetailRequest.h
//  LoveChain
//
//  Created by xnpeng on  2018/1/30.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import "BaseNetworkRequest.h"

@interface GetEnterpriseDetailRequest : BaseNetworkRequest

/**
 企业 id
 */
@property(nonatomic, strong) NSNumber *enterprise_id;

@end
