//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@protocol IAppDataExt <NSObject>

@optional
- (void)OnNewAppStatusChanged;
- (void)OnAppInfoChanged:(NSString *)arg1;
- (void)OnAppWatermarkChanged:(NSString *)arg1;
- (void)OnAppIconChanged:(NSString *)arg1;
- (void)OnAppRegisterInfoChanged;
- (void)OnAppSettingChanged;
- (void)OnGotBizAppInfo;
- (void)OnGotAppPersonalInfoList:(NSMutableArray *)arg1 errType:(int)arg2;
- (void)OnGotAuthAppList:(NSMutableArray *)arg1 errType:(int)arg2;
- (void)OnGotListAppSettingItem:(NSMutableArray *)arg1 errType:(int)arg2;
- (void)OnUpdateAppAuthState:(NSString *)arg1 errType:(int)arg2;
- (void)OnUpdateAppRecvMsgState:(NSString *)arg1 appSettingFlag:(int)arg2 errType:(int)arg3;
@end

