//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNRemoteNotificationCategoryProvider-Protocol.h>

@class NSString;

@interface T1PushCategories : NSObject <TFNRemoteNotificationCategoryProvider>
{
}

- (id)_t1_replyAction;
- (id)_t1_sayHiAction;
- (id)_t1_retweetAction;
- (id)_t1_followAction;
- (id)_t1_favoriteAction;
- (id)_t1_replyToDirectMessageAction;
- (id)_t1_muteDirectMessageConversationAction;
- (id)_t1_declineFollowRequestAction;
- (id)_t1_acceptFollowRequestAction;
- (id)notificationCategories;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

