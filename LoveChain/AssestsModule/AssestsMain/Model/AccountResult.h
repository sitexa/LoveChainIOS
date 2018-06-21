//
//  AccountResult.h
//  LoveChain
//
//  Created by xnpeng on  2018/1/23.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Account.h"

@interface AccountResult : NSObject
@property(nonatomic, strong) NSNumber *code;
@property(nonatomic, strong) NSString *message;
@property(nonatomic, strong) Account *data;
@end
