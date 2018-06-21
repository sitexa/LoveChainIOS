//
//  UnStakeEOSHeaderView.h
//  LoveChain
//
//  Created by xnpeng on  2018/6/15.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AccountResult.h"
#import "Account.h"

@protocol UnStakeEOSHeaderViewDelegate<NSObject>
- (void)confirmUnStakeBtnDidClick;
@end


@interface UnStakeEOSHeaderView : BaseView

@property(nonatomic , strong) AccountResult *model;

@property (weak, nonatomic) IBOutlet UIButton *confirmBtn;

@property(nonatomic, weak) id<UnStakeEOSHeaderViewDelegate> delegate;
@end
