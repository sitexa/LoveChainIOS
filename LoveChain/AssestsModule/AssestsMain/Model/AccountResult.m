//
//  AccountResult.m
//  LoveChain
//
//  Created by xnpeng on  2018/1/23.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import "AccountResult.h"

@implementation AccountResult
- (Account *)data{
    if (!_data) {
        _data = [[Account alloc] init];
    }
    return _data;
}
@end
