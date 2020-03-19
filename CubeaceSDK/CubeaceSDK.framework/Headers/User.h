//
//  User.h
//  CubeaceSDK
//
//  Created by Cubeage on 2019/5/29.
//  Copyright © 2019 Cubeage. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface User : NSObject<NSCoding>

+ (instancetype)sharedInstance;

@property (nonatomic, copy)NSString                 *defaultGameUserId;  // 当前登录用户的ID
@property (nonatomic, copy)NSArray                  *gameUserIds;  // 用户ID组
@property (nonatomic, copy)NSString                 *userName;  // 用户名
@property (nonatomic, copy)NSString                 *signInToken;  //
@property (nonatomic, copy)NSString                 *avatar;  //  头像URL

@end

NS_ASSUME_NONNULL_END
