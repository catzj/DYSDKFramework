//
//  ApiConfigInfo.h
//  Payment
//
//  Created by 朱进 on 16/8/6.
//  Copyright © 2016年 朱进. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ApiConfigInfo : NSObject

/**
 * 支付宝支付回调
 **/
@property (nonatomic, copy) NSString *appScheme;


/**
 * 微信AppId
 **/
@property (nonatomic, copy) NSString *wxAppId;

@end
