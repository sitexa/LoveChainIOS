//
//  BPCandidateTableViewCell.h
//  LoveChain
//
//  Created by xnpeng on  2018/6/9.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BPCandidateModel.h"


@interface BPCandidateTableViewCell : BaseTableViewCell
@property(nonatomic , strong) UIButton *rectBtn;
@property(nonatomic , strong) BPCandidateModel *model;
@property(nonatomic, copy) void(^onAvatarViewClick)();
@end
