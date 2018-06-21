//
//  TransferAbi_json_to_bin_request.h
//  LoveChain
//
//  Created by xnpeng on  14/05/2018.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import "BaseHttpsNetworkRequest.h"

@interface TransferAbi_json_to_bin_request : BaseHttpsNetworkRequest
@property(nonatomic, copy) NSString *code;
@property(nonatomic, copy) NSString *action;
@property(nonatomic, copy) NSString *from;
@property(nonatomic, copy) NSString *to;
@property(nonatomic, copy) NSString *memo;
@property(nonatomic, copy) NSString *quantity;

@end
