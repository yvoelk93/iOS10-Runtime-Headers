/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
 */

@interface EMFEmojiToken : NSObject <NSCopying, NSSecureCoding> {
    struct __EmojiTokenWrapper { } * _emojiTokenRef;
    NSString * _localeIdentifier;
}

@property (nonatomic, readonly) const struct __EmojiTokenWrapper { }*emojiTokenRef;
@property (nonatomic, readonly) bool isCommon;
@property (nonatomic, readonly) EMFEmojiLocaleData *localeData;
@property (nonatomic, retain) NSString *localeIdentifier;
@property (nonatomic, readonly) int presentationStyle;
@property (nonatomic, readonly) int skinTone;
@property (nonatomic, readonly, copy) NSString *string;
@property (nonatomic, readonly) bool supportsSkinToneVariants;

+ (id)emojiTokenWithCEMEmojiToken:(struct __EmojiTokenWrapper { }*)arg1;
+ (id)emojiTokenWithLongCharacter:(unsigned int)arg1 localeData:(id)arg2;
+ (id)emojiTokenWithString:(id)arg1 localeData:(id)arg2;
+ (id)emojiTokensForCEMEmojiTokens:(struct __CFArray { }*)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithPresentationStyle:(int)arg1;
- (id)copyWithSkinToneVariant:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithoutModifiers;
- (void)dealloc;
- (struct __EmojiTokenWrapper { }*)emojiTokenRef;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCEMEmojiToken:(struct __EmojiTokenWrapper { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isCommon;
- (bool)isEqual:(id)arg1;
- (bool)isEqualIgnoringModifiers:(id)arg1;
- (id)localeData;
- (id)localeIdentifier;
- (id)nameForType:(int)arg1;
- (int)presentationStyle;
- (id)relatedEmojiTokens:(unsigned long long)arg1;
- (void)setLocaleIdentifier:(id)arg1;
- (int)skinTone;
- (id)string;
- (bool)supportsPresentationStyle:(int)arg1;
- (bool)supportsSkinToneVariants;

@end