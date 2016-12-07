//
//  NSString+keyWord.h
//  JWKeyWordFilter
//
//  Created by jianwei on 12/07/16.
//  Copyright © 2016 AsiaInnovations. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (keyWord)

@property (nonatomic, assign) BOOL hadFilterKeyWord;

///是否包含
- (BOOL)isContainsKeyWords;

///敏感词替换为***
- (NSString *)filterKeyWords;

///将敏感词替换为指定字符串
- (NSString *)replaceKeywordsWithString:(NSString *)str;

@end