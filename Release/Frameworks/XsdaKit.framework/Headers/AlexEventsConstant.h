//
//  AlexEventsConstant.h
//  Pods
//
//  Created by apus on 2019/6/25.
//

#ifndef AlexEventsConstant_h
#define AlexEventsConstant_h

#import <Foundation/Foundation.h>

/** 主动打开APP事件 */
FOUNDATION_EXPORT const NSUInteger XALEX_STARTUP;
/** 标识一个APP */
FOUNDATION_EXPORT NSString *const XALEX_STARTUP_APP_ID_STRING;
/** 页面的名称 */
FOUNDATION_EXPORT NSString *const XALEX_STARTUP_NAME_STRING;
/** 打开APP的来源 */
FOUNDATION_EXPORT NSString *const XALEX_STARTUP_FROM_SOURCE_STRING;

/**
 * Alex公共事件-应用使用时长事件（时长单位为毫秒）
 */
FOUNDATION_EXPORT const NSUInteger XALEX_APP_VISIBLE_DURATION_MS;
/** 应用使用时长 */
FOUNDATION_EXPORT NSString *const XALEX_APP_VISIBLE_DURATION_MS_DURATION_INT;
/** Alex内置公共事件-仅用于心跳，保证每天都至少有一个事件上传，不对外暴露。 */
FOUNDATION_EXPORT const NSUInteger XALEX_HEARTBEAT;
/** 进入首页*/
FOUNDATION_EXPORT const NSUInteger XALEX_ENTER_MAIN;
// APP打开的来源：APP初始化后，进入前台页面。
FOUNDATION_EXPORT NSString *const STARTUP_FROM_SOURCE_INIT;

#endif /* AlexEventsConstant_h */
