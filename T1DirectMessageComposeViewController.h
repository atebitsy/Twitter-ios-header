//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

@class NSString, T1DirectMessageConversationQuickReplyPresentationBehavior, TFNDirectMessageComposition, TFNTwitterAccount, _TtC9T1Twitter37DirectMessageComposerInterstitialView, _TtC9T1Twitter40DirectMessageComposerInterstitialViewOld;

@interface T1DirectMessageComposeViewController : TFNViewController
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: attachmentDelegate
    // Error parsing type: , name: quickReplyDelegate
    // Error parsing type: , name: kClipMinimumDurationSeconds
    // Error parsing type: , name: audioViewTrailingConstraint
    // Error parsing type: , name: player
    // Error parsing type: , name: playbackTimeObserver
    // Error parsing type: , name: recorder
    // Error parsing type: , name: recordingQueue
    // Error parsing type: , name: isFirstCompositionLoad
    // Error parsing type: , name: audioAutoSendEnabled
    // Error parsing type: , name: intersectsAudioAutoSendButton
    // Error parsing type: , name: account
    // Error parsing type: , name: scribeContext
    // Error parsing type: , name: autocompleteBehavior
    // Error parsing type: , name: typingIndicatorBehavior
    // Error parsing type: , name: quickReplyPresentationBehavior
    // Error parsing type: , name: quotedStatusPreviewEnabled
    // Error parsing type: , name: attachmentsDisabled
    // Error parsing type: , name: shouldBecomeFirstResponder
    // Error parsing type: , name: disableAutocorrection
    // Error parsing type: , name: untrustedInterstitial
    // Error parsing type: , name: untrustedInterstitialOld
    // Error parsing type: , name: interstitialContainerOld
    // Error parsing type: , name: interstitialContainer
    // Error parsing type: , name: interstitialContainerOldHeightConstraint
    // Error parsing type: , name: interstitialContainerOldBottomConstraint
    // Error parsing type: , name: interstitialContainerBottomConstraint
    // Error parsing type: , name: composeBarMaxHeight
    // Error parsing type: , name: _composeBarHidden
    // Error parsing type: , name: _supportedComponents
    // Error parsing type: , name: composition
    // Error parsing type: , name: state
    // Error parsing type: , name: _layoutIgnoresSafeArea
    // Error parsing type: , name: dismissKeyboardOnScroll
    // Error parsing type: , name: quotedStatusPreviewController
    // Error parsing type: , name: $__lazy_storage_$_cardPreviewController
    // Error parsing type: , name: attachmentsViewController
    // Error parsing type: , name: customKeyboardViewController
    // Error parsing type: , name: dropManager
    // Error parsing type: , name: dropIndicationView
    // Error parsing type: , name: foundMediaController
    // Error parsing type: , name: fullScreenPhotoGallery
    // Error parsing type: , name: quickReplyOptionsPickerViewController
    // Error parsing type: , name: userDismissedQuickReplyID
    // Error parsing type: , name: quickReplyOptionsPickerAutoDismissTimer
    // Error parsing type: , name: composeToolbarTopConstraint
    // Error parsing type: , name: composeToolbar
    // Error parsing type: , name: leftConstraint
    // Error parsing type: , name: customKeyboardContainerView
    // Error parsing type: , name: customKeyboardHeightConstraint
    // Error parsing type: , name: backgroundView
    // Error parsing type: , name: ambientNotificationPlaceholderView
    // Error parsing type: , name: composeBarHeightConstraint
    // Error parsing type: , name: composeBarBottomConstraint
    // Error parsing type: , name: animatingKeyboardFrame
    // Error parsing type: , name: lockComposeBarPosition
    // Error parsing type: , name: lockComposeBarPositionConstraint
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentFoundMediaChooserTapped;
- (void)mediaAttachButtonLongPressed;
- (void)presentMediaGalleryTapped;
- (void)stopVoiceRecording;
- (void)presentVoiceTapped;
- (void)voiceAttachButtonTapped;
- (void)handleVoiceRecordLongPress:(id)arg1;
- (void)quickReplyButtonTapped:(id)arg1;
- (void)sendButtonTapped:(id)arg1;
- (void)keyboardDidShowWithNotification:(id)arg1;
- (void)keyboardDidHideWithNotification:(id)arg1;
- (void)keyboardWillChangeWithNotification:(id)arg1;
- (id)scribeSection;
- (id)scribePage;
- (void)swipeToDismissKeyboard;
- (void)focus;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)setComposeBarHidden:(_Bool)arg1 force:(_Bool)arg2;
- (void)enableAutoDismissalWithDataViewController:(id)arg1;
@property(nonatomic, readonly) _Bool tfn_prefersTabBarShadowHidden;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)layoutGuidesDidChange:(long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)updateViewConstraints;
- (void)viewDidFullyAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccount:(id)arg1 conversation:(id)arg2;
@property(nonatomic, readonly) double composeBarHeight;
@property(nonatomic, copy) NSString *placeholderText;
@property(nonatomic, readonly) _Bool stateIsQuickReply;
@property(nonatomic, retain) TFNDirectMessageComposition *composition; // @synthesize composition;
@property(nonatomic) unsigned long long supportedComponents;
@property(nonatomic) _Bool composeBarHidden;
@property(nonatomic, retain) _TtC9T1Twitter40DirectMessageComposerInterstitialViewOld *untrustedInterstitialOld; // @synthesize untrustedInterstitialOld;
@property(nonatomic, retain) _TtC9T1Twitter37DirectMessageComposerInterstitialView *untrustedInterstitial; // @synthesize untrustedInterstitial;
@property(nonatomic) _Bool attachmentsDisabled; // @synthesize attachmentsDisabled;
@property(nonatomic, retain) T1DirectMessageConversationQuickReplyPresentationBehavior *quickReplyPresentationBehavior; // @synthesize quickReplyPresentationBehavior;
@property(nonatomic, readonly) TFNTwitterAccount *account; // @synthesize account;

@end

