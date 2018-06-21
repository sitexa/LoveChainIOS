//
//  AccountManagementHeaderView.m
//  LoveChain
//
//  Created by xnpeng on  2017/12/13.
//  Copyright © 2017年 sitexa. All rights reserved.
//

#import "AccountManagementHeaderView.h"

@implementation AccountManagementHeaderView

- (IBAction)setToMainAccount:(UIButton *)sender {
    if (self.delegate && [self.delegate respondsToSelector:@selector(setToMainAccountBtnDidClick:)]) {
        [self.delegate setToMainAccountBtnDidClick:sender];
    }
}
- (IBAction)exportPrivateKey:(UIButton *)sender {
    if (self.delegate && [self.delegate respondsToSelector:@selector(exportPrivateKeyBtnDidClick:)]) {
        [self.delegate exportPrivateKeyBtnDidClick:sender];
    }
}

@end
