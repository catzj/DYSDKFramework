//
//  OverseasApi.h
//  DYSDK
//
//  Created by Null on 2018/2/6.
//  Copyright © 2018年 郭子健. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "GameAppInfo.h"
#import "ApiConfigInfo.h"
#import "DYBlock.h"
#import "OrderInfo.h"

@interface DYOverseasApi : NSObject

@property (nonatomic, assign) BOOL isInBlacklist;



/**
 配置第三方登录

 @param application <#application description#>
 @param launchOptions <#launchOptions description#>
 */
- (void)setupApi:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;

- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url
  sourceApplication:(NSString *)sourceApplication
         annotation:(id)annotation;

- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<NSString*, id> *)options;

+ (instancetype _Nonnull)sharedInstance;

/**
 显示登录页面

 @param gameAppInfo 游戏信息(可为nil,优先读取配置文件里的)
 @param block 登录成功后的回调
 */
- (void)showLoginView:(GameAppInfo * _Nullable)gameAppInfo completion:(DYCompletionBlock _Nullable)block;

/**
 显示悬浮窗
 */
- (void)showFloatingView;

/**
 移除悬浮窗
 */
- (void)removeFloatingView;

/**
 退出登录
 */
- (void)userLogout;

/**
 设置退出登录后的回调

 @param block 退出登录后的回调
 */
- (void)setLogoutCompletionBlock:(DYCompletionBlock _Nullable)block;

/**
 *  苹果内购支付接口
 *
 *  @param receipt 内购成功的收据
 *  @param extend 扩展参数
 *  @param completionBlock 支付结果回调Block
 */
- (void) appPay:(NSData * _Nonnull)receipt extend:(NSString * _Nullable)extend
completionBlock:(DYCompletionBlock _Nullable)completionBlock;

@end
