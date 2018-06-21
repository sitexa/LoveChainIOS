//
//  GetMessageListRequest.h
//  LoveChain
//
//  Created by xnpeng on  2018/1/29.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import "BaseNetworkRequest.h"

@interface GetMessageListRequest : BaseNetworkRequest
/**
 一页显示的记录数
 */
@property(nonatomic, strong) NSNumber *size;

/**
 起始位置
 */
@property(nonatomic, strong) NSNumber *offset;

@end
