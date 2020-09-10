//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1AppNavigation-Protocol.h>
#import <T1Twitter/T1AppNavigationDocking-Protocol.h>
#import <T1Twitter/T1ComposeControllerDelegate-Protocol.h>
#import <T1Twitter/T1NudgeDelegate-Protocol.h>
#import <T1Twitter/T1OnboardingFlowControllerDelegate-Protocol.h>
#import <T1Twitter/T1TweetDraftsViewControllerDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, T1AmbientNotificationContainer, T1AppSplitViewController, T1ComposeController, T1DirectMessageParticipantValidator, T1DockingController, T1FoundMediaPresentationContext, T1NudgeFeedbackRequest, T1NudgePotentiallyToxic, T1OnboardingFlowController, T1PhotoGalleryPresentationContext, T1SettingsOnboardingFlowPresenter, T1TweetSentToast, TFNHUD, TFNTwitterAccount, TFNTwitterStatus, UIViewController;
@protocol T1PanelNavigationController, T1TabbedAppNavigationDelegate, TFSTwitterLegacyScribeLogMethods;

@interface T1TabbedAppNavigation : NSObject <T1AppNavigationDocking, T1OnboardingFlowControllerDelegate, T1ComposeControllerDelegate, T1TweetDraftsViewControllerDelegate, T1NudgeDelegate, T1AppNavigation>
{
    TFNTwitterAccount *_account;
    T1DockingController *_dockingController;
    T1ComposeController *_composeController;
    id <T1TabbedAppNavigationDelegate> _delegate;
    T1NudgePotentiallyToxic *_nudgePotentiallyToxic;
    T1NudgeFeedbackRequest *_nudgeFeedbackRequest;
    T1DirectMessageParticipantValidator *_directMessageParticipantValidator;
    T1OnboardingFlowController *_onboardingFlowController;
    CDUnknownBlockType _onboardingFlowCompletion;
    TFNHUD *_processHUD;
    NSMutableArray *_processCompositionOutboxAmbientNotificationContainers;
    TFNTwitterStatus *_savedSentCompositionRootStatus;
    T1TweetSentToast *_savedSentTweetToast;
    T1AmbientNotificationContainer *_savedSentAmbientNotificationContainer;
    T1FoundMediaPresentationContext *_foundMediaPresentationContext;
    T1PhotoGalleryPresentationContext *_photoGalleryPresentationContext;
    T1SettingsOnboardingFlowPresenter *_settingsOnboardingFlowPresenter;
}

