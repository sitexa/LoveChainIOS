//
//  WalletQRCodeView.h
//  LoveChain
//
//  Created by xnpeng on  2018/2/25.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WalletQRCodeViewDelegate<NSObject>


@end

@interface WalletQRCodeView : UIView

@property (weak, nonatomic) IBOutlet UIImageView *walletQRCodeImg;
@property(nonatomic, weak) id<WalletQRCodeViewDelegate> delegate;
@end
