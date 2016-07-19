//
//  YUNetHelp.h
//  Jianzhiweishi
//
//  Created by qianfeng on 16/2/20.
//  Copyright © 2016年 qianfeng. All rights reserved.
//

#import "AFNetworking.h"

@interface YUNetHelp : AFHTTPSessionManager
+ (instancetype)shareManager;
//+ (NSURLSessionDataTask *)getDataWithParam:(NSDictionary *)params andPath:(NSString *)path andSuccess:(void (^)(id responseObject))success failure:(void (^)(id result))failure;
//
//+ (NSURLSessionDataTask *)postWithParam:(NSDictionary *)params andPath:(NSString *)path andSuccess:(void (^)(id responseObject))success failure:(void (^)(id result))failure;

//+ (NSURLSessionDataTask *)getDataWithParam:(NSDictionary *)params orPostParam:(NSDictionary *)postParam andPath:(NSString *)path andSuccess:(void (^)(id responseObject))success failure:(void (^)(id result))failure;

// 封装GET请求，成功和失败在一个 block 里面处理
+ (void)GETWithExtraUrl:(NSString *)url andParam:(NSDictionary *)params andComplete:(void (^)(BOOL success, id result))complete;

// 封装POST请求，成功和失败在一个 block 里面处理
+ (void)POSTWithExtraUrl:(NSString *)url andParam:(NSDictionary *)params andComplete:(void (^)(BOOL success, id result))complete;

- (void)isReachToWeb;

@end
