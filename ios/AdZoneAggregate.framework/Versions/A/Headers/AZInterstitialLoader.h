//
//  AZInterstitialLoader.h
//  AdZoneAggregate
//
//  Created by 张国志 on 2019/11/20.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AZAdLoader.h"

NS_ASSUME_NONNULL_BEGIN

@class AZInterstitialLoader;

@protocol AZInterstitialLoaderDelegate <NSObject>
-(void)onLoadSuccess:(AZInterstitialLoader*)loader;
-(void)onLoadError:(AZInterstitialLoader*)loader errorMsg:(NSString*)errorMsg;
-(void)onDisplaySuccess:(AZInterstitialLoader*)loader;
-(void)onDisplayError:(AZInterstitialLoader*)loader errorMsg:(NSString*)errorMsg;
-(void)onClick:(AZInterstitialLoader*)loader;
-(void)onClose:(AZInterstitialLoader*)loader;
@end

@interface AZInterstitialLoader : AZAdLoaderBase <AZAdLoaderAbstract>
@property (nonatomic, assign) id<AZInterstitialLoaderDelegate> delegate;
-(BOOL)precentWithViewController:(UIViewController*)viewController;
@end

NS_ASSUME_NONNULL_END
