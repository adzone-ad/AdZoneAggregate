//
//  AZAggregate.h
//  AdZoneAggregate
//
//  Created by 张国志 on 2019/11/14.
//

#import <Foundation/Foundation.h>
#import "AZPlatform.h"
NS_ASSUME_NONNULL_BEGIN


typedef void(^AZLoadRemoteConfigSuccessCallback)(void);
typedef void(^AZLoadRemoteConfigErrorCallback)(NSString* errorMsg);


@interface AZAggregate : NSObject

@property(nonatomic, copy) NSString* zykey;

+(AZAggregate*)instance;

-(void)registerPlatform:(id<AZPlatformAbstract>)platform;

-(void)loadRemoteConfig:(NSArray<NSNumber*>*)zoneTypes
              onSuccess:(AZLoadRemoteConfigSuccessCallback)successCallback
                onError:(AZLoadRemoteConfigErrorCallback)errorCallback;

@end

NS_ASSUME_NONNULL_END
