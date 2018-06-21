//
//  PopUpAccountsWindow.h
//  LoveChain
//
//  Created by xnpeng on  2018/2/7.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol PopUpAccountsWindowDelegate<NSObject>
- (void )popUpAssestWindowdidSelectItem:(id)sender;

@end
@interface PopUpAccountsWindow : UIView

@end
