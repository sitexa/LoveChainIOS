//
//  PocketManagementTableViewCell.h
//  LoveChain
//
//  Created by xnpeng on  2018/1/5.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PocketManagementTableViewCell : BaseTableViewCell
@property(nonatomic, strong) BaseLabel *titleLabel;
@property(nonatomic, strong) AccountInfo *model;
@end
