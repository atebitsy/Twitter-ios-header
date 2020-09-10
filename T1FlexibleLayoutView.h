//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/TFNLayoutMetricsSizing-Protocol.h>

@class NSArray, NSMutableArray, NSString, T1FlexibleLayout;

@interface T1FlexibleLayoutView : UIView <TFNLayoutMetricsSizing>
{
    T1FlexibleLayout *_layoutHelper;
    _Bool _ignoreTopOriginWhenSizing;
    _Bool _ignoreLeftOriginWhenSizing;
    CDUnknownBlockType _contentEdgeInsetsCalculator;
    CDUnknownBlockType _layoutMetricsCalculator;
    NSMutableArray *_flexibleLayoutItems;
}

+ (CDUnknownBlockType)performWithoutAnimationFrameAnimator;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *flexibleLayoutItems; // @synthesize flexibleLayoutItems=_flexibleLayoutItems;
@property(copy, nonatomic) CDUnknownBlockType layoutMetricsCalculator; // @synthesize layoutMetricsCalculator=_layoutMetricsCalculator;
@property(copy, nonatomic) CDUnknownBlockType contentEdgeInsetsCalculator; // @synthesize contentEdgeInsetsCalculator=_contentEdgeInsetsCalculator;
@property(nonatomic) _Bool ignoreLeftOriginWhenSizing; // @synthesize ignoreLeftOriginWhenSizing=_ignoreLeftOriginWhenSizing;
@property(nonatomic) _Bool ignoreTopOriginWhenSizing; // @synthesize ignoreTopOriginWhenSizing=_ignoreTopOriginWhenSizing;
- (struct CGRect)_t1_calculateContentBoundsForSize:(struct CGSize)arg1 layoutMetrics:(id)arg2 layoutSubviews:(_Bool)arg3;
- (id)calculatedLayoutMetrics;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFitsSize:(struct CGSize)arg1 layoutMetrics:(id)arg2;
- (struct CGSize)sizeWithLayoutMetrics:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)contentEdgeInsetsForLayoutMetrics:(id)arg1;
@property(retain, nonatomic) NSArray *arrangedSubviewItems;
- (void)removeArrangedSubviewItem:(id)arg1;
- (void)addArrangedSubviewItem:(id)arg1;
- (void)t1_enumerateLinearlyArrangedSubviewItemsWithLayoutSize:(struct CGSize)arg1 orientation:(long long)arg2 layoutMetrics:(id)arg3 block:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

