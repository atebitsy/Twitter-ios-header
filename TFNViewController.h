//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TFNUI/TFNHapticFeedback-Protocol.h>
#import <TFNUI/TFNViewControllerVisibility-Protocol.h>

@class NSHashTable, NSString, UIImpactFeedbackGenerator, UINotificationFeedbackGenerator, UISelectionFeedbackGenerator;

@interface TFNViewController : UIViewController <TFNViewControllerVisibility, TFNHapticFeedback>
{
    long long _transitionState;
    NSHashTable *_eventObservers;
    _Bool _hasBeenPresented;
    _Bool _hasBeenDismissed;
    _Bool _visible;
    _Bool _changingInterfaceOrientation;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
}

+ (id)viewControllerEventObservers;
+ (void)removeViewControllerEventObserver:(id)arg1;
+ (void)addViewControllerEventObserver:(id)arg1;
+ (id)eventObservers;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isChangingInterfaceOrientation) _Bool changingInterfaceOrientation; // @synthesize changingInterfaceOrientation=_changingInterfaceOrientation;
@property(readonly, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator; // @synthesize impactFeedbackGenerator=_impactFeedbackGenerator;
@property(readonly, nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
- (void)_tfn_assertBackStackMenuWithParent:(id)arg1;
- (id)keyCommands;
- (void)performHapticFeedback:(unsigned long long)arg1;
- (void)prepareHapticFeedback:(unsigned long long)arg1;
- (void)tfn_previewingStateDidChange;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)eventObservers;
- (void)removeViewControllerEventObserver:(id)arg1;
- (void)addViewControllerEventObserver:(id)arg1;
- (void)voiceOverStatusDidChange:(id)arg1;
- (void)backgroundFetchDidComplete:(id)arg1;
- (void)backgroundFetchWillComplete:(id)arg1;
- (void)backgroundFetchDidBegin:(id)arg1;
- (void)backgroundFetchWillBegin:(id)arg1;
- (void)applicationUserDidTakeScreenshot:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationWillEnterForegroundFromBackground:(id)arg1;
- (void)_tfn_applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)viewDidFullyDisappear:(_Bool)arg1;
- (void)viewWillFullyDisappear:(_Bool)arg1;
- (void)viewDidFullyAppear:(_Bool)arg1;
- (void)viewWillFullyAppear:(_Bool)arg1;
- (_Bool)extendedLayoutIncludesOpaqueBars;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_enforceFloatingViews;
- (void)viewWillLayoutSubviews;
- (void)viewControllerDidDismissAnimated:(_Bool)arg1;
- (void)viewControllerWillDismissAnimated:(_Bool)arg1;
- (void)viewControllerDidPresentAnimated:(_Bool)arg1;
- (void)viewControllerWillPresentAnimated:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)private_configureHapticFeedback;
- (void)_prepareNotifications;
- (void)dealloc;
- (void)willMoveToParentViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UINotificationFeedbackGenerator *notificationFeedbackGenerator;
@property(readonly, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property(readonly) Class superclass;

@end

