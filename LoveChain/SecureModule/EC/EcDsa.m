//
//  EcDsa.m
//  啊啊啊啊啊啊
//
//  Created by xnpeng on  2018/3/19.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import "EcDsa.h"

@implementation SigChecker
- (instancetype)initWithHash:(char *)hash andPrivKey:(JKBigInteger *)privKey
{
    self = [super init];
    if (self) {
        self.e = [JKBigInteger alloc];
        
    }
    return self;
}

@end


@implementation EcDsa

@end
