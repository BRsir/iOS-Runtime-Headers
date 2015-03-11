/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class UIButton, UIImageView, UILabel;

@interface AAUIFamilySharingFeaturesView : UIView {
    UIImageView *_calendarIcon;
    UILabel *_calendarSharingLabel;
    int _context;
    UIImageView *_fmfIcon;
    UIImageView *_fmipIcon;
    UILabel *_inviteHeaderLabel;
    UIImageView *_itunesIcon;
    UIButton *_learnMoreButton;
    UILabel *_locationSharingLabel;
    UILabel *_lostDeviceHelpLabel;
    UILabel *_photoSharingLabel;
    UIImageView *_photosIcon;
    UILabel *_purchaseShaingLabel;
    BOOL _shouldHideLocationSharing;
}

- (void).cxx_destruct;
- (id)_contextSensitiveLocalizedStringWithKey:(id)arg1;
- (float)_heightForText:(id)arg1 width:(float)arg2;
- (id)_imageViewWithIconNamed:(id)arg1 addBorder:(BOOL)arg2;
- (id)_labelWithStringAtKey:(id)arg1;
- (void)_layoutFeatureLabel:(id)arg1 withIconView:(id)arg2 underIconView:(id)arg3 constrainedToWidth:(float)arg4;
- (void)_learnMoreButtonTapped:(id)arg1;
- (float)desiredHeightForWidth:(float)arg1;
- (id)initWithContext:(int)arg1 hideLocationSharing:(BOOL)arg2;
- (void)layoutSubviews;

@end