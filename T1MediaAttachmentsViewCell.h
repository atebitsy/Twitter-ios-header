//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <T1Twitter/T1MediaAttachmentViewDelegate-Protocol.h>

@class NSMutableArray, NSString, T1MediaAttachmentAttributionView, T1MediaAttachmentView, T1MediaAttachmentViewLivePhotoRenderCache, TFNCustomHitTestView, TFNLegacyButton, TFNPaddedButton, TFNTwitterMediaAsset, TIPImagePipeline, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol T1MediaAttachmentsViewCellDelegate;

@interface T1MediaAttachmentsViewCell : UICollectionViewCell <T1MediaAttachmentViewDelegate>
{
    UIView *_containerView;
    T1MediaAttachmentView *_attachmentView;
    T1MediaAttachmentAttributionView *_attributionView;
    TFNPaddedButton *_removeButton;
    TFNCustomHitTestView *_buttonsContainerView;
    TFNLegacyButton *_livePhotoToggleButton;
    TFNLegacyButton *_editButton;
    TFNLegacyButton *_altTextButton;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSMutableArray *_customAccessiblityActions;
    T1MediaAttachmentViewLivePhotoRenderCache *_animatedGIFCache;
    _Bool _showsRemoveButton;
    _Bool _isMixedMediaBadgeEnabled;
    _Bool _buttonsHidden;
    id <T1MediaAttachmentsViewCellDelegate> _delegate;
    TFNTwitterMediaAsset *_attachment;
    double _visibleLowerBound;
    unsigned long long _animatedLivePhotoType;
}

+ (struct UIEdgeInsets)preferredMarginForAttachment:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, getter=isButtonsHidden) _Bool buttonsHidden; // @synthesize buttonsHidden=_buttonsHidden;
@property(nonatomic) _Bool isMixedMediaBadgeEnabled; // @synthesize isMixedMediaBadgeEnabled=_isMixedMediaBadgeEnabled;
@property(nonatomic) unsigned long long animatedLivePhotoType; // @synthesize animatedLivePhotoType=_animatedLivePhotoType;
@property(nonatomic) _Bool showsRemoveButton; // @synthesize showsRemoveButton=_showsRemoveButton;
@property(nonatomic) double visibleLowerBound; // @synthesize visibleLowerBound=_visibleLowerBound;
@property(retain, nonatomic) TFNTwitterMediaAsset *attachment; // @synthesize attachment=_attachment;
@property(nonatomic) __weak id <T1MediaAttachmentsViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)attachmentViewDidDisplayPreview:(id)arg1;
- (id)_accessibilityHintForRemoveButton;
- (id)_accessibilityLabelForRemoveButton;
- (id)_t1_reorderingCustomAccessibilityActionToIndex:(unsigned long long)arg1;
- (void)_t1_updateAccessibilityCustomActions;
- (void)_t1_updateAccessibilityLabel;
- (void)_t1_updateAccessibility;
- (id)accessibilityElements;
- (void)prepareForReuse;
- (void)_t1_didTapAltTextButton;
- (void)applyLayoutAttributes:(id)arg1;
- (void)layoutSubviews;
- (void)_t1_didTapLivePhotoToggleButton;
- (void)_t1_cacheGIFAttachment;
- (void)_t1_didTapEditButton;
- (void)_t1_didTapRemoveButton;
- (void)_t1_didTapAttachmentView:(id)arg1;
- (id)dragPreviewView;
- (id)tooltipViewForIdentifier:(id)arg1;
- (void)stopUpdating;
- (void)stopAnimatingAtEndOfLoop;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setContentHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isContentHidden) _Bool contentHidden;
- (void)_t1_updateButtonAvailability;
- (void)updateCellElements;
- (void)_t1_updateButtonsAlphaAnimated:(_Bool)arg1;
- (void)setButtonsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_t1_updateAttachmentView;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

