//
//  AuthVerifyCodeRequest.h
//  LoveChain
//
//  Created by xnpeng on  2018/1/19.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import "BaseNetworkRequest.h"

@interface AuthVerifyCodeRequest : BaseNetworkRequest

/**
 手机号
 */
@property(nonatomic, strong) NSString *phoneNum;
/**
 验证码
 */
@property(nonatomic, strong) NSString *code;
@end
