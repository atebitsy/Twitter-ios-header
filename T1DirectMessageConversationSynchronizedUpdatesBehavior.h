//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, T1DirectMessageConversationEntriesViewModel, T1DirectMessageConversationUpdate;
@protocol T1DirectMessageConversationSynchronizedUpdatesBehaviorDelegate, TFNDirectMessageEntry;

@interface T1DirectMessageConversationSynchronizedUpdatesBehavior : NSObject
{
    _Bool _updatesSuspended;
    id <T1DirectMessageConversationSynchronizedUpdatesBehaviorDelegate> _delegate;
    T1DirectMessageConversationEntriesViewModel *_viewModel;
    NSMutableArray *_pendingUpdates;
    T1DirectMessageConversationUpdate *_inProgressUpdate;
    id <TFNDirectMessageEntry> _entryShowingReadState;
    NSMutableSet *_enqueuedReadReceiptDisplayModeTransitions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableSet *enqueuedReadReceiptDisplayModeTransitions; // @synthesize enqueuedReadReceiptDisplayModeTransitions=_enqueuedReadReceiptDisplayModeTransitions;
@property(nonatomic) __weak id <TFNDirectMessageEntry> entryShowingReadState; // @synthesize entryShowingReadState=_entryShowingReadState;
@property(retain, nonatomic) T1DirectMessageConversationUpdate *inProgressUpdate; // @synthesize inProgressUpdate=_inProgressUpdate;
@property(retain, nonatomic) NSMutableArray *pendingUpdates; // @synthesize pendingUpdates=_pendingUpdates;
@property(retain, nonatomic) T1DirectMessageConversationEntriesViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool updatesSuspended; // @synthesize updatesSuspended=_updatesSuspended;
@property(nonatomic) __weak id <T1DirectMessageConversationSynchronizedUpdatesBehaviorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_enqueueUpdateWithViewModelUpdateBlock:(CDUnknownBlockType)arg1 userInterfaceUpdateBlock:(CDUnknownBlockType)arg2 willUpdate:(CDUnknownBlockType)arg3 didUpdate:(CDUnknownBlockType)arg4 priority:(unsigned long long)arg5 animated:(_Bool)arg6 shouldUpdateView:(_Bool)arg7;
- (void)_enqueueUpdateWithViewModelUpdateBlock:(CDUnknownBlockType)arg1 willUpdate:(CDUnknownBlockType)arg2 didUpdate:(CDUnknownBlockType)arg3 priority:(unsigned long long)arg4 animated:(_Bool)arg5 shouldUpdateView:(_Bool)arg6;
- (void)_enqueueUpdateWithViewModelUpdateBlock:(CDUnknownBlockType)arg1 willUpdate:(CDUnknownBlockType)arg2 didUpdate:(CDUnknownBlockType)arg3 shouldUpdateView:(_Bool)arg4;
- (void)_updateCompleted;
- (void)_performUpdatesWithCollectionView:(id)arg1 userInterfaceUpdateBlock:(CDUnknownBlockType)arg2 viewModel:(id)arg3 priorViewModel:(id)arg4 isVisible:(_Bool)arg5 animated:(_Bool)arg6;
- (CDUnknownBlockType)_emptyUpdatesBlock;
- (CDUnknownBlockType)_collectionViewUpdatesBlockWithUpdate:(id)arg1 viewModel:(id)arg2 priorViewModel:(id)arg3;
@property(readonly, nonatomic) T1DirectMessageConversationEntriesViewModel *mostRecentViewModel;
- (void)enqueueUpdateWithViewModelByReplacingEntry:(id)arg1 withEntry:(id)arg2;
- (void)enqueueUpdateWithViewModelBySettingReadReceiptDisplayMode:(unsigned long long)arg1 forEntry:(id)arg2 willUpdate:(CDUnknownBlockType)arg3 didUpdate:(CDUnknownBlockType)arg4 animated:(_Bool)arg5 shouldUpdateView:(_Bool)arg6;
- (void)enqueueUpdateWithViewModelByStoppingAudioForEntry:(id)arg1;
- (void)enqueueUpdateWithViewModelByPlayingAudioForEntry:(id)arg1;
- (void)enqueueUpdateWithViewModelByShowingDetailsForEntry:(id)arg1;
- (void)enqueueUpdateWithViewModelByReloadingEntry:(id)arg1 animated:(_Bool)arg2;
- (void)enqueueUpdateWithViewModelByReloadingEntry:(id)arg1;
- (void)enqueueUpdateWithViewModelByInsertingEntry:(id)arg1 willUpdate:(CDUnknownBlockType)arg2 didUpdate:(CDUnknownBlockType)arg3;
- (void)enqueueUpdateWithViewModelByRemovingEntry:(id)arg1 willUpdate:(CDUnknownBlockType)arg2 didUpdate:(CDUnknownBlockType)arg3;
- (void)enqueueUpdateWithPagedInEntries:(id)arg1 willUpdate:(CDUnknownBlockType)arg2 didUpdate:(CDUnknownBlockType)arg3;
- (void)enqueueUpdateByReloadingConversation:(id)arg1 entries:(id)arg2 layoutMetrics:(id)arg3 account:(id)arg4 isPresentedModally:(_Bool)arg5;
- (void)processUpdates:(CDUnknownBlockType)arg1;
- (id)init;

@end

