/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLActivityCriterionEntry : PLActivityCriterion {
    id /* block */  _criterionBlock;
    NSString * _entryKey;
    PLEntryNotificationOperatorComposition * _entryListener;
    NSDictionary * _filter;
}

@property (copy) id /* block */ criterionBlock;
@property (readonly) NSString *entryKey;
@property (retain) PLEntryNotificationOperatorComposition *entryListener;
@property (retain) NSDictionary *filter;

+ (id)displayOffCriterion;
+ (id)pluggedInCriterion;

- (void).cxx_destruct;
- (id /* block */)criterionBlock;
- (id)description;
- (void)didDisableActivity:(id)arg1;
- (void)didEnableActivity:(id)arg1;
- (id)entryKey;
- (id)entryListener;
- (id)filter;
- (id)initWithEntryKey:(id)arg1 withCriterionBlock:(id /* block */)arg2;
- (id)initWithEntryKey:(id)arg1 withFilter:(id)arg2 withCriterionBlock:(id /* block */)arg3;
- (void)scheduleEntryListener;
- (void)setCriterionBlock:(id /* block */)arg1;
- (void)setEntryListener:(id)arg1;
- (void)setFilter:(id)arg1;

@end
