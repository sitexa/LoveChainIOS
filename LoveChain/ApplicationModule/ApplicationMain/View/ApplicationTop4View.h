//
//  ApplicationTop4View.h
//  LoveChain
//
//  Created by xnpeng on  2018/6/4.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Enterprise.h"

@protocol ApplicationTop4ViewDelegate<NSObject>
- (void)top4ImgViewDidClick:(id)sender;
@end


@interface ApplicationTop4View : UIView
- (void)updateViewWithArray:(NSArray *)array;
@property(nonatomic, weak) id<ApplicationTop4ViewDelegate> delegate;


@end
