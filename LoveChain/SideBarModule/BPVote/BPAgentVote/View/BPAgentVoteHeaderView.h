//
//  BPAgentVoteHeaderView.h
//  LoveChain
//
//  Created by xnpeng on  2018/6/8.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol BPAgentVoteHeaderViewDelegate<NSObject>
- (void)confirmAgentBtnDidClick:(UIButton *)sender;
- (void)chooseAgentBtnDidClick:(UIButton *)sender;
@end


@interface BPAgentVoteHeaderView : UIView

@property(nonatomic, weak) id<BPAgentVoteHeaderViewDelegate> delegate;


@property (weak, nonatomic) IBOutlet UITextField *accountNameTF;
@property (weak, nonatomic) IBOutlet UITextField *amountTF;
@property (weak, nonatomic) IBOutlet UILabel *availableAmountLabel;

@end
