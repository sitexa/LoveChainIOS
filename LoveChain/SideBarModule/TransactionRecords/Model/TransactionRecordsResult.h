//
//  TransactionRecordsResult.h
//  LoveChain
//
//  Created by xnpeng on  2018/2/7.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TransactionRecordsResult : NSObject
@property(nonatomic, strong) NSString *message;


@property(nonatomic, strong) NSNumber *code;
@property(nonatomic, strong) NSMutableDictionary *data;

@end
