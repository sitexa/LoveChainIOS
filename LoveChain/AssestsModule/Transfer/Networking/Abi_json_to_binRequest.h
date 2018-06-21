//
//  Abi_to_json.h
//  LoveChain
//
//  Created by xnpeng on  2018/3/21.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Abi_json_to_binRequest : BaseHttpsNetworkRequest
@property(nonatomic, copy) NSString *code;
@property(nonatomic, copy) NSString *action;
@property(nonatomic, copy) NSString *from;
@property(nonatomic, copy) NSString *to;
@property(nonatomic, copy) NSString *memo;
@property(nonatomic, copy) NSString *quantity;

@end
