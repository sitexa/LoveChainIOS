//
//  CandyMainHeaderView.h
//  LoveChain
//
//  Created by xnpeng on  2018/5/21.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CandyMainHeaderView : UIView
@property(nonatomic , strong) NSMutableArray *dataArray;
@property(nonatomic, strong) UICollectionView *mainCollectionView;
@property (weak, nonatomic) IBOutlet UIImageView *avatarImgView;
@property (weak, nonatomic) IBOutlet UILabel *myPointsLabel;
@end
