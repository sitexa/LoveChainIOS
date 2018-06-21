//
//  SocialSharePanelView.h
//  LoveChain
//
//  Created by xnpeng on  13/04/2018.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SocialSharePanelViewDelegate<NSObject>
- (void)SocialSharePanelViewDidTap:(UITapGestureRecognizer *)sender;
@end


@interface SocialSharePanelView : UIView
@property(nonatomic, weak) id<SocialSharePanelViewDelegate> delegate;
@property(nonatomic , assign) CGFloat imageTopSpace;// image距上的距离

@property(nonatomic , assign) CGFloat labelTopSpace;// label距上的距离
- (void)updateViewWithArray:(NSArray *)array;
@end
