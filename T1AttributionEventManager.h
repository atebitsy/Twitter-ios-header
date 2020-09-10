//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TFNHUD, TFSTimer;

@interface T1AttributionEventManager : NSObject
{
    _Bool _didBecomeActive;
    _Bool _didContinueUserActivity;
    _Bool _didEnterBackground;
    _Bool _didHandleLaunchURL;
    _Bool _didHandleShortcutURL;
    _Bool _didEnqueueVisibleAttributionOpenEvent;
    NSMutableDictionary *_deferredDispatchBlocksForDidBecomeActive;
    TFNHUD *_postAttributionEventHUD;
    TFSTimer *_postAttributionEventTimeoutTimer;
}

+ (id)_t1_scribeForAccount:(id)arg1;
+ (id)_t1_standardUserDefaults;
+ (id)_t1_refSrcParametersFromUserDefaults;
+ (id)_t1_expandShortRefSrc:(id)arg1 forShortenedTrackingParameters:(id)arg2;
+ (id)_t1_refSrc:(id)arg1 bySubKey:(id)arg2;
+ (void)storeLandingRefSrcInUserDefaults:(id)arg1;
+ (void)storeRefSrcInUserDefaultsFromDictionary:(id)arg1 timestamp:(double)arg2;
+ (id)scribeParametersForRefSrcString:(id)arg1;
+ (id)trackingUrlStringForReferedUrlParameters:(id)arg1;
+ (id)externalReferredScribeParametersDictForUrl:(id)arg1;
+ (void)trackReferredOpenWithUrl:(id)arg1 accountOrNil:(id)arg2;
+ (void)trackNonReferredOpenWithAccountOrNil:(id)arg1;
+ (void)trackWithActionType:(id)arg1 integrationType:(id)arg2 account:(id)arg3;
+ (void)_t1_fetchAppleSearchAttributionParametersWithCompletion:(CDUnknownBlockType)arg1;
+ (void)_t1_fetchCarrierAndAdIDFAWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_t1_callAppEventTrackingWithAccount:(id)arg1 parameters:(id)arg2;
+ (id)_t1_parametersWithRefSrc:(id)arg1 matClickId:(id)arg2 actionType:(id)arg3 integrationType:(id)arg4;
+ (void)_t1_callAppEventTrackingForGuestWithParameters:(id)arg1;
+ (void)_t1_guestTrackWithRefSrc:(id)arg1 matClickId:(id)arg2 actionType:(id)arg3 integrationType:(id)arg4 extraParameters:(id)arg5;
+ (void)guestTrackWithRefSrc:(id)arg1 matClickId:(id)arg2 actionType:(id)arg3 integrationType:(id)arg4;
+ (void)_t1_trackWithRefSrc:(id)arg1 matClickId:(id)arg2 actionType:(id)arg3 integrationType:(id)arg4 account:(id)arg5 extraParameters:(id)arg6;
+ (id)sharedManager;
- (void).cxx_destruct;
- (id)referralSourceForProfileUserTimeline;
- (id)referralSourceForProfileClusterFollow;
- (id)referralSourceParameters;
- (void)private_postAttributionEventTimeoutTimerFired;
- (void)private_didPostAttributionEventWithDeepLink:(id)arg1 error:(id)arg2;
- (void)private_willPostAttributionEvent;
- (void)private_dispatchBlockWhenActive:(CDUnknownBlockType)arg1 withDelay:(double)arg2;
- (_Bool)isExternalReferralURL:(id)arg1;
- (void)trackUserDidSignUpWithAccount:(id)arg1;
- (void)trackUserDidSignInWithAccount:(id)arg1;
- (void)trackAppWillHandleWebBrowsingURL:(id)arg1 withAccount:(id)arg2;
- (void)trackAppWillHandleSiriURL:(id)arg1 withAccount:(id)arg2;
- (void)trackAppWillHandleShortcutURL:(id)arg1 withAccount:(id)arg2;
- (void)trackAppWillHandleLaunchURL:(id)arg1 withAccount:(id)arg2;
- (void)trackAppWillContinueUserActivity:(id)arg1 withAccount:(id)arg2;
- (void)trackAppDidEnterBackgroundWithAccount:(id)arg1;
- (void)trackAppDidBecomeActiveWithAccount:(id)arg1 launchURL:(id)arg2;
- (void)trackAppDidUpgrade;
- (void)trackAppDidFirstLaunch;
- (id)attributionHeaderFields;
- (void)private_postDeferredAttributionEvent:(long long)arg1 forAccount:(id)arg2 referringLinkURL:(id)arg3 parameters:(id)arg4 visible:(_Bool)arg5;
- (void)postAttributionEventForAccount:(id)arg1 referringLinkURL:(id)arg2;

@end

