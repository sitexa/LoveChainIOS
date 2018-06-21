//
//  BPCandidateFooterView.m
//  LoveChain
//
//  Created by xnpeng on  2018/6/9.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import "BPCandidateFooterView.h"

@implementation BPCandidateFooterView

- (IBAction)confirmBtnClick:(UIButton *)sender {
    if (self.delegate && [self.delegate respondsToSelector:@selector(confirmBtnDidClick)]) {
        [self.delegate confirmBtnDidClick];;
    }
}



@end
