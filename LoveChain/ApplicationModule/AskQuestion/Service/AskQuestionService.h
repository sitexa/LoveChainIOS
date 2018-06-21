//
//  AskQuestionService.h
//  LoveChain
//
//  Created by xnpeng on  2018/1/11.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import "BaseService.h"


@interface AskQuestionService : BaseService
/**
 选项数组  A./B./C./D./E./F.
 */
@property(nonatomic, strong) NSMutableArray *optionsModelArr;

@end
