//
//  AZAdapter.h
//  AdZoneAggregate
//
//  Created by 张国志 on 2019/11/14.
//

#import <Foundation/Foundation.h>
#import "AZConfigs.h"
NS_ASSUME_NONNULL_BEGIN


@protocol AZAdapterAbstract;

@protocol AZAdapterDelegate <NSObject>
@required
-(void)onLoadSuccess:(id<AZAdapterAbstract>)adapter;
-(void)onLoadError:(id<AZAdapterAbstract>)adapter errorMsg:(NSString*)errorMsg;
-(void)onClick:(id<AZAdapterAbstract>)adapter;
-(void)onDisplaySuccess:(id<AZAdapterAbstract>)adapter;
-(void)onDisplayError:(id<AZAdapterAbstract>)adapter errorMsg:(NSString*)errorMsg;
-(void)onClose:(id<AZAdapterAbstract>)adapter;
@end


@protocol AZAdapterAbstract <NSObject>
@required
@property(nonatomic, readonly) AZPlatformConfig* config;
@property(nonatomic, weak) id<AZAdapterDelegate> delegate;
-(instancetype)initWithPlatformConfig:(AZPlatformConfig*)config;
-(BOOL)isAvailable;
-(void)load;
-(void)unload;
@end

@protocol AZInterstitialAdapterAbstract <AZAdapterAbstract>
@required
-(BOOL)precentWithViewController:(UIViewController*)viewController;
@end

@interface AZAdapterBase : NSObject
@property(nonatomic, weak) id<AZAdapterDelegate> delegate;
@property(nonatomic, strong)AZPlatformConfig* config;
- (instancetype)initWithPlatformConfig:(AZPlatformConfig*)config;
-(void)onLoadSucess;
-(void)onLoadError:(NSString*)errorMsg;
-(void)onDisplaySuccess;
-(void)onDisplayError:(NSString*)errorMsg;
-(void)onClick;
@end


NS_ASSUME_NONNULL_END
