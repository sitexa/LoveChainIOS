//
//  BPCandidateHeaderView.h
//  LoveChain
//
//  Created by xnpeng on  2018/6/8.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol BPCandidateHeaderViewDelegate<NSObject>
- (void)searchBtnDidClick:(UIButton *)sender;
@end


@interface BPCandidateHeaderView : UIView
@property(nonatomic, weak) id<BPCandidateHeaderViewDelegate> delegate;

@end
