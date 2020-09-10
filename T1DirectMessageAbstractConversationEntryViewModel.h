//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/UIAccessibilityIdentification-Protocol.h>

@class NSArray, NSString, T1DirectMessageConversationDisplayState, TFNLayoutMetrics, TFNTwitterAccount, TFSTwitterScribeContext, UIImage;
@protocol TFNDirectMessageConversation, TFNDirectMessageConversationEntry;

@interface T1DirectMessageAbstractConversationEntryViewModel : NSObject <UIAccessibilityIdentification>
{
    _Bool _impressionScribed;
    NSString *_accessibilityIdentifier;
    T1DirectMessageConversationDisplayState *_displayState;
    TFSTwitterScribeContext *_scribeContext;
    id <TFNDirectMessageConversationEntry> _entry;
    NSString *_accessibilityAnnouncement;
    NSString *_accessibilityTimestampText;
    NSArray *_reactions;
    TFNLayoutMetrics *_layoutMetrics;
    UIImage *_previewImage;
}

+ (id)_conversationEntryViewModelForMessageEntry:(id)arg1 displayState:(id)arg2 layoutMetrics:(id)arg3 reactions:(id)arg4 firstInGroup:(_Bool)arg5 lastInGroup:(_Bool)arg6;
+ (void)textByInsertingDirectionMarks:(inout id *)arg1 adjustingLinkRange:(inout id *)arg2;
+ (Class)cellClass;
+ (id)cellReuseIdentifier;
+ (id)_entryViewModelForDirectMessageEntry:(id)arg1 displayState:(id)arg2 layoutMetrics:(id)arg3 reactions:(id)arg4 firstInGroup:(_Bool)arg5 lastInGroup:(_Bool)arg6;
+ (id)entryViewModelForDirectMessageEntry:(id)arg1 displayState:(id)arg2 layoutMetrics:(id)arg3 reactions:(id)arg4 firstInGroup:(_Bool)arg5 lastInGroup:(_Bool)arg6;
+ (id)entryViewModelForDirectMessageEntry:(id)arg1 displayState:(id)arg2 layoutMetrics:(id)arg3 reactions:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(readonly, nonatomic) TFNLayoutMetrics *layoutMetrics; // @synthesize layoutMetrics=_layoutMetrics;
@property(readonly, copy, nonatomic) NSArray *reactions; // @synthesize reactions=_reactions;
@property(copy, nonatomic) NSString *accessibilityTimestampText; // @synthesize accessibilityTimestampText=_accessibilityTimestampText;
@property(readonly, copy, nonatomic) NSString *accessibilityAnnouncement; // @synthesize accessibilityAnnouncement=_accessibilityAnnouncement;
@property(readonly, nonatomic) id <TFNDirectMessageConversationEntry> entry; // @synthesize entry=_entry;
@property(retain, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(nonatomic) _Bool impressionScribed; // @synthesize impressionScribed=_impressionScribed;
@property(readonly, nonatomic) T1DirectMessageConversationDisplayState *displayState; // @synthesize displayState=_displayState;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
- (id)viewModelBySettingShowCurrentlyPlayingAudio:(_Bool)arg1;
- (id)viewModelBySettingShowDetails:(_Bool)arg1;
- (id)viewModelBySettingFirstEntryInGroup:(_Bool)arg1 lastEntryInGroup:(_Bool)arg2;
- (_Bool)isEqualToEntryViewModel:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool showCurrentlyPlayingAudio;
@property(readonly, nonatomic) _Bool showDetails;
@property(readonly, nonatomic, getter=isFirstEntryInGroup) _Bool firstEntryInGroup;
@property(readonly, nonatomic, getter=isLastEntryInGroup) _Bool lastEntryInGroup;
@property(readonly, copy) NSString *debugDescription;
- (void)logImpressionWithScribe:(id)arg1 scribePage:(id)arg2 scribeSection:(id)arg3 scribeComponent:(id)arg4;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureCell:(id)arg1 withScribeContext:(id)arg2;
@property(readonly, nonatomic) id <TFNDirectMessageConversation> conversation;
@property(readonly, nonatomic) TFNTwitterAccount *account;
- (id)initWithEntry:(id)arg1 displayState:(id)arg2 layoutMetrics:(id)arg3;
- (id)init;
- (id)cellReuseIdentifier;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

