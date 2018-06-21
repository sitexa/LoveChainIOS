//
//  RichListResult.h
//  LoveChain
//
//  Created by xnpeng on  2017/12/27.
//  Copyright © 2017年 sitexa. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RichListResult : NSObject

@property(nonatomic, strong) NSNumber *code;
@property(nonatomic, strong) NSString *message;
@property(nonatomic, strong) NSMutableArray *data;

@end
