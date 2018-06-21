//
//  AssestsDetailViewController.h
//  LoveChain
//
//  Created by xnpeng on  2017/11/28.
//  Copyright © 2017年 sitexa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Assests.h"

@interface AssestsDetailViewController : BaseViewController
@property(nonatomic, strong) Assests *model;
@property(nonatomic, strong) NSString *accountName;
@end
