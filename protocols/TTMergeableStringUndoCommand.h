/* Generated by RuntimeBrowser.
 */

@protocol TTMergeableStringUndoCommand <NSObject, TTMergeableStringIDTracker>

@required

- (void)applyToString:(TTMergeableUndoString *)arg1;
- (bool)coalesceWith:(NSObject<TTMergeableStringUndoCommand> *)arg1 inString:(TTMergeableString *)arg2;

@end
