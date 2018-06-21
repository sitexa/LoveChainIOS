//
//  Candy_task_list_request.m
//  LoveChain
//
//  Created by xnpeng on  2018/5/24.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import "Candy_task_list_request.h"

@implementation Candy_task_list_request


-(NSString *)requestUrlPath{
    return [NSString stringWithFormat:@"%@/get_user_task/%@", REQUEST_CANDYSYSTEM_BASEURL, self.uid];
    
}

@end
