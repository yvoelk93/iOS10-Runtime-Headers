/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioUnitEQFilterParameters : NSObject {
    void * _impl;
}

@property (nonatomic) float bandwidth;
@property (nonatomic) BOOL bypass;
@property (nonatomic) int filterType;
@property (nonatomic) float frequency;
@property (nonatomic) float gain;

- (float)bandwidth;
- (BOOL)bypass;
- (void)dealloc;
- (int)filterType;
- (float)frequency;
- (float)gain;
- (id)init;
- (id)initWithImpl:(struct AVAudioUnitEQFilterParametersImpl { int (**x1)(); }*)arg1;
- (void)setBandwidth:(float)arg1;
- (void)setBypass:(BOOL)arg1;
- (void)setFilterType:(int)arg1;
- (void)setFrequency:(float)arg1;
- (void)setGain:(float)arg1;

@end