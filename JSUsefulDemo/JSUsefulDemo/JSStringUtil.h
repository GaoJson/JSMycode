//
//  JSStringUtil.h
//  JSUsefulDemo
//
//  Created by Macx on 16/8/12.
//  Copyright © 2016年 gaojs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
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
/**
 *  判断图片类型
 */
- (NSString *)contentTypeForImageData:(NSData *)data;

/**
 * url 汉字转换URL编码格式
 */
+ (NSString *)urlStirngAddingPercentEncoding:(NSString *)string;

/**
 * url URL编码格式转换汉字
 */
+ (NSString *)urlStirngRemovingPercentEncoding:(NSString *)string;

/**
 * 判断字符串宽高度
 */
+ (CGSize)adjustTextHeight:(NSString *)text fontSize:(NSInteger)size width:(CGFloat)width;

+ (CGSize)getLabelWidth:(NSString *)string labelHeight:(CGFloat)height fontSize:(NSInteger)fontSize ;



@end
