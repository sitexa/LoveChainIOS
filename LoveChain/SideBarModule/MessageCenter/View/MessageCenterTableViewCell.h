//
//  MessageCenterTableViewCell.h
//  LoveChain
//
//  Created by xnpeng on  2018/1/18.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MessageCenter.h"

@interface MessageCenterTableViewCell : BaseTableViewCell
@property(nonatomic, strong) MessageCenter *model;
@end
