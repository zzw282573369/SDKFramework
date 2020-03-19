//
//  NotificationAction.h
//  CubeaceSDK
//
//  Created by Cubeace on 2020/2/25.
//  Copyright © 2020 Cubeage. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, NotificationActionType) {
    NotificationActionTypeNone = 0,
    NotificationActionTypeGoMarket,
    NotificationActionTypeGoUrl
};

NS_ASSUME_NONNULL_BEGIN

@interface NotificationAction : NSObject

//通知行为类型
@property (nonatomic, assign)NotificationActionType actionType;

////////当actionType为 NotificationActionTypeGoMarket时， 这两个属性一定要设置///////////
//要打开的应用的URL Schemes
@property (nonatomic, strong)NSString * urlSchemesString;
//要打开的应用的App Store下载地址
@property (nonatomic, strong)NSString * appStoreDownloadUrlString;
////////////////////////////////////////////////////////////////////////////////////

////////当actionType为 NotificationActionTypeGoUrl时， 这个属性一定要设置///////////
//要打开URL地址
@property (nonatomic, strong)NSString * openUrlString;
////////////////////////////////////////////////////////////////////////////////////



@end

NS_ASSUME_NONNULL_END
