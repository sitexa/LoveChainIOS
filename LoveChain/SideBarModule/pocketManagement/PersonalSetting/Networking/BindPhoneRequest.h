//
//  BindPhoneRequest.h
//  LoveChain
//
//  Created by xnpeng on  30/03/2018.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import "BaseNetworkRequest.h"

@interface BindPhoneRequest : BaseNetworkRequest
/**
 昵称
 */
@property(nonatomic , copy) NSString *name;

/**
 头像地址
 */
@property(nonatomic , copy) NSString *avatar;

/**
 openid
 */
@property(nonatomic , copy) NSString *openid;

/**
 待绑定的手机号
 */
@property(nonatomic , copy) NSString *phoneNum;

/**
 1 代表 qq 2 代表微信 不能有其他值
 */
@property(nonatomic , copy) NSString *type;

/**
 验证码
 */
@property(nonatomic , copy) NSString *code;

@end
