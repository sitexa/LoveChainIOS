//
//  VersionUpdateModel.h
//  LoveChain
//
//  Created by xnpeng on  19/04/2018.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VersionUpdateModel : NSObject

/**
 <#Description#>
 */
@property(nonatomic , copy) NSString *uploadUrl;

/**
 <#Description#>
 */
@property(nonatomic , copy) NSString *versionDetail;

/**
 <#Description#>
 */
@property(nonatomic , copy) NSString *versionCode;

/**
 <#Description#>
 */
@property(nonatomic , copy) NSString *versionName;
@end
