/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class VKMapCameraController, VKMapModel, VKImageCanvas;

@interface VKMapSnapshotCreator : NSObject <VKMapModelDelegate> {
    VKImageCanvas *_canvas;
    int _mapType;
    VKMapModel *_mapModel;
    BOOL _didBecomeFullyDrawn;
    BOOL _hasFailedTiles;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completion;

    VKMapCameraController *_cameraController;
}

@property(readonly) struct CGSize { float x1; float x2; } size;
@property int mapType;
@property BOOL localizeLabels;
@property int labelScaleFactor;
@property BOOL showsPointsOfInterest;
@property BOOL showsBuildings;

+ (BOOL)supportsSharingThumbnails;
+ (BOOL)supportsHighResolutionSnapshots;

- (void)mapModel:(id)arg1 annotationMarker:(id)arg2 didChangeDragState:(int)arg3 fromOldState:(int)arg4;
- (void)mapModel:(id)arg1 didAddAnnotationMarkers:(id)arg2;
- (id)mapModel:(id)arg1 markerForAnnotation:(id)arg2;
- (void)lookAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (void)mapModel:(id)arg1 willTransitionFrom:(int)arg2 to:(int)arg3 duration:(double)arg4;
- (void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
- (double)mapModelZoomScale:(id)arg1;
- (BOOL)mapModelInNavAtDefaultZoom:(id)arg1;
- (void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapModelDidFinishLoadingTiles:(id)arg1;
- (void)mapModelDidStartLoadingTiles:(id)arg1;
- (void)mapModelDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
- (void)mapModelWillBecomFullyDrawn:(id)arg1;
- (void)mapModelDidBecomePartiallyDrawn:(id)arg1;
- (id)mapModel:(id)arg1 painterForOverlay:(id)arg2;
- (void)mapModel:(id)arg1 didFinishAddingAnnotationMarkers:(id)arg2;
- (void)mapModel:(id)arg1 didAnimateInAnnotationMarkers:(id)arg2;
- (void)mapModel:(id)arg1 willAnimateInAnnotationMarkers:(id)arg2;
- (void)mapModel:(id)arg1 needsPanByOffset:(struct CGPoint { float x1; float x2; })arg2 relativeToScreenPoint:(struct CGPoint { float x1; float x2; })arg3 animated:(BOOL)arg4 duration:(double)arg5 completionHandler:(id)arg6;
- (BOOL)mapModelInNav:(id)arg1;
- (BOOL)isRoadClassDisabled:(int)arg1;
- (void)setMapType:(int)arg1;
- (void)setShowsBuildings:(BOOL)arg1;
- (BOOL)showsBuildings;
- (void)setShowsPointsOfInterest:(BOOL)arg1;
- (BOOL)showsPointsOfInterest;
- (void)setLabelScaleFactor:(int)arg1;
- (int)labelScaleFactor;
- (void)setLocalizeLabels:(BOOL)arg1;
- (BOOL)localizeLabels;
- (int)mapType;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4;
- (void)renderSnapshot:(id)arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2 homeQueue:(id)arg3;
- (struct CGSize { float x1; float x2; })size;
- (void)dealloc;
- (void)cancel;
- (void)_mapkit_configureFromDefaults;

@end