//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

@class TFNTwitterAccount;

@interface T1EditableSpheresListViewController : TFNItemsDataViewController
{
    // Error parsing type: , name: account
    // Error parsing type: , name: spheresFeatureSwitches
    // Error parsing type: , name: pinnedListsObserver
    // Error parsing type: , name: pinnedLists
    // Error parsing type: , name: sphereDetailsViewController
    // Error parsing type: , name: dataFetcher
    // Error parsing type: , name: dataSource
    // Error parsing type: , name: loadingViewController
    // Error parsing type: , name: didScribeImpression
}

- (void).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)t1_appSplitModeDidChangeFromPrevious:(long long)arg1 toCurrent:(long long)arg2;
- (id)targetIndexPathForMoveOfItem:(id)arg1 atIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)moveItem:(id)arg1 atIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)canMoveItem:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)canEditItem:(id)arg1 atIndexPath:(id)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1;
@property(nonatomic, readonly) TFNTwitterAccount *account; // @synthesize account;

@end

