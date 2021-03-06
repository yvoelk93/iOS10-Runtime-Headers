/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentPreference : NSObject {
    NSString * _footer;
    bool  _isReadOnly;
    NSArray * _preferences;
    unsigned long long  _selectedIndex;
    bool  _supportsDeletion;
    NSString * _title;
}

@property (nonatomic, copy) NSString *footer;
@property (nonatomic) bool isReadOnly;
@property (nonatomic, copy) NSArray *preferences;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic, readonly) bool supportsDeletion;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)footer;
- (id)initWithTitle:(id)arg1 preferences:(id)arg2 selectedIndex:(unsigned long long)arg3 readOnly:(bool)arg4;
- (bool)isReadOnly;
- (id)preferences;
- (unsigned long long)selectedIndex;
- (void)setFooter:(id)arg1;
- (void)setIsReadOnly:(bool)arg1;
- (void)setPreferences:(id)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (bool)supportsDeletion;
- (id)title;

@end
