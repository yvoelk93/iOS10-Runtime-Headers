/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIImageViewElementCacheKey, NSURL;

@interface SKUIImageViewElement : SKUIViewElement  {
    NSString *_alt;
    BOOL _enabled;
    SKUIImageViewElementCacheKey *_resourceCacheKey;
    NSString *_resourceName;
    struct CGSize { 
        double width; 
        double height; 
    } _size;
    SKUIImageViewElementCacheKey *_transientResourceCacheKey;
    NSURL *_url;
}

@property(readonly) NSString * resourceName;
@property(readonly) struct CGSize { double x1; double x2; } size;
@property(readonly) NSURL * URL;
@property(readonly) id resourceCacheKey;
@property(readonly) id transientResourceCacheKey;


- (id)accessibilityText;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)transientResourceCacheKey;
- (bool)rendersWithPerspective;
- (id)resourceCacheKey;
- (long long)pageComponentType;
- (id)resourceName;
- (bool)isEnabled;
- (id)URL;
- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })size;

@end