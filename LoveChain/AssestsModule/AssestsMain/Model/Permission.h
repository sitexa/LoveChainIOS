//
//  Permissions.h
//  LoveChain
//
//  Created by xnpeng on  2018/2/6.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Permission : NSObject

// active / owner  
@property(nonatomic, strong) NSString *perm_name;
// active / owner  public key
@property(nonatomic, strong) NSString *required_auth_key;
@end
