//
//  BPCandidateListViewController.h
//  LoveChain
//
//  Created by xnpeng on  2018/6/8.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Account.h"
#import "MyVoteInfoResult.h"

@interface BPCandidateListViewController : BaseViewController
@property(nonatomic , strong) Account *model;
@property(nonatomic , strong) MyVoteInfoResult *myVoteInfoResult;
@end
