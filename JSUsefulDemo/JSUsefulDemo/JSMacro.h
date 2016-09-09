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

#define ARC_COLOR [UIColor colorWithRed:arc4random()%255/255.0 green:arc4random()%255/255.0 blue:arc4random()%255/255.0 alpha:1];

#define RGB_COLOR(r,g,b)     [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
#define RGB_COLORA(r,g,b,a)     [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:a]

// demo : HEXCOLOR(0xb1afaf);
#define HEXCOLOR(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define HEXCOLORA(rgbValue,a) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:a]


#define IMG(name)       [UIImage imageNamed:name]
#define IMG_TYPE(file,ext) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle]pathForResource:file ofType:ext]]
#define IMG_F(A) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:A ofType:nil]]


#define filePath(name) [[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)lastObject] stringByAppendingPathComponent:name];




#endif /* JSMacro_h */
