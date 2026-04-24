// Perferences and headers
// For Tweak.x
#import <YouTubeHeader/_ASDisplayView.h>
#import <YouTubeHeader/YTIIcon.h>
#import <YouTubeHeader/YTRightNavigationButtons.h>
#import <YouTubeHeader/YTIElementRenderer.h>
#import <YouTubeHeader/YTPlayerBarController.h>
#import <YouTubeHeader/YTPlayerViewController.h>
#import <YouTubeHeader/YTWatchController.h>
#import <YouTubeHeader/YTIMenuConditionalServiceItemRenderer.h>
#import <YouTubeHeader/YTIPivotBarRenderer.h>
#import <YouTubeHeader/YTPivotBarItemView.h>

// For Settings.x
#import <PSHeader/Misc.h>
#import <YouTubeHeader/YTSettingsGroupData.h>
#import <YouTubeHeader/YTSettingsPickerViewController.h>
#import <YouTubeHeader/YTSettingsSectionItem.h>
#import <YouTubeHeader/YTSearchableSettingsViewController.h>
#import <YouTubeHeader/YTSettingsSectionItemManager.h>
#import <YouTubeHeader/YTSettingsViewController.h>
#import <YouTubeHeader/YTUIUtils.h>

#define IS_ENABLED(k) [[NSUserDefaults standardUserDefaults] boolForKey:k]
#define INTFORVAL(v) [[NSUserDefaults standardUserDefaults] integerForKey:v]
// Navigation bar
#define HideYTLogo @"YouModHideYTLogo"
#define YTPremiumLogo @"YouModYTPremiumLogo"
#define HideNoti @"YouModHideNotificationButton"
#define HideSearch @"YouModHideSearchButton"
#define HideVoiceSearch @"YouModHideVoiceSearchButton"
#define HideCastButtonNav @"YouModHideCastButtonNavigationBar"
// Feed
#define HideSubbar @"YouModHideSubbar"
#define HideGenMusicShelf @"YouModHideGenMusicShelf"
#define HideShortsShelf @"YouModHideShortsShelf"
#define HideSearchHis @"YouModHideSearchHistoryAndSuggestions"
// Player
#define HideAutoPlayToggle @"YouModHideAutoPlayToggle"
#define HideCaptionsButton @"YouModHideCaptionsButton"
#define HideCastButtonPlayer @"YouModHideCastButtonPlayer"
#define HidePrevButton @"YouModHidePrevButton"
#define HideNextButton @"YouModHideNextButton"
#define RemoveDarkOverlay @"YouModRemoveDarkOverlay"
#define HideEndScreenCards @"YouModHideEndScreenCards"
#define HideWaterMark @"YouModHideWaterMark"
#define DisablesDoubleTap @"YouModDisablesDoubleTap"
#define DisablesLongHold @"YouModDisablesLongHold"
#define AutoExitFullScreen @"YouModAutoExitFullScreen"
#define DisablesShowRemaining @"YouModDisablesShowRemainingTime"
#define AlwaysShowRemaining @"YouModAlwaysShowRemainingTime"
#define HideFullAction @"YouModHideFullScreenAction"
#define HideFullvidTitle @"YouModHideFullscreenVideoTitle"
#define StopAutoplayVideo @"YouModStopAutoplayVideo"
#define HideContentWarning @"YouModHideContentWarning"
#define HideRelateVideo @"YouModHideRelateVideoOnFinish"
#define AutoFullScreen @"YouModAutoFullScreen"
#define HideLikeButton @"YouModHideLikeButton"
#define HideDisLikeButton @"YouModHideDisLikeButton"
#define HideShareButton @"YouModHideShareButton"
#define HideDownloadButton @"YouModHideDownloadButton"
#define HideClipButton @"YouModHideClipButton"
#define HideRemixButton @"YouModHideRemixButton"
#define HideSaveButton @"YouModHideSaveButton"
// Shorts
#define HideShortsLikeButton @"YouModHideShortsLikeButton"
#define HideShortsDisLikeButton @"YouModHideShortsDisLikeButton"
#define HideShortsCommentButton @"YouModHideShortsCommentButton"
#define HideShortsShareButton @"YouModHideShortsShareButton"
#define HideShortsRemixButton @"YouModHideShortsRemixButton"
#define HideShortsMetaButton @"YouModHideShortsMetaButton"
#define HideShortsProducts @"YouModHideShortsProducts"
#define HideShortsRecbar @"YouModHideShortsRecbar"
#define HideShortsCommit @"YouModHideShortsCommit"
#define HideShortsSubscriptButton @"YouModHideShortsSubscriptButton"
#define HideShortsLiveButton @"YouModHideShortsLiveButton"
#define HideShortsToVideo @"YouModHideShortsToVideo"
#define EnablesShortsQuality @"YouModEnablesShortsQuality"
#define ShowShortsSeekbar @"YouModShowShortsSeekbar"
// Tab bar
#define HideTabIndi @"YouModHideTabIndicators"
#define HideTabLabels @"YouModHideTabLabels"
#define HideHomeTab @"YouModHideHomeTab"
#define HideShortsTab @"YouModHideShortsTab"
#define HideCreateButton @"YouModHideCreateButton"
#define HideSubscriptTab @"YouModHideSubscriptionsTab"
// Miscellaneous
#define DisablesShortsPiP @"YouModTrytoDisablesShortsPiP"
#define BlockUpgradeDialogs @"YouModBlockUpgradeDialogs"
#define HideAreYouThereDialog @"YouModHideAreYouThereDialog"
#define FixesSlowMiniPlayer @"YouModFixesSlowMiniPlayer"
#define DisablesNewMiniPlayer @"YouModDisablesNewMiniPlayer"
#define DisablesSnackBar @"YouModDisablesSnackBar"
#define HideStartupAni @"YouModHideStartupAnimations"
#define HidePlayInNextQueue @"YouModHidePlayInNextQueue"

@interface YTITopbarLogoRenderer : NSObject
@property(readonly, nonatomic) YTIIcon *iconImage;
@end

@interface YTRightNavigationButtons (YouMod)
@property (nonatomic, strong) YTQTMButton *notificationButton;
@property (nonatomic, strong) YTQTMButton *searchButton;
@end

@interface YTNavigationBarTitleView : UIView
@end

@interface YTChipCloudCell : UICollectionViewCell
@end

@interface YTSearchViewController : UIViewController
@end

@interface YTPlayabilityResolutionUserActionUIController : NSObject
- (void)confirmAlertDidPressConfirm;
@end

@interface YTPlayabilityResolutionUserActionUIControllerImpl : NSObject
- (void)confirmAlertDidPressConfirm;
@end

// @interface YTPivotBarViewController : UIViewController
// - (void)selectItemWithPivotIdentifier:(id)pivotIndentifier;
// @end

@interface YTPlayerViewController (YouMod)
- (void)YouModAutoFullscreen;
@end