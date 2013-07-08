/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UISegmentedControl, UIView, SKUIColorScheme, _UIBackdropView, UIControl;

@interface SKUIProductPageHeaderFloatingView : UIView  {
    UISegmentedControl *_sectionControl;
    SKUIColorScheme *_colorScheme;
    UIView *_separatorView;
    UIView *_backdropAlphaView;
    _UIBackdropView *_backdropView;
    BOOL _isPad;
}

@property float backdropAlpha;
@property(readonly) UIControl * sectionControl;
@property(readonly) int selectedSectionIndex;
@property(retain) SKUIColorScheme * colorScheme;


- (float)backdropAlpha;
- (void)_reloadBackdropView;
- (void)setBackdropAlpha:(float)arg1;
- (int)selectedSectionIndex;
- (id)initWithSectionTitles:(id)arg1 isPad:(BOOL)arg2;
- (id)sectionControl;
- (void)setColorScheme:(id)arg1;
- (id)colorScheme;
- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;

@end