/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroDurationCalculations : NSObject

+ (double)_durationForItemCount:(long long)arg1 inPickList:(id)arg2 withBlueprint:(id)arg3 localOnly:(bool)arg4;
+ (double)cachedDurationForPickList:(id)arg1 blueprint:(id)arg2 itemCount:(long long)arg3;
+ (long long)cappedIdealItemCount:(id)arg1;
+ (double)durationForItemCount:(long long)arg1 inPickList:(id)arg2 withBlueprint:(id)arg3;
+ (void)hintUserUpdatedUsedScenesForAssetIDs:(id)arg1 inPickList:(id)arg2;
+ (long long)itemCountInPickList:(id)arg1 forDuration:(double)arg2 withBlueprint:(id)arg3 outputResidual:(double*)arg4;
+ (double)maximumDurationForGoodEditInPickList:(id)arg1 withBlueprint:(id)arg2;
+ (double)maximumPresetCountForPickList:(id)arg1;
+ (double)minimumPresetCountForPickList:(id)arg1;
+ (id)nominalBlueprint;
+ (void)setCachedDuration:(double)arg1 forPickList:(id)arg2 blueprint:(id)arg3 count:(long long)arg4;

@end
