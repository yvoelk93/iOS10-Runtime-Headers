/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@class AVAudioSessionDataSourceDescription, NSString, NSArray;

@interface AVAudioSessionPortDescription : NSObject  {
    void *_impl;
}

@property(readonly) NSString * portType;
@property(readonly) NSString * portName;
@property(readonly) NSString * UID;
@property(readonly) NSArray * channels;
@property(readonly) NSArray * dataSources;
@property(readonly) AVAudioSessionDataSourceDescription * selectedDataSource;
@property(readonly) AVAudioSessionDataSourceDescription * preferredDataSource;

+ (id)privateCreateOrConfigureArray:(id)arg1 withRawPortArray:(id)arg2;
+ (BOOL)privateMatchesInputs:(id)arg1 toRawInputs:(id)arg2;
+ (id)privateCreateOrConfigure:(id)arg1 withRawPortDescription:(id)arg2;

- (id)preferredDataSource;
- (BOOL)isHeadphones;
- (void)configureChannelsAndDataSources:(id)arg1;
- (id)initWithRawPortDescription:(id)arg1;
- (id)privateGetID;
- (BOOL)privateMatchesRawDescription:(id)arg1;
- (BOOL)isEqualToPort:(id)arg1;
- (struct PortDescriptionImpl { id x1; id x2; id x3; id x4; boolx5; id x6; id x7; id x8; }*)privateGetImplementation;
- (id)UID;
- (id)portType;
- (id)selectedDataSource;
- (id)dataSources;
- (BOOL)setPreferredDataSource:(id)arg1 error:(id*)arg2;
- (id)channels;
- (id)portName;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;

@end