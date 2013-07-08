/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@class SCRCGestureFinger;

@interface SCRCGestureEvent : NSObject  {
    unsigned int _deviceIdentifier;
    SCRCGestureFinger *_finger[5];
    unsigned int _fingerCount;
    double _time;
    struct CGPoint { 
        float x; 
        float y; 
    } _averageLocation;
}


- (struct CGPoint { float x1; float x2; })magneticLocation;
- (BOOL)isCancelEvent;
- (struct CGPoint { float x1; float x2; })balancedLocation;
- (struct CGPoint { float x1; float x2; })averageLocation;
- (id)fingers;
- (id)fingerWithoutIdentifier:(unsigned int)arg1;
- (id)fingerWithIdentifier:(unsigned int)arg1;
- (id)fingerAtIndex:(unsigned int)arg1;
- (unsigned int)fingerCount;
- (void)removeFingerWithIdentifier:(unsigned int)arg1;
- (void)addFingerWithIdentifier:(unsigned int)arg1 location:(struct CGPoint { float x1; float x2; })arg2;
- (unsigned int)deviceIdentifier;
- (id)initWithDeviceIdentifier:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fingerFrame;
- (double)time;
- (void)dealloc;
- (id)description;

@end