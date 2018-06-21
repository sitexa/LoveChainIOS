//
//  CandyMainCollectionViewCell.h
//  LoveChain
//
//  Created by xnpeng on  2018/5/21.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CandyEquityModel.h"

@interface CandyMainCollectionViewCell : UICollectionViewCell
@property(nonatomic , strong) UIImageView *img;
@property(nonatomic , strong) UILabel *titleLabel;
@property(nonatomic , strong) CandyEquityModel *model;
@end
