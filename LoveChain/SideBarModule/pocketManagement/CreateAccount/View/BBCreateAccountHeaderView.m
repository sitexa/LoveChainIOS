//
//  BBCreateAccountHeaderView.m
//  LoveChain
//
//  Created by xnpeng on  2018/5/21.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import "BBCreateAccountHeaderView.h"

@implementation BBCreateAccountHeaderView

- (IBAction)createAccount:(UIButton *)sender {
    if (self.delegate && [self.delegate respondsToSelector:@selector(createAccountUseEOSPrivateKey)]) {
        [self.delegate createAccountUseEOSPrivateKey];
    }
}

@end
