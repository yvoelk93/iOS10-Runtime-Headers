/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLSensorRecorderAccelMetaRequestByDateRange : NSObject <NSSecureCoding> {
    double  _endTime;
    double  _startTime;
}

@property double endTime;
@property double startTime;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (double)endTime;
- (id)initWithCoder:(id)arg1;
- (void)setEndTime:(double)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;

@end