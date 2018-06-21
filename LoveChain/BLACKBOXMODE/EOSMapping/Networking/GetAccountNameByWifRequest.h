//
//  GetAccountNameByWifRequest.h
//  LoveChain
//
//  Created by xnpeng on  2018/6/13.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import "BaseNetworkRequest.h"

@interface GetAccountNameByWifRequest : BaseNetworkRequest
@property(nonatomic , copy) NSString *public_key;
@end
