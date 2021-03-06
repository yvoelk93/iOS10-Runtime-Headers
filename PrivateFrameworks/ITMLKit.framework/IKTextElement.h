/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKTextElement : IKViewElement {
    NSMutableArray * _textBadges;
    IKTextParser * _textParser;
    unsigned long long  _textStyle;
}

@property (nonatomic, readonly) unsigned long long alignment;
@property (nonatomic, readonly) NSArray *badges;
@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) long long maxLines;
@property (nonatomic, readonly, retain) NSAttributedString *text;
@property (nonatomic, readonly) unsigned long long textStyle;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (bool)shouldParseChildDOMElements;

- (void).cxx_destruct;
- (unsigned long long)_styleForTagName:(id)arg1;
- (id)accessibilityText;
- (unsigned long long)alignment;
- (id)attributedStringWithFont:(id)arg1;
- (id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3;
- (id)attributedStringWithFontHandler:(id /* block */)arg1;
- (id)attributedStringWithFontHandler:(id /* block */)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3;
- (id)badges;
- (id)color;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)maxLines;
- (id)text;
- (unsigned long long)textStyle;

// Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras

- (id)textAttributes;

@end
