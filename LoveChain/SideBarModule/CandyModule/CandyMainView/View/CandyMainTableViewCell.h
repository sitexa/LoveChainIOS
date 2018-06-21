//
//  CandyMainTableViewCell.h
//  LoveChain
//
//  Created by xnpeng on  2018/5/21.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CandyTaskModel.h"

@interface CandyMainTableViewCell : UITableViewCell
@property(nonatomic , strong) CandyTaskModel *model;
@property(nonatomic , strong) BaseSlimLineView *bottomLineView;
@end
