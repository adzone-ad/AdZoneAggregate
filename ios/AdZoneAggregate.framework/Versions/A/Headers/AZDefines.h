//
//  AZDefines.h
//  Pods
//
//  Created by 张国志 on 2019/11/14.
//

#ifndef AZDefines_h
#define AZDefines_h

#define AZ_AGG_VERSION @"2.0"



typedef enum : NSUInteger {
    AZZoneTypeBanner = 1,
    AZZoneTypeInterstitial = 2,
    AZZoneTypeVideo = 3,
    AZZoneTypeSplash = 4,
    AZZoneTypeNative = 5
} AZZoneType;

@protocol AZLoggerProtocol <NSObject>
@required
- (void)logMsg:(NSString *)msg;
- (void)logError:(NSString *)error;
- (void)logWarning:(NSString *)warning;

@end

#endif /* AZDefines_h */
