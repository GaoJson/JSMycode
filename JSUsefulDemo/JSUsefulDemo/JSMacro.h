//
//  JSMacro.h
//  JSUsefulDemo
//
//  Created by Macx on 16/9/9.
//  Copyright © 2016年 gaojs. All rights reserved.
//

#ifndef JSMacro_h
#define JSMacro_h

/** 单例  宏定义 */
#undef	AS_SINGLETON
#define AS_SINGLETON(class) \
+ (instancetype)sharedInstance; \
+ (void)distroyInstance;

#undef	DEF_SINGLETON
#define DEF_SINGLETON(class) \
static class *sharedInstance##class; \
+ (instancetype)sharedInstance { \
@synchronized (self) { \
if (sharedInstance##class == nil) { \
sharedInstance##class = [[self alloc] init]; \
} \
} \
return sharedInstance##class; \
} \
+ (id)allocWithZone:(struct _NSZone *)zone {\
if (sharedInstance##class == nil) {\
sharedInstance##class = [super allocWithZone:zone];\
}\
return sharedInstance##class;\
}\
- (id)copyWithZone:(NSZone *)zone\
{\
return sharedInstance##class;\
}\
+ (void)distroyInstance { \
@synchronized (self) { \
sharedInstance##class = nil; \
} \
}


#endif /* JSMacro_h */
