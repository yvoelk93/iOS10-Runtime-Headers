/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface _VTLockscreenPolicy : _VTStatePolicy <MCProfileConnectionObserver> {
    unsigned char  _lockedState;
    int  _lockscreenNotifyToken;
    BOOL  _siriRestrictedOnLockScreen;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_registerForLockscreenUpdates;
- (void)_unregisterForLockscreenUpdates;
- (void)dealloc;
- (id)initWithCallback:(id /* block */)arg1 queue:(id)arg2;
- (BOOL)isEnabled;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;

@end