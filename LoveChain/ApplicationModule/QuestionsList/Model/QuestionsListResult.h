//
//  QuestionsListResult.h
//  LoveChain
//
//  Created by xnpeng on  2018/2/5.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import <Foundation/Foundation.h>

@class QuestionListDetailResult;
@interface QuestionsListResult : NSObject
@property(nonatomic, strong) NSNumber *code;
@property(nonatomic, strong) NSString *msg;
@property(nonatomic, strong) QuestionListDetailResult *data;
@end
