//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>
#import <T1Twitter/NSCopying-Protocol.h>
#import <T1Twitter/TFSModel-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSSet, NSString, TAVAnalyticsMediaIdentifier, TFNTwitterUnifiedCard, TFNTwitterUser, TFSTwitterCardDataAssimilatable, TFSTwitterPromotedContent;

@interface TFNTwitterCardData : NSObject <NSCoding, NSCopying, TFSModel>
{
    TFNTwitterUnifiedCard *_unifiedCard;
    _Bool _isUnifiedCardMigratedFromLegacyCards;
    NSString *_primaryCoreImageSpecKey;
    NSSet *_allCoreImageSpecKeys;
    NSDictionary *_coreImageSpecs;
    NSString *_name;
    NSString *_URL;
    NSDictionary *_usersByIDNumber;
    NSDate *_updatedTimestamp;
    TFSTwitterPromotedContent *_promotedContent;
    NSString *_unifiedID;
    NSDictionary *_instanceData;
    NSString *_compiledCardURL;
    NSDictionary *_bindingsToScribe;
    // Error parsing type: {?="lock"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"predicate"{atomic_flag="_Value"AB}}, name: _unifiedCardParsingToken
}

+ (_Bool)_tfn_imageSpecMeetsModernConstraints:(id)arg1;
+ (id)_tfn_parseBindingValueFromLegacyDictionary:(id)arg1;
+ (id)_tfn_parseBindingValueFromGraphQLDictionary:(id)arg1;
+ (id)_tfn_parseUsersDictionary:(id)arg1;
+ (id)parseRawBindings:(id)arg1 scribeDict:(id *)arg2 failingIfAnyMalformed:(_Bool)arg3;
+ (id)_unifiedIDForName:(id)arg1 URL:(id)arg2;
+ (id)unifiedIDForPlistDictionary:(id)arg1;
+ (id)ratingFormat;
+ (long long)_cardTypeFromCardName:(id)arg1;
+ (_Bool)_isVideoCardTypeFromCardType:(long long)arg1;
+ (_Bool)_isPeriscopeCardTypeFromCardType:(long long)arg1;
+ (id)scribeItemForCardData:(id)arg1 withType:(long long)arg2;
- (void).cxx_destruct;
// Error parsing type for property unifiedCardParsingToken:
// Property attributes: T{?={os_unfair_lock_s=I}{atomic_flag=AB}},R,N,V_unifiedCardParsingToken

