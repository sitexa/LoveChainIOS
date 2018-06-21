//
//  RedPacketRecordResult.h
//  LoveChain
//
//  Created by xnpeng on  20/04/2018.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 红包记录 list
 */
@interface RedPacketRecordResult : NSObject
@property(nonatomic, strong) NSString *msg;
@property(nonatomic, strong) NSNumber *code;
@property(nonatomic, strong) NSMutableArray *data;
@end
