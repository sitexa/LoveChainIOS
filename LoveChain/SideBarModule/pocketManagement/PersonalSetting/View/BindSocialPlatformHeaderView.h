//
//  BindSocialPlatformHeaderView.h
//  LoveChain
//
//  Created by xnpeng on  08/04/2018.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol BindSocialPlatformHeaderViewDelegate<NSObject>
- (void)bindBtnDidClick:(UIButton *)sender;
@end


@interface BindSocialPlatformHeaderView : BaseView
@property(nonatomic, weak) id<BindSocialPlatformHeaderViewDelegate> delegate;

@property (weak, nonatomic) IBOutlet UIImageView *platformImgView;
@property (weak, nonatomic) IBOutlet UILabel *tipLabel;
@property (weak, nonatomic) IBOutlet UILabel *subtipLabel;
@property (weak, nonatomic) IBOutlet UIButton *bindBtn;

@end
