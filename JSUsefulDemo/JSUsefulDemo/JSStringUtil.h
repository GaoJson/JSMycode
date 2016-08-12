//
//  JSStringUtil.h
//  JSUsefulDemo
//
//  Created by Macx on 16/8/12.
//  Copyright © 2016年 gaojs. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JSStringUtil : NSObject
/**
 *  判断字符串是否为空
 */
+ (BOOL)isEmptyString:(NSString *)string;
/**
 *  时间戳转时间字符串
 */
+ (NSString *)dateToString:(NSString *)time;
/**
 *  判断是否是手机
 */
+ (BOOL)isMobileNumber:(NSString *)mobileNum;

/**
 * 改变label的某一段字的颜色
 * originalString: 原字符串
 * changeString  : 改变颜色的字符串
 */
+ (NSMutableAttributedString *)changeLabelColorOriginalString:(NSString *)originalString changeString:(NSString *)changeString;


@end
