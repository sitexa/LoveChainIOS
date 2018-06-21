//
//  EOSMappingImportAccountHeaderView.h
//  LoveChain
//
//  Created by xnpeng on  2018/5/21.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import "BaseView.h"

@protocol EOSMappingImportAccountHeaderViewDelegate<NSObject>
- (void)importEOSMappingAccountBtnDidClick;
@end


@interface EOSMappingImportAccountHeaderView : BaseView
@property(nonatomic, weak) id<EOSMappingImportAccountHeaderViewDelegate> delegate;


@property (weak, nonatomic) IBOutlet UITextField *privateKeyTF;

@end
