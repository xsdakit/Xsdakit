//
//  XsdaSDK.h
//  Adjust
//
//  Created by wangfangshuai on 2020/12/11.
//

#import <Foundation/Foundation.h>
#import <XsdaKit/AlexEventsConstant.h>
NS_ASSUME_NONNULL_BEGIN

@interface XsdaSDK : NSObject

+ (void)initSDK;

+ (void)mainPageShow;

/// display sdk debug log
/// @param isOpen   display log (defalut false)
+(void)setDisplayDebugLog:(BOOL)isOpen;

@end

NS_ASSUME_NONNULL_END
