//
//  CandyMainService.h
//  LoveChain
//
//  Created by xnpeng on  2018/5/21.
//  Copyright © 2018 sitexa. All rights reserved.
//

#import "BaseService.h"
#import "Candy_task_list_request.h"
#import "Candy_equity_list_request.h"

@interface CandyMainService : BaseService

@property(nonatomic , strong) Candy_task_list_request *candy_task_list_request;
@property(nonatomic , strong) Candy_equity_list_request *candy_equity_list_request;

@property(nonatomic , strong) NSMutableArray *candyTaskDatasourceArray;
@property(nonatomic , strong) NSMutableArray *candEquityDatasourceArray;
- (void)getCandyTasks:(CompleteBlock)complete;
- (void)getCandyEquities:(CompleteBlock)complete;

@end
