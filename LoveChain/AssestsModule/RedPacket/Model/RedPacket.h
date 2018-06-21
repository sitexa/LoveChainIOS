//
//  RedPacket.h
//  LoveChain
//
//  Created by xnpeng on  17/04/2018.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 发送红包的时候
 */
@interface RedPacket : NSObject

@property(nonatomic , copy) NSString *redpacket_id;
@property(nonatomic , copy) NSString *verifyString;
@property(nonatomic , copy) NSString *endTime;

@end
