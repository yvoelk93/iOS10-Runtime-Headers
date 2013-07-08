/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class <PCInterfaceUsabilityMonitorDelegate>, NSString, PCInterfaceUsabilityMonitor, CUTWeakReference;

@interface PCWWANUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate> {
    struct dispatch_queue_s { } *_delegateQueue;
    struct dispatch_queue_s { } *_ivarQueue;
    struct dispatch_queue_s { } *_monitorDelegateQueue;
    CUTWeakReference *_delegateReference;
    BOOL _isInCall;
    BOOL _isInHighPowerState;
    BOOL _trackUsability;
    unsigned int _thresholdOffTransitionCount;
    double _trackedTimeInterval;
    NSString *_interfaceName;
    PCInterfaceUsabilityMonitor *_interfaceMonitor;
    struct __CFString { } *_currentRAT;
    int _powerlogCDRXToken;
    long _wwanContextID;
    struct dispatch_queue_s { } *_ctServerQueue;
}

@property(readonly) struct __CFString { }* currentRAT;
@property(readonly) BOOL isLTEWithCDRX;
@property(readonly) int interfaceIdentifier;
@property(readonly) int linkQuality;
@property(readonly) BOOL isInterfaceUsable;
@property(readonly) BOOL isInterfaceHistoricallyUsable;
@property(readonly) BOOL isInternetReachable;
@property(readonly) NSString * linkQualityString;
@property(readonly) BOOL isPoorLinkQuality;
@property(readonly) BOOL isRadioHot;
@property <PCInterfaceUsabilityMonitorDelegate> * delegate;


- (void)_adjustInterfaceNameForWWANContextID:(long)arg1;
- (void)_setupWWANMonitor;
- (id)initWithDelegateQueue:(struct dispatch_queue_s { }*)arg1;
- (void)_forwardConfigurationOnIvarQueue;
- (BOOL)isLTEWithCDRX;
- (struct __CFString { }*)currentRAT;
- (int)interfaceIdentifier;
- (BOOL)isRadioHot;
- (void)setTrackUsability:(BOOL)arg1;
- (void)setThresholdOffTransitionCount:(unsigned int)arg1;
- (void)setTrackedTimeInterval:(double)arg1;
- (void)_callDelegateOnIvarQueueWithBlock:(id)arg1;
- (int)linkQuality;
- (void)interfaceReachabilityChanged:(id)arg1;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (BOOL)isInterfaceHistoricallyUsable;
- (BOOL)isPoorLinkQuality;
- (id)linkQualityString;
- (BOOL)isInternetReachable;
- (BOOL)isInterfaceUsable;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;

@end