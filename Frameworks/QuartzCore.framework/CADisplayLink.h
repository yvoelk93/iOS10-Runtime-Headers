/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class CADisplay;

@interface CADisplayLink : NSObject  {
    void *_impl;
}

@property(readonly) CADisplay * display;
@property(retain) id userInfo;
@property(readonly) double timestamp;
@property(readonly) double duration;
@property(getter=isPaused) BOOL paused;
@property int frameInterval;

+ (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
+ (id)displayLinkWithDisplay:(id)arg1 target:(id)arg2 selector:(SEL)arg3;

- (BOOL)isPaused;
- (double)timestamp;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (id)_initWithDisplayLinkItem:(struct DisplayLinkItem { struct Display {} *x1; void *x2; SEL x3; void *x4; int x5; struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_6_1_1; } x6; struct Condition { struct _opaque_pthread_cond_t { long x_1_2_1; BOOL x_1_2_2[24]; } x_7_1_1; } x7; struct _opaque_pthread_t {} *x8; id x9; struct Ref<CA::Display::DisplayLink> { struct DisplayLink {} *x_10_1_1; } x10; struct List<const __CFString *> {} *x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; }*)arg1;
- (id)display;
- (int)frameInterval;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)invalidate;
- (id)userInfo;
- (void)dealloc;
- (void)setPaused:(BOOL)arg1;
- (void)setFrameInterval:(int)arg1;
- (void)setUserInfo:(id)arg1;
- (double)duration;

@end