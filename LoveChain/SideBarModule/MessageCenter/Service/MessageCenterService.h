//
//  MessageCenterService.h
//  LoveChain
//
//  Created by xnpeng on  2018/1/18.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import "BaseService.h"
#import "GetMessageListRequest.h"

@interface MessageCenterService : BaseService
@property(nonatomic, strong) GetMessageListRequest *getMessageListRequest;

- (void)buildNextPageDataSource:(CompleteBlock)complete;

@end
