//
//  AZAdLoader.h
//  AdZoneAggregate
//
//  Created by 张国志 on 2019/11/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol AZAdLoaderAbstract <NSObject>
@required
-(BOOL)isAvailable;
-(BOOL)isLoading;
-(BOOL)isDisplaying;
-(void)load;
-(void)unload;
@end


@interface AZAdLoaderBase : NSObject
@property(nonatomic) NSTimeInterval timeout;
@property(nonatomic) unsigned short retryTimes;
@end


NS_ASSUME_NONNULL_END