@property(readonly, nonatomic) _Bool isUnifiedCardMigratedFromLegacyCards; // @synthesize isUnifiedCardMigratedFromLegacyCards=_isUnifiedCardMigratedFromLegacyCards;
@property(copy, nonatomic) NSDictionary *bindingsToScribe; // @synthesize bindingsToScribe=_bindingsToScribe;
@property(copy, nonatomic) NSString *compiledCardURL; // @synthesize compiledCardURL=_compiledCardURL;
@property(copy, nonatomic) NSDictionary *instanceData; // @synthesize instanceData=_instanceData;
@property(copy, nonatomic) NSString *unifiedID; // @synthesize unifiedID=_unifiedID;
@property(retain, nonatomic) TFSTwitterPromotedContent *promotedContent; // @synthesize promotedContent=_promotedContent;
@property(retain, nonatomic) NSDate *updatedTimestamp; // @synthesize updatedTimestamp=_updatedTimestamp;
@property(readonly, copy, nonatomic) NSDictionary *usersByIDNumber; // @synthesize usersByIDNumber=_usersByIDNumber;
@property(readonly, copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *primaryCoreImageSpecKey; // @synthesize primaryCoreImageSpecKey=_primaryCoreImageSpecKey;
@property(readonly, copy, nonatomic) NSDictionary *coreImageSpecs; // @synthesize coreImageSpecs=_coreImageSpecs;
@property(readonly, copy, nonatomic) NSSet *allCoreImageSpecKeys; // @synthesize allCoreImageSpecKeys=_allCoreImageSpecKeys;
- (id)_tfn_deepCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)deprecatedJSONDictionaryValue;
- (id)_addCardAudienceFromJSON:(id)arg1 toScribeDict:(id)arg2;
@property(readonly, nonatomic) TFSTwitterCardDataAssimilatable *assimilatable;
@property(readonly, nonatomic) NSDictionary *extraScribeItem;
- (id)allKeys;
- (id)dateForKey:(id)arg1;
- (id)numberFromStringForKey:(id)arg1;
- (id)urlForKey:(id)arg1;
- (id)stringsForKeys:(id)arg1;
- (id)stringForKey:(id)arg1 defaultValue:(id)arg2;
- (id)stringForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (long long)longLongForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (float)floatForKey:(id)arg1;
- (id)filteredKeysUsingPredicate:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (id)arrayForKey:(id)arg1;
- (id)withUsersByID:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithInstanceData:(id)arg1 name:(id)arg2 URL:(id)arg3 bindingsToScribe:(id)arg4 usersByIDNumber:(id)arg5 updatedTimestamp:(id)arg6;
- (id)initWithCS2CardData:(id)arg1 usersByIDNumber:(id)arg2;
- (id)initWithDeprecatedJSONDictionary:(id)arg1 users:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)_t1_hasVideoUCCarousel;
- (_Bool)_t1_hasImageUCCarousel;
- (id)imageSpecForKey:(id)arg1;
- (id)primaryImageSpec;
- (id)_tfn_unifiedCardUsingMappedLegacyBindingValues;
- (id)convertingButtonWithCTAButtonVariation:(unsigned long long)arg1;
- (id)convertingButtonsAndDetailsToDominantColorConfig:(id)arg1 forComponentType:(unsigned long long)arg2;
- (id)convertingButtonsToStrength:(unsigned long long)arg1;
- (id)modifyingMediaDestinationTo:(long long)arg1;
- (id)addingWebsiteCTA;
- (id)convertingUCAppStoreDetailsToUseAppStoreAsSubtitle:(_Bool)arg1;
- (id)convertingUCAppStoreDetailsToAppMetadataConfig:(id)arg1;
- (id)convertingUCCarouselsToSingleMedia;
@property(readonly, nonatomic) TFNTwitterUnifiedCard *unifiedCard;
- (_Bool)containsMigratedSummaryLargeCard;
- (_Bool)containsUnifiedCard;
- (id)withLegacyCardsMigratedToUC:(id)arg1;
- (id)withPromotedContent:(id)arg1;
- (_Bool)isPeriscope;
- (_Bool)isBroadcast;
- (_Bool)isLiveEvent;
@property(readonly, copy, nonatomic) TAVAnalyticsMediaIdentifier *contentMediaIdentifier;
- (double)videoDuration;
- (id)appInstallId;
- (id)longCallToActionArray;
- (id)_callToActionForDisplayMode:(long long)arg1 isLong:(_Bool)arg2;
- (id)appDetailsLongCallToActionArrayForDisplayMode:(long long)arg1;
- (id)appDetailsCallToActionForDisplayMode:(long long)arg1;
- (id)ctaString;
- (id)title;
- (id)rating;
- (id)numberOfRatings;
- (id)imageSpec;
- (id)appCategory;
- (id)appDescription;
- (id)appURL;
- (id)appPrice;
- (id)appName;
- (_Bool)isAppOpenable;
- (_Bool)isAppInstallable;
- (id)appID;
- (id)deepUrl;
- (id)appDisplayURL;
@property(readonly, nonatomic) _Bool shouldOmitCardURL;
- (_Bool)isConversationCard;
- (long long)cardType;
- (id)momentID;
- (id)customerFeedbackType;
- (id)customerFeedbackExpirationDate;
- (id)customerFeedbackScore;
- (id)customerFeedbackQuestionVariantID;
- (id)customerFeedbackPrivacyPolicyURL;
- (id)customerFeedbackID;
- (id)customerFeedbackDisplayName;
- (_Bool)isCustomerFeedbackDismissed;
- (_Bool)isCustomerFeedbackEnabled;
- (_Bool)isCustomerFeedbackTextSubmitted;
- (_Bool)isCustomerFeedbackTest;
- (_Bool)isCustomerFeedbackCard;
- (id)periscopeInviteesTwitter;
- (id)periscopeImageSpec;
- (id)periscopeMediaKey;
- (_Bool)periscopeIsHighLatency;
- (_Bool)periscopeAvailableForReplay;
- (unsigned long long)periscopeInitialCameraOrientation;
- (unsigned long long)periscopeBroadcastHeight;
- (unsigned long long)periscopeBroadcastWidth;
- (double)periscopeReplayEditedStartTime;
- (double)periscopeShareTimecode;
- (id)periscopeProfileImageURL;
- (id)periscopeBroadcasterUsername;
- (id)periscopeBroadcasterId;
- (id)periscopeBroadcastSource;
- (id)periscopeBroadcastingTwitterUserId;
- (id)periscopeURL;
- (id)periscopeBroadcastId;
- (id)periscopeDisplayName;
- (id)periscopeTitle;
- (id)_t1_ctaForButtonIndex:(unsigned long long)arg1;
- (id)_t1_stringWithCardURLAppendedToString:(id)arg1;
- (CDStruct_1b6d18a9)videoContentDurationForLockedState:(_Bool)arg1;
- (id)lockedStateImageSource;
- (id)lockedStateVideoPlaylistURL;
- (_Bool)isImageToVideoUnlockConversationCardType;
- (_Bool)isVideoUnlockConversationCardType;
- (id)cardID;
- (id)conversationCardCallToActionArray;
- (id)conversationCardCallToAction;
- (id)canvasText;
- (id)thankYouVanityURL;
- (id)thankYouURL;
- (id)thankYouText;
- (id)tweetTextWithCardURLForButtonIndex:(unsigned long long)arg1;
- (id)tweetTextForButtonIndex:(unsigned long long)arg1;
- (id)buttonTextForButtonIndex:(unsigned long long)arg1;
- (id)broadcastPostLiveSlateImageSpec;
- (id)broadcastPreLiveSlateImageSpec;
- (_Bool)broadcastIsHighLatency;
- (id)broadcastImageSpec;
- (_Bool)broadcastRequiresFineGrainGeoblocking;
- (long long)broadcastState;
- (double)broadcastReplayEditedStartTime;
- (id)broadcastScheduledStartDate;
- (double)broadcastTimecode;
- (id)broadcastOrientation;
- (id)broadcastSource;
- (id)broadcastHeight;
- (id)broadcastWidth;
- (id)broadcasterUsername;
- (id)broadcasterDisplayName;
- (id)broadcasterTwitterUserID;
- (id)broadcastTitle;
- (id)broadcastURL;
- (id)broadcastMediaKey;
- (id)broadcastID;
- (_Bool)shouldOmitLinkFromStatus;
- (id)capiEndpoint;
- (id)cardUserDataScribeItemForUserID:(long long)arg1;
- (id)bindingValuesScribeItemEntry;
- (id)amplifyUrlVmap;
- (id)amplifyContentId;
- (_Bool)hasPlayerHLSInfo;
- (id)playerOwnerId;
- (id)playerContentId;
- (id)playerHLSURL;
- (id)videoContentID;
- (double)videoContentDuration;
- (CDStruct_1b6d18a9)videoContentTime;
- (id)videoSource;
- (id)mimeType;
- (id)vinePlayerHTMLCardURL;
- (id)playerHTMLURL;
- (struct CGSize)playerDimensions;
- (id)playerStreamContentType;
- (id)playerStreamURL;
- (_Bool)siteUserIsSelectMediaPartner;
- (_Bool)allowDynamicAd;
- (_Bool)isYouTubeCard;
- (_Bool)isVideoPollType;
- (_Bool)isVideoCardTypeAmplify;
- (_Bool)isAdsVideoCardTypeWithHLSSupport;
- (_Bool)isAdsVideoCardType;
- (_Bool)isMediaCardType;
- (_Bool)isVideoCardType;
- (_Bool)isPeriscopeCardType;
@property(readonly, copy, nonatomic) NSString *remindMeNotificationID;
@property(readonly, copy, nonatomic) NSNumber *isCurrentUserSubscribedForRemindMe;
@property(readonly, copy, nonatomic) NSNumber *isRemindMeSubscriptionEnabled;
- (id)scribeParametersForOpenLink:(id)arg1 parameters:(id)arg2;
- (id)private_directMessageCardWelcomeMessageIDForIndex:(unsigned long long)arg1;
- (id)private_directMessageCardButtonTextForIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool shouldLoopVideo;
@property(readonly, nonatomic) _Bool isVideoDirectMessageCard;
- (id)directMessageCardWelcomeMessageIdsArray;
- (id)directMessageCardCallToActionArray;
- (id)directMessageCardCallToAction;
@property(readonly, nonatomic) _Bool hasDirectMessageCardWelcomeMessages;
@property(readonly, nonatomic) _Bool hasDirectMessageCardCTAButtons;
@property(readonly, nonatomic) _Bool hasDirectMessageCardPrimaryVideoSpec;
@property(readonly, nonatomic) _Bool hasDirectMessageCardPrimaryImageSpec;
@property(readonly, copy, nonatomic) TFNTwitterUser *directMessageCardRecipientUserFromCard;
@property(readonly, copy, nonatomic) NSNumber *directMessageCardRecipientID;
- (_Bool)isRevenueCardType;
- (long long)siteUserID;
- (id)userForKey:(id)arg1;
- (id)viewingUser;
- (id)creatorUser;
- (id)siteUser;
- (id)primaryUser;
- (id)modifiedCardDataByAddingAuthorUser:(id)arg1 userDictionary:(id)arg2;
- (unsigned long long)liveEventMediaType;
- (id)liveEventMediaTweetID;
- (id)authorUser;
- (id)liveEventThumbnailImageSpec;
- (id)liveEventSquareThumbnailImageInfo;
- (id)liveEventThumbnailImageInfo;
- (id)liveEventBadge;
- (id)liveEventCategory;
- (id)liveEventSubtitle;
- (id)liveEventTitle;
- (id)liveEventID;
- (id)_cardUserDataDict;
- (id)_cardDataDict;
@property(readonly, nonatomic) NSDictionary *cardEvent;
- (id)phoneNumber;
@property(readonly, copy, nonatomic) NSString *messageMeCardWelcomeMessageID;
@property(readonly, copy, nonatomic) NSString *messageMeCardCtaKey;
@property(readonly, copy, nonatomic) NSString *messageMeCardDefaultComposerText;
@property(readonly, nonatomic) TFNTwitterUser *messageMeCardRecipient;

@end

