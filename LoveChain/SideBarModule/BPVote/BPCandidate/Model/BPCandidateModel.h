//
//  BPCandidateModel.h
//  LoveChain
//
//  Created by xnpeng on  2018/6/9.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OptionModel.h"


@interface BPCandidateModel : OptionModel
@property(nonatomic , copy) NSString *owner;
@property(nonatomic , copy) NSString *total_votes;
@property(nonatomic , copy) NSString *url;
@property(nonatomic , copy) NSString *logo_256;

@end
