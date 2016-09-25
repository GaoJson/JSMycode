//
//  JSCacheUtil.h
//  JSUsefulDemo
//
//  Created by Macx on 16/8/19.
//  Copyright © 2016年 gaojs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface JSCacheUtil : NSObject

/**
 * 图片写入写入硬盘
 */
+ (BOOL)writeToDiskFilename:(NSString*)filename file:(UIImage *)file;

@end
