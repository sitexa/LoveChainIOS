//
//  SetAppLanguageHelper.h
//  LoveChain
//
//  Created by xnpeng on  12/29/16.
//  Copyright © 2016 sitexa. All rights reserved.
//

#import <Foundation/Foundation.h>
#define SWWAppCurrentLanguage [[SetAppLanguageHelper standardHelper] currentLanguage]
#define SWWLocalizedString(key, nil) [[SetAppLanguageHelper standardHelper] stringWithKey:key]
@interface SetAppLanguageHelper : NSObject


+ (instancetype)standardHelper;

- (NSBundle *)bundle;

- (NSString *)currentLanguage;

- (void)setUserLanguage:(NSString *)language;

- (NSString *)stringWithKey:(NSString *)key;

@end

