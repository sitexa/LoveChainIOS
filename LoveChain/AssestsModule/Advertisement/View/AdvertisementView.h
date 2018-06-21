//
//  AdvertisementView.h
//  LoveChain
//
//  Created by xnpeng on  2018/6/7.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AdvertisementViewDelegate<NSObject>
- (void)goforwardDidClick;

@end


@interface AdvertisementView : UIView
@property(nonatomic, weak) id<AdvertisementViewDelegate> delegate;

@end
