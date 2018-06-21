//
//  QuestionListDetailResult.h
//  LoveChain
//
//  Created by xnpeng on  2018/2/5.
//  Copyright © 2018年 sitexa. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface QuestionListDetailResult : NSObject
@property(nonatomic, strong) NSNumber *currentPage;
@property(nonatomic, strong) NSNumber *rowsPerPage;
@property(nonatomic, strong) NSNumber *totalPages;
@property(nonatomic, strong) NSNumber *totalRows;
@property(nonatomic, strong) NSArray *data;
@end
