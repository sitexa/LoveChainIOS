//
//  EOSMappingImportAccountHeaderView.m
//  LoveChain
//
//  Created by xnpeng on  2018/5/21.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import "EOSMappingImportAccountHeaderView.h"

@interface EOSMappingImportAccountHeaderView()
@property (weak, nonatomic) IBOutlet UIButton *confirmBtn;

@end


@implementation EOSMappingImportAccountHeaderView

-(void)awakeFromNib{
    [super awakeFromNib];
    
}

- (IBAction)importAccount:(UIButton *)sender {
    if (self.delegate && [self.delegate respondsToSelector:@selector(importEOSMappingAccountBtnDidClick)]) {
        [self.delegate importEOSMappingAccountBtnDidClick];
    }
}

@end
