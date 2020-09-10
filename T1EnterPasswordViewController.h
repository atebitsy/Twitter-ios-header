//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1OnboardingFormViewController.h>

@class NSDictionary, T1EnterPasswordForm;
@protocol T1EnterPasswordViewControllerDelegate;

@interface T1EnterPasswordViewController : T1OnboardingFormViewController
{
    T1EnterPasswordForm *_form;
    long long _userIdentifierDisplayType;
    NSDictionary *_userIdentifiers;
    id <T1EnterPasswordViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <T1EnterPasswordViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectOpen1PasswordFromSender:(id)arg1;
- (void)abandonForm;
- (void)submitForm;
- (unsigned long long)inputRequiredBehavior;
- (_Bool)formFieldShouldReturn:(id)arg1 withSelectNextFieldAction:(CDUnknownBlockType)arg2 stopEditingAction:(CDUnknownBlockType)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 headerSpec:(id)arg2 footerSpec:(id)arg3 userIdentifiers:(id)arg4 userIdentifierDisplayType:(long long)arg5 hintText:(id)arg6 confirmationHintText:(id)arg7 confirmationMismatchMessage:(id)arg8 showConfirmation:(_Bool)arg9 skipValidation:(_Bool)arg10;

@end

