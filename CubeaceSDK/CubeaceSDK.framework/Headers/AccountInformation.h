//
//  AccountInformation.h
//  CubeaceSDK
//
//  Created by Cubeage on 2019/4/29.
//  Copyright © 2019 Cubeage. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AccountInformation : NSObject

+ (instancetype)sharedInstance;

//获取信息
- (id)getAccountInformationWithKey:(NSString *)key;

//设置信息
- (BOOL)setAccountInformationFor:(id)value WithKey:(NSString *)key;

//删除信息
- (BOOL)removeAccountInformationWithKey:(NSString *)key;

//iOS中WKWebView清除cookies
- (void)deleteWebCookiesCache;


@end

NS_ASSUME_NONNULL_END
