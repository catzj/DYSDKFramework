//
//  DYBlock.h
//  DYSDK
//
//  Created by Null on 2018/2/6.
//  Copyright © 2018年 郭子健. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^DYCompletionBlock)(NSDictionary * _Nullable resultDic);
typedef void(^DYSuccessBlock)(NSDictionary * _Nullable dictionary);
typedef void(^DYFailBlock)(NSString * _Nullable message, NSError * _Nullable error);

@interface DYBlock : NSObject

@end
