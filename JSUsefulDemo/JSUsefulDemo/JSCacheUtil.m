//
//  JSCacheUtil.m
//  JSUsefulDemo
//
//  Created by Macx on 16/8/19.
//  Copyright © 2016年 gaojs. All rights reserved.
//

#import "JSCacheUtil.h"

@implementation JSCacheUtil
+ (BOOL)writeToDiskFilename:(NSString*)filename file:(UIImage *)image {
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    NSString *path = [paths[0] stringByAppendingPathComponent:filename];
    NSData *data = UIImageJPEGRepresentation(image, 1);
    BOOL bools = [data writeToFile:path atomically:YES];
    return bools;
}

@end
