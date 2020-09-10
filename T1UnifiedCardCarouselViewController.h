//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1UnifiedCardSwipeableCollectionViewCellEventDelegate-Protocol.h>
#import <T1Twitter/T1UnifiedCardVideoCarouselObserver-Protocol.h>
#import <T1Twitter/TAVUIAutoplayable-Protocol.h>

@class NSArray, NSNumber, NSString, T1AdFormatsFeatures, TAVUIAutoplayDisablingFilter, TFNTwitterAccount, TFNTwitterUnifiedCardSwipeableMediaComponentModel, TFSTwitterScribeContext, TIPImagePipeline, UIView;
@protocol T1UnifiedCardCarouselViewControllerDelegate;

@interface T1UnifiedCardCarouselViewController : TFNItemsDataViewController <TAVUIAutoplayable, T1UnifiedCardVideoCarouselObserver, T1UnifiedCardSwipeableCollectionViewCellEventDelegate>
{
    _Bool _playbackDesired;
    _Bool _isActiveAutoplayable;
    double _mediaWidth;
    TFNTwitterAccount *_account;
    NSNumber *_mediaLeadingInset;
    TFNTwitterUnifiedCardSwipeableMediaComponentModel *_component;
    TIPImagePipeline *_imagePipeline;
    unsigned long long _previousPageIndex;
    TFSTwitterScribeContext *_scribeContext;
    TAVUIAutoplayDisablingFilter *_autoplayDeactivationPolicy;
    unsigned long long _pageIndexBeforeRotation;
    T1AdFormatsFeatures *_featureSwitches;
    id <T1UnifiedCardCarouselViewControllerDelegate> _delegate;
    NSArray *_mediaIDs;
}

+ (Class)collectionViewClass;
+ (id)indexCache;
- (void).cxx_destruct;
@property(nonatomic) _Bool isActiveAutoplayable; // @synthesize isActiveAutoplayable=_isActiveAutoplayable;
@property(retain, nonatomic) NSArray *mediaIDs; // @synthesize mediaIDs=_mediaIDs;
@property(nonatomic) __weak id <T1UnifiedCardCarouselViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) T1AdFormatsFeatures *featureSwitches; // @synthesize featureSwitches=_featureSwitches;
@property(nonatomic) unsigned long long pageIndexBeforeRotation; // @synthesize pageIndexBeforeRotation=_pageIndexBeforeRotation;
@property(retain, nonatomic) TAVUIAutoplayDisablingFilter *autoplayDeactivationPolicy; // @synthesize autoplayDeactivationPolicy=_autoplayDeactivationPolicy;
@property(nonatomic) _Bool playbackDesired; // @synthesize playbackDesired=_playbackDesired;
@property(readonly, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(nonatomic) unsigned long long previousPageIndex; // @synthesize previousPageIndex=_previousPageIndex;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
@property(retain, nonatomic) TFNTwitterUnifiedCardSwipeableMediaComponentModel *component; // @synthesize component=_component;
@property(retain, nonatomic) NSNumber *mediaLeadingInset; // @synthesize mediaLeadingInset=_mediaLeadingInset;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) double mediaWidth; // @synthesize mediaWidth=_mediaWidth;
- (struct CGRect)tav_boundsForClippingDescendantsOfScrollView:(id)arg1;
- (void)_t1_advanceToCellWithPageIndex:(long long)arg1;
- (void)videoDidPlayToEndWithCurrentPlaybackState:(id)arg1;
- (id)didHapticTouchMediaOnCell:(id)arg1;
- (void)didLongPressMediaOnCell:(id)arg1;
- (void)didTapMediaOnCell:(id)arg1;
- (void)_t1_handleAccessibilityVoiceOverStatusChanged:(id)arg1;
@property(readonly, nonatomic) UIView *autoplayableView;
- (void)willResignAsActiveAutoplayableWithManager:(id)arg1;
- (void)didBecomeActiveAutoplayableWithManager:(id)arg1;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (double)_t1_fullBleedXOffsetForIndex:(unsigned long long)arg1;
- (void)_t1_handlePagingToIndex:(unsigned long long)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_t1_scrollToCachedIndexIfPossible;
- (unsigned long long)_t1_pageIndexForOffset:(double)arg1;
@property(readonly, nonatomic) unsigned long long currentPageIndex;
- (void)_t1_setUpAdapter;
- (void)_t1_setupCollectionView;
- (id)_t1_layoutForCurrentBoundsWithLeadingInset:(double)arg1 trailingInset:(double)arg2;
- (void)_t1_updateCollectionViewLayout;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSwipeableComponent:(id)arg1 imagePipeline:(id)arg2 account:(id)arg3 scribeContext:(id)arg4 delegate:(id)arg5 mediaLeadingInset:(id)arg6;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

