//
//  MessageFeedbackResult.h
//  LoveChain
//
//  Created by xnpeng on  2018/1/29.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MessageFeedbackResult : NSObject
@property(nonatomic, strong) NSString *message;


@property(nonatomic, strong) NSNumber *code;
@property(nonatomic, strong) NSMutableArray *data;

@end
