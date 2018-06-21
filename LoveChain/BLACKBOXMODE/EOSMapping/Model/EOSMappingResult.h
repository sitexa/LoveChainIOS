//
//  EOSMappingResult.h
//  LoveChain
//
//  Created by xnpeng on  2018/6/13.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EOSMappingResult : NSObject
@property(nonatomic, strong) NSNumber *code;
@property(nonatomic, strong) NSString *msg;
@property(nonatomic, strong) NSArray *account_names;

@end
