//
//  BindSocialPlatformHeaderView.m
//  LoveChain
//
//  Created by xnpeng on  08/04/2018.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import "BindSocialPlatformHeaderView.h"

@implementation BindSocialPlatformHeaderView


- (IBAction)bindBtn:(UIButton *)sender {
    
    if (self.delegate && [self.delegate respondsToSelector:@selector(bindBtnDidClick:)]) {
        [self.delegate bindBtnDidClick:sender];
    }
}

@end
