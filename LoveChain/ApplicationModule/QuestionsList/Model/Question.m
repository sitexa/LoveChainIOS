//
//  Question.m
//  LoveChain
//
//  Created by xnpeng on  2018/2/5.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import "Question.h"

@implementation Question
+(NSDictionary *)mj_replacedKeyFromPropertyName{
    return @{@"question_id" : @"id"
             };
}
@end
