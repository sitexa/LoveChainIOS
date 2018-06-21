//
//  ImportAccountHeaderView.m
//  LoveChain
//
//  Created by xnpeng on  2017/12/12.
//  Copyright © 2017年 sitexa. All rights reserved.
//

#import "ImportAccountHeaderView.h"



@implementation ImportAccountHeaderView

- (IBAction)importWithQRCode:(UIButton *)sender {
    if (self.delegate && [self.delegate respondsToSelector:@selector(importWithQRCodeBtnDidClick:)]) {
        [self.delegate importWithQRCodeBtnDidClick:sender];
    }
}
- (IBAction)import:(UIButton *)sender {
    if (self.delegate && [self.delegate respondsToSelector:@selector(importBtnDidClick:)]) {
        [self.delegate importBtnDidClick:sender];
    }
}

@end
