//
//  GetWalletAccountsRequest.h
//  LoveChain
//
//  Created by xnpeng on  2018/1/31.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import "BaseNetworkRequest.h"


@interface GetWalletAccountsRequest : BaseNetworkRequest
@property(nonatomic, strong) NSString *uid;
@end