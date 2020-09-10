//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFNUI/TFNUIConfiguration-Protocol.h>

@class NSString;
@protocol TFNLegacyButtonFontGroup, TFNUIColorPalette, TFNUIFontGroup;

@interface TFNUIConfiguration : NSObject <TFNUIConfiguration>
{
}

+ (void)setCurrentConfiguration:(id)arg1;
+ (id)currentConfiguration;
@property(readonly, nonatomic) id <TFNLegacyButtonFontGroup> buttonFontGroup;
@property(readonly, nonatomic) id <TFNUIFontGroup> fontGroup;
@property(readonly, nonatomic) id <TFNUIColorPalette> colorPalette;
@property(readonly, nonatomic) _Bool isIgnoreTraitCollectionUIStyleInEqualityEnabled;
@property(readonly, nonatomic) _Bool isReduceMotionSettingEnabled;
@property(readonly, nonatomic) _Bool isHashtagPronounciationAllowed;
@property(readonly, nonatomic) _Bool isUndoScrollToTopEnabled;
@property(readonly, nonatomic) _Bool isNestedActionButtonEnabled;
@property(readonly, nonatomic) _Bool isLayoutGuideSafeAreaMigrationEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