+ (_Bool)_controllerAllowsJumpBackToHomeTimeline:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) T1SettingsOnboardingFlowPresenter *settingsOnboardingFlowPresenter; // @synthesize settingsOnboardingFlowPresenter=_settingsOnboardingFlowPresenter;
@property(retain, nonatomic) T1PhotoGalleryPresentationContext *photoGalleryPresentationContext; // @synthesize photoGalleryPresentationContext=_photoGalleryPresentationContext;
@property(retain, nonatomic) T1FoundMediaPresentationContext *foundMediaPresentationContext; // @synthesize foundMediaPresentationContext=_foundMediaPresentationContext;
@property(retain, nonatomic) T1AmbientNotificationContainer *savedSentAmbientNotificationContainer; // @synthesize savedSentAmbientNotificationContainer=_savedSentAmbientNotificationContainer;
@property(retain, nonatomic) T1TweetSentToast *savedSentTweetToast; // @synthesize savedSentTweetToast=_savedSentTweetToast;
@property(retain, nonatomic) TFNTwitterStatus *savedSentCompositionRootStatus; // @synthesize savedSentCompositionRootStatus=_savedSentCompositionRootStatus;
@property(retain, nonatomic) NSMutableArray *processCompositionOutboxAmbientNotificationContainers; // @synthesize processCompositionOutboxAmbientNotificationContainers=_processCompositionOutboxAmbientNotificationContainers;
@property(retain, nonatomic) TFNHUD *processHUD; // @synthesize processHUD=_processHUD;
@property(copy, nonatomic) CDUnknownBlockType onboardingFlowCompletion; // @synthesize onboardingFlowCompletion=_onboardingFlowCompletion;
@property(retain, nonatomic) T1OnboardingFlowController *onboardingFlowController; // @synthesize onboardingFlowController=_onboardingFlowController;
@property(retain, nonatomic) T1DirectMessageParticipantValidator *directMessageParticipantValidator; // @synthesize directMessageParticipantValidator=_directMessageParticipantValidator;
@property(retain, nonatomic) T1NudgeFeedbackRequest *nudgeFeedbackRequest; // @synthesize nudgeFeedbackRequest=_nudgeFeedbackRequest;
@property(retain, nonatomic) T1NudgePotentiallyToxic *nudgePotentiallyToxic; // @synthesize nudgePotentiallyToxic=_nudgePotentiallyToxic;
@property(readonly, nonatomic) __weak id <T1TabbedAppNavigationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) T1ComposeController *composeController; // @synthesize composeController=_composeController;
@property(readonly, nonatomic) T1DockingController *dockingController; // @synthesize dockingController=_dockingController;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void)_presentSendingTweetErrorAlertDialogWithAccount:(id)arg1 message:(id)arg2 draftsAction:(_Bool)arg3 editLaterAction:(_Bool)arg4 ruleAction:(_Bool)arg5 compositionForRetry:(id)arg6;
- (void)_presentSentTweetAmbientNotificationContainerIfActive:(id)arg1;
- (void)_presentSentTweetToastIfActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_tweetComposerDidCancelComposition:(id)arg1;
- (void)_createNudgeOperationDidIgnoreNudge:(id)arg1;
- (void)_compositionOutboxDidCancelFailedComposition:(id)arg1;
- (void)_compositionOutboxDidFailProcessComposition:(id)arg1;
- (void)_compositionOutboxDidFailExpiredCompositions:(id)arg1;
- (void)_compositionOutboxDidProcessComposition:(id)arg1;
- (void)_compositionOutboxWillProcessComposition:(id)arg1;
- (void)_loadedSharedDraft:(id)arg1;
- (void)tweetDraftsViewControllerDidTapClose:(id)arg1;
- (void)tweetDraftsViewController:(id)arg1 didSelectComposition:(id)arg2;
- (id)_t1_presentingViewController;
- (void)_prepareForPushPresentationWithSource:(long long)arg1 targetPanel:(long long)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)_handleDMRecipientValidatorResult:(unsigned long long)arg1 userReference:(id)arg2 validBlock:(CDUnknownBlockType)arg3 invalidBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)_checkDMPermissionForUserReference:(id)arg1 validBlock:(CDUnknownBlockType)arg2 invalidBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (_Bool)_shouldPresentFeedbackRequestNudgeForComposition:(id)arg1 account:(id)arg2;
- (_Bool)_shouldAnimatePresentationForSource:(long long)arg1;
- (void)_prepareForPresentationWithSource:(long long)arg1 dismissModal:(_Bool)arg2 targetPanel:(long long)arg3 popToRoot:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_prepareForPresentationWithSource:(long long)arg1 dismissModal:(_Bool)arg2 targetPanel:(long long)arg3 popToRoot:(_Bool)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)_prepareForModalPresentationWithSource:(long long)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_presentModalViewController:(id)arg1 fromViewController:(id)arg2 needsPreparationForModalPresentation:(_Bool)arg3 source:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_showModalViewController:(id)arg1 source:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)hasModal;
- (void)dismissModalAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showFleetThreadForUserReference:(id)arg1 fleetEntryID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showBookmarksWithSource:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)showRuxWithCxt:(id)arg1 refsrcTweet:(id)arg2 statusID:(long long)arg3 panel:(long long)arg4 modal:(_Bool)arg5 source:(long long)arg6 scribeContext:(id)arg7 sourceNavigationMetadata:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (id)ruxViewControllerWithCxt:(id)arg1 refsrcTweet:(id)arg2 statusID:(long long)arg3 statusNavigationContext:(id)arg4 scribeContext:(id)arg5 sourceNavigationMetadata:(id)arg6;
- (void)showWhoToFollowSuggestedUsersViewControllerWithSource:(long long)arg1 userID:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showTweetPreviewsTimelineWithParameters:(id)arg1 source:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showGenericURTPage:(id)arg1 title:(id)arg2 subtitle:(id)arg3 cacheID:(id)arg4 queryParameters:(id)arg5 source:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)showQRProfileWithSource:(long long)arg1 sourceNavigationMetadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dockViewController:(id)arg1 delegate:(id)arg2 userAction:(long long)arg3 animationTransition:(long long)arg4;
- (void)_t1_recordDidSendNudgedCompositionIfNeeded:(id)arg1 resultStatus:(id)arg2 forAccount:(id)arg3;
- (void)_t1_recordTweetSentWithoutShowingNudgeIdentifier:(id)arg1 forAccount:(id)arg2;
- (void)didDismissNudge:(id)arg1;
- (void)_presentNudgeAgainIfNeededFromPreviousNudge:(id)arg1;
- (_Bool)_presentNudgeIfNeededForComposition:(id)arg1 fromAccount:(id)arg2;
- (void)showTopicLandingForTopicID:(id)arg1 withSource:(long long)arg2 referringEvent:(id)arg3 prefersPeekPresentation:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)showFollowedTopicsForUsername:(id)arg1 withSource:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showTopicEducationForTopicName:(id)arg1 source:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showTopicForTaxonomy:(id)arg1 topicID:(id)arg2 topicImpressionID:(id)arg3 panel:(long long)arg4 source:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)showMomentsGuideWithSource:(long long)arg1 tabID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showProfileMomentsWithSource:(long long)arg1 sourceNavigationMetadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showMomentCapsuleWithMomentID:(id)arg1 source:(long long)arg2 navigationContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showPurchaseHistoryWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)handleAutomaticHomeNavigationIfNecessaryWithActiveTimeStamp:(double)arg1 inactiveTimeStamp:(double)arg2;
- (void)showPeopleScreenWithSource:(long long)arg1 pivotParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showPeopleScreenWithSource:(long long)arg1 fromPanel:(long long)arg2 pivotParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showPeopleAddressBookWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showTrendsWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showSuggestedUserListsWithCompletion:(CDUnknownBlockType)arg1;
- (void)showSuggestedUserListWithSlug:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showListDiscoveryPageFromSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showListCreationFlowFromSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_t1_showListDetailForList:(long long)arg1 onPage:(unsigned long long)arg2 source:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showListWithID:(long long)arg1 onPage:(unsigned long long)arg2 source:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)startAdaptiveFlowWithWizardFlow:(id)arg1 source:(long long)arg2;
- (void)private_unmuteConversation:(id)arg1 showAmbientNotification:(_Bool)arg2 showUndo:(_Bool)arg3 scribePage:(id)arg4 scribeSection:(id)arg5 scribeComponent:(id)arg6 scribeParameters:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)private_muteConversation:(id)arg1 showAmbientNotification:(_Bool)arg2 showUndo:(_Bool)arg3 scribePage:(id)arg4 scribeSection:(id)arg5 scribeComponent:(id)arg6 scribeParameters:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (id)private_muteConversationUndoView;
- (void)private_muteActionForConversation:(id)arg1 isMuting:(_Bool)arg2 showAmbientNotification:(_Bool)arg3 scribePage:(id)arg4 scribeSection:(id)arg5 scribeComponent:(id)arg6 scribeParameters:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)muteActionForConversation:(id)arg1 isMuting:(_Bool)arg2 showAmbientNotification:(_Bool)arg3 scribePage:(id)arg4 scribeSection:(id)arg5 scribeComponent:(id)arg6 scribeParameters:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)_muteUserWithUserReference:(id)arg1 scribePage:(id)arg2 scribeSection:(id)arg3 scribeComponent:(id)arg4 scribeParameters:(id)arg5 shouldEnqueueNotification:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_unmuteUserWithUserReference:(id)arg1 unmuteFleets:(_Bool)arg2 scribePage:(id)arg3 scribeSection:(id)arg4 scribeComponent:(id)arg5 scribeParameters:(id)arg6 shouldEnqueueNotification:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;
- (void)muteActionForUser:(id)arg1 isMuting:(_Bool)arg2 showConfirmationIfNeeded:(_Bool)arg3 scribePage:(id)arg4 scribeSection:(id)arg5 scribeComponent:(id)arg6 scribeParameters:(id)arg7;
- (void)_showReportStatusForContext:(id)arg1 source:(long long)arg2;
- (void)_showBlockStatusForContext:(id)arg1 source:(long long)arg2;
- (void)_unblockForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showBlockOrReportWithContext:(id)arg1 source:(long long)arg2;
- (id)_t1_conversationContainerViewControllerForViewModel:(id)arg1 statusID:(long long)arg2 account:(id)arg3 statusNavigationContext:(id)arg4 scribeContext:(id)arg5 sourceNavigationMetadata:(id)arg6 overrideNavigationMetadata:(id)arg7;
- (id)_t1_tweetDetailsViewControllerForViewModel:(id)arg1 statusID:(long long)arg2 account:(id)arg3 statusNavigationContext:(id)arg4 scribeContext:(id)arg5 sourceNavigationMetadata:(id)arg6 overrideNavigationMetadata:(id)arg7;
- (id)conversationViewControllerForViewModel:(id)arg1 statusID:(long long)arg2 account:(id)arg3 statusNavigationContext:(id)arg4 scribeContext:(id)arg5 sourceNavigationMetadata:(id)arg6 overrideNavigationMetadata:(id)arg7;
- (id)conversationViewControllerForViewModel:(id)arg1 statusID:(long long)arg2 account:(id)arg3 statusNavigationContext:(id)arg4 scribeContext:(id)arg5 sourceNavigationMetadata:(id)arg6;
- (void)showConversationViewControllerForViewModel:(id)arg1 statusID:(long long)arg2 account:(id)arg3 statusNavigationContext:(id)arg4 scribeContext:(id)arg5 sourceNavigationMetadata:(id)arg6 fromViewController:(id)arg7 animated:(_Bool)arg8;
- (void)showConversationViewControllerForViewModel:(id)arg1 statusID:(long long)arg2 fromPanel:(long long)arg3 source:(long long)arg4 navigationContext:(id)arg5 statusNavigationContext:(id)arg6 sourceNavigationMetadata:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)_t1_showConversationViewControllerForViewModel:(id)arg1 statusID:(long long)arg2 fromPanel:(long long)arg3 source:(long long)arg4 navigationContext:(id)arg5 statusNavigationContext:(id)arg6 sourceNavigationMetadata:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)showMyFollowersWithTab:(unsigned long long)arg1 source:(long long)arg2 sourceNavigationMetadata:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_presentMeControllerWithSource:(long long)arg1 sourceNavigationMetadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showAdsCompanionForPath:(id)arg1 source:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showTeamsInvitationFromPanel:(long long)arg1 navigationContext:(id)arg2 source:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showFollowerRequestsFromPanel:(long long)arg1 navigationContext:(id)arg2 source:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showEditProfileBirthdayWithSource:(long long)arg1 sourceNavigationMetadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showEditProfileWithSource:(long long)arg1 sourceNavigationMetadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showProfileForUsername:(id)arg1 orUserID:(long long)arg2 fromPanel:(long long)arg3 source:(long long)arg4 navigationContext:(id)arg5 sourceNavigationMetadata:(id)arg6 options:(unsigned long long)arg7 completion:(CDUnknownBlockType)arg8;
- (void)showProfileForUsername:(id)arg1 orUserID:(long long)arg2 fromPanel:(long long)arg3 navigationContext:(id)arg4 source:(long long)arg5 sourceNavigationMetadata:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)showProfileForUsername:(id)arg1 orUserID:(long long)arg2 fromPanel:(long long)arg3 source:(long long)arg4 sourceNavigationMetadata:(id)arg5 options:(unsigned long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)showProfileForUsername:(id)arg1 orUserID:(long long)arg2 fromPanel:(long long)arg3 source:(long long)arg4 sourceNavigationMetadata:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)showProfileForCurrentAccountFromSource:(long long)arg1 sourceNavigationMetadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_showPermissionForAuthorizedServiceType:(long long)arg1 withSource:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showNotificationsPermissionWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showLocationPermissionWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showLoginFlowWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showSignupFlowWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)flowController:(id)arg1 stateDidChange:(long long)arg2 withAccount:(id)arg3 flowStatus:(long long)arg4;
- (void)_t1_showOnboardingFlowWithArguments:(id)arg1 completion:(CDUnknownBlockType)arg2 flowCompletion:(CDUnknownBlockType)arg3 preparationBlock:(CDUnknownBlockType)arg4 presenterProviderBlock:(CDUnknownBlockType)arg5;
- (void)showOnboardingFlowWithArguments:(id)arg1 fromPanelID:(long long)arg2 source:(long long)arg3 completion:(CDUnknownBlockType)arg4 flowCompletion:(CDUnknownBlockType)arg5;
- (void)showOnboardingFlowWithArguments:(id)arg1 source:(long long)arg2 cancellable:(_Bool)arg3 completion:(CDUnknownBlockType)arg4 flowCompletion:(CDUnknownBlockType)arg5;
- (void)showDeviceFollowSettingsWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showTrendsLocationSettingsWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showTrendsSettingsWithSource:(long long)arg1 exploreSettingsEnabled:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showTrendsSettingsWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showUnifiedNotificationSettingsWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showBackupCodeGenerationWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showMuteSettingsWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showAccessibilitySettingsWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_showSettingsWithHierarchy:(id)arg1 source:(long long)arg2 targetPanel:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)switchToContributorForTeamsAccount:(id)arg1 source:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showLoginRequestsForAccount:(id)arg1 source:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showTwitterAnniversaryAnnouncement:(id)arg1 message:(id)arg2 action:(id)arg3 imageURL:(id)arg4 imageDimensions:(struct CGSize)arg5 tweetText:(id)arg6 cursor:(struct _NSRange)arg7 source:(long long)arg8 completion:(CDUnknownBlockType)arg9;
- (void)showNotificationsWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showAboutWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showDataUsageSettingsWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showMuteKeywordSettingsWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showUsernameSettingsWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showPhoneSettingsWithCompletion:(CDUnknownBlockType)arg1;
- (void)showEmailSettingsWithCompletion:(CDUnknownBlockType)arg1;
- (void)showChangePasswordSettingsWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_t1_showSettingsPageWithURL:(id)arg1 source:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showYourDevicesWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showYourTwitterDataDownloadWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showYourTwitterDataWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showEmailNotificationSettingsWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showPersonalizationSettingsWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showPrivacySettingsWithSource:(long long)arg1 scrollToDestination:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showLoginVerificationSettingsWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showContentPreferencesSettingsWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showAccountSecuritySettingsWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showAccountSettingsWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showSettingsWithSource:(long long)arg1 hierarchy:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showSettingsWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showAdvancedNotificationFilterSettingsWithSource:(long long)arg1 showFollowingMeTooltip:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showModalNotificationSettingsWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showNotificationSettingsWithSource:(long long)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showNotificationSettingsWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showSearchResultsForPlace:(id)arg1 location:(id)arg2 fromPanel:(long long)arg3 source:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)showSearchResultsForPlace:(id)arg1 fromPanel:(long long)arg2 source:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showSearchResultsForPlace:(id)arg1 source:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showSearchResultsWithOptions:(id)arg1 source:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showSearchResultsWithOptions:(id)arg1 fromPanel:(long long)arg2 source:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showBroadcastAsInvitedGuestWithBroadcastIDOrShareToken:(id)arg1 source:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showBroadcastWithBroadcastIDOrShareToken:(id)arg1 source:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showLiveEventTimelineWithMomentID:(id)arg1 source:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showLiveEventTimelineWithEventID:(id)arg1 timelineID:(id)arg2 sourceID:(id)arg3 muted:(_Bool)arg4 source:(long long)arg5 fromPanel:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)showLiveEventTimelineWithEventID:(id)arg1 timelineID:(id)arg2 sourceID:(id)arg3 source:(long long)arg4 fromPanel:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)showMessagesInboxWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showMessagesComposeWithText:(id)arg1 source:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_showDirectMessageConversation:(id)arg1 text:(id)arg2 welcomeMessageID:(id)arg3 options:(unsigned long long)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)showMessagesWithConversationID:(id)arg1 navigationContext:(id)arg2 source:(long long)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)showMessagesComposeWithRecipient:(id)arg1 text:(id)arg2 welcomeMessageID:(id)arg3 navigationContext:(id)arg4 source:(long long)arg5 options:(unsigned long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)showComposerDraftsWithSource:(long long)arg1 fromAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showComposerDraftsWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)composeControllerDidEndSession:(id)arg1;
- (void)composeControllerDidBeginSession:(id)arg1;
- (void)showPhotoGalleryWithSource:(long long)arg1;
- (void)showGIFSearchWithStatus:(id)arg1 protocolSource:(long long)arg2 sourceInfo:(id)arg3;
- (void)showComposerWithSessionConfig:(id)arg1;
- (long long)targetPanelForSearchResults;
- (void)setCurrentPanel:(long long)arg1 preserveModals:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setCurrentPanel:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSArray *visiblePanelIDs;
@property(readonly, nonatomic) long long currentPanelID;
@property(readonly, nonatomic) UIViewController<T1PanelNavigationController> *currentPanelNavigationController;
@property(readonly, nonatomic) _Bool canShowCompose;
@property(readonly, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribe;
@property(readonly, nonatomic) T1AppSplitViewController *appSplitViewController;
@property(readonly, nonatomic) UIViewController *presentationViewController;
- (id)init;
- (id)initWithAccount:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

