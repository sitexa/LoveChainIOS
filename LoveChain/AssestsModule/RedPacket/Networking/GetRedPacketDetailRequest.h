//
//  GetRedPacketDetailRequest.h
//  LoveChain
//
//  Created by xnpeng on  20/04/2018.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import "BaseNetworkRequest.h"


/**
 get redpacket detail
 */
@interface GetRedPacketDetailRequest : BaseNetworkRequest
/**
 用户id
 */
@property(nonatomic, copy) NSString *redPacket_id;

@end
