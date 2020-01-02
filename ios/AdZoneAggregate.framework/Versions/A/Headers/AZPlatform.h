//
//  AZPlatform.h
//  AdZoneAggregate
//
//  Created by 张国志 on 2019/11/14.
//

#import <Foundation/Foundation.h>
#import "AZDefines.h"
NS_ASSUME_NONNULL_BEGIN

@protocol AZPlatformAbstract <NSObject>
@required
-(NSString*)sdkVersion;
-(int)typeId;
-(NSString*)name;
-(NSArray<Class>*)getAdapterClasses;
-(Class)getAdapterClass:(AZZoneType)zoneType;
@end

@interface AZPlatformBase : NSObject
-(Class)getAdapterClass:(AZZoneType)zoneType;
@end


NS_ASSUME_NONNULL_END
