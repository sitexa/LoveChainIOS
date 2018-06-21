//
//  BPVoteFooterView.h
//  LoveChain
//
//  Created by xnpeng on  2018/6/8.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol BPVoteFooterViewDelegate<NSObject>
- (void)bpFooterViewBottomBtnDidClick:(UIButton *)sender;
@end


@interface BPVoteFooterView : UIView

@property(nonatomic, weak) id<BPVoteFooterViewDelegate> delegate;


- (void)updateViewWithArray:(NSArray *)arr;
@end
