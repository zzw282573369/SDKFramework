//
//  SDKNetRequestManager.h
//  CubeaceSDK
//
//  Created by Cubeage on 2019/7/11.
//  Copyright © 2019 Cubeage. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^Completion)(BOOL success, id data, NSError* error);


@interface SDKNetRequestManager : NSObject


+ (SDKNetRequestManager*)sharedInstance;

//////////////////////提供给外部工程请求///////////////////////
//post请求方式
- (void)postWithURL:(NSString*)urlStr Parameter:(id)parameter SetHeader:(NSDictionary*)headDict Completion:(void(^)(BOOL success, id data, NSError* error))completion;

//get请求方式
- (void)getWithURL:(NSString *)urlStr Parameter:(id)parameter SetHeader:(NSDictionary*)headDict Completion:(void (^)(BOOL success, id data, NSError* error))completion;
///////////////////////////////////////////////////////////


//SDK授权使用验证
- (void)verifyAppInfoCompletion:(void (^)(BOOL success, id data, NSError* error))completion;

//请求从后台服务器获取设备UUID，用于之后的每一个带有header头部的API接口
- (void)requestGetDeviceUuidCompletion:(void (^)(BOOL success, id data, NSError* error))completion;

//獲取事件消息， SDK 前端要輪詢這個接口，初步約定 3 秒請求一次
//要在登錄狀態調用,沒有額外參數
- (void)requestEventMessageCompletion:(void (^)(BOOL success, id data, NSError* error))completion;

//漏单补发请求
- (void)checkOrderSupplyAgainOrderInfo:(NSDictionary *)orderNoInfo Completion:(void (^)(BOOL success, id data, NSError* error))completion;

//获取所有内购产品的ID
- (void)requestAllProductsIDCompletion:(void (^)(BOOL success, id data, NSError* error))completion;

//获取下载有奖配置列表
- (void)requestDownloadAppConfigsPageIndex:(NSInteger)index Completion:(void (^)(BOOL success, id data, NSError* error))completion;

//请求任务列表,
- (void)requestMissionListsPageIndex:(NSInteger)index Category:(NSInteger)categoryType Completion:(void (^)(BOOL success, id data, NSError* error))completion;

//获取提交评分的详情
- (void)requestMissionDetailsCompletion:(void (^)(BOOL success, id data, NSError* error))completion;

//提交评分
- (void)submitRatingScore:(float)score Feedback:(NSString *)feedbackStr Completion:(void (^)(BOOL success, id data, NSError* error))completion;

//填写上线邀请码
- (void)fillLeaderReferralCode:(NSString *)referralCode MissionId:(NSInteger)missionId Completion:(void (^)(BOOL success, id data, NSError* error))completion;

//更新升级
- (void)requestUpdateAndUpgradeMissionId:(NSInteger)missionId MissionOptionId:(NSInteger)missionOptionId Completion:(void (^)(BOOL success, id data, NSError* error))completion;

//添加关注
- (void)requestFollowMissionId:(NSInteger)missionId MissionOptionId:(NSInteger)missionOptionId Completion:(void (^)(BOOL success, id data, NSError* error))completion;

//下载游戏
- (void)requestDownloadAppMissionId:(NSInteger)missionId MissionOptionId:(NSInteger)missionOptionId Completion:(void (^)(BOOL success, id data, NSError* error))completion;

//添加分享
- (void)requestShareMissionId:(NSInteger)missionId ShareChannel:(NSInteger)shareChannel Completion:(void (^)(BOOL success, id data, NSError* error))completion;

//领取奖励
- (void)rewardWithMissionType:(NSInteger)missionType MissionId:(NSInteger)missionId MissionOptionId:(NSInteger)missionOptionId Completion:(void (^)(BOOL success, id data, NSError* error))completion;

//crash日志上传
- (void)crashLogUploadContent:(NSString *)logContent Completion:(void (^)(BOOL success, id data, NSError* error))completion;

//日志上传
- (void)logCollectionUploadContent:(NSString *)logContent Completion:(void (^)(BOOL success, id data, NSError* error))completion;

//device token上传
- (void)reportFirebaseToken:(NSString *)token DeviceCode:(NSString *)deviceCode Completion:(void (^)(BOOL success, id data, NSError* error))completion;

//请求是否是游客guest登录
- (void)isGuestCompletion:(void (^)(BOOL success, id data, NSError* error))completion;

//GameCenterLogin登录请求
- (void)gameCenterLogin:(NSDictionary *)loginParameter Completion:(void (^)(BOOL success, id data, NSError* error))completion;

@end

NS_ASSUME_NONNULL_END
