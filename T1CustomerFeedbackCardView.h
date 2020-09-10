//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1CardView.h>

#import <T1Twitter/T1CustomerFeedbackRatingViewDelegate-Protocol.h>
#import <T1Twitter/TFNHTMLTextViewDelegate-Protocol.h>

@class NSString, T1CustomerFeedbackCardViewModel, T1CustomerFeedbackRatingViewsContainerView, TFNHTMLTextView, TFNLegacyButton, UIButton, UILabel, UIView;

@interface T1CustomerFeedbackCardView : T1CardView <TFNHTMLTextViewDelegate, T1CustomerFeedbackRatingViewDelegate>
{
    T1CustomerFeedbackCardViewModel *_viewModel;
    UIView *_topLineView;
    UIView *_bottomLineView;
    UIButton *_closeButton;
    UILabel *_titleLabel;
    TFNHTMLTextView *_privacyPolicyTextView;
    T1CustomerFeedbackRatingViewsContainerView *_ratingViewsContainer;
    TFNLegacyButton *_addCommentButton;
    TFNLegacyButton *_tweetButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFNLegacyButton *tweetButton; // @synthesize tweetButton=_tweetButton;
@property(readonly, nonatomic) TFNLegacyButton *addCommentButton; // @synthesize addCommentButton=_addCommentButton;
@property(readonly, nonatomic) T1CustomerFeedbackRatingViewsContainerView *ratingViewsContainer; // @synthesize ratingViewsContainer=_ratingViewsContainer;
@property(readonly, nonatomic) TFNHTMLTextView *privacyPolicyTextView; // @synthesize privacyPolicyTextView=_privacyPolicyTextView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(readonly, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) T1CustomerFeedbackCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)_fireCardEvent:(id)arg1 feedbackState:(unsigned long long)arg2 score:(id)arg3;
- (void)_fireCardEvent:(id)arg1;
- (void)_fireOpenURLCardEvent:(id)arg1;
- (void)_postResizeNotification;
- (void)_registerCAPIEventHandler;
- (void)_transitionToFeedbackState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_setUpSubviewsForFeedbackState:(unsigned long long)arg1;
- (void)_removeFeedbackView;
- (void)feedbackRatingView:(id)arg1 didUpdateToValue:(unsigned long long)arg2;
- (void)_feedbackTweetSubmitted:(id)arg1;
- (void)_feedbackCommentSubmitted:(id)arg1;
- (void)_feedbackScoreResponse:(id)arg1;
- (void)_tweetButtonTapped:(id)arg1;
- (void)_addCommentButtonTapped:(id)arg1;
- (void)_closeButtonTapped:(id)arg1;
- (void)htmlTextViewHandleUserAccessibilityTap:(id)arg1;
- (void)htmlTextView:(id)arg1 didTapLink:(id)arg2;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg1;
- (void)cardContextDidUpdate;
- (id)calculatedLayoutMetrics;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

