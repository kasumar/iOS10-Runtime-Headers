/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLIntermediate : NSObject {
    NSSQLIntermediate * _scope;
}

@property (nonatomic) NSSQLEntity *disambiguatingEntity;

+ (bool)expressionIsBasicKeypath:(id)arg1;
+ (bool)isSimpleKeypath:(id)arg1;

- (bool)_canDoASubselectForExpression:(id)arg1 inContext:(id)arg2;
- (bool)_functionExpressionIsSubqueryFollowedByKeypath:(id)arg1;
- (id)_generateSQLForConstantCollection:(id)arg1 inContext:(id)arg2;
- (id)_generateSQLForConstantValue:(id)arg1 inContext:(id)arg2;
- (id)_generateSQLForExpression:(id)arg1 allowToMany:(bool)arg2 inContext:(id)arg3;
- (id)_generateSQLForExpressionCollection:(id)arg1 allowToMany:(bool)arg2 inContext:(id)arg3;
- (id)_generateSQLForFetchExpression:(id)arg1 allowToMany:(bool)arg2 inContext:(id)arg3;
- (id)_generateSQLForFunctionExpression:(id)arg1 allowToMany:(bool)arg2 inContext:(id)arg3;
- (id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(bool)arg2 inContext:(id)arg3;
- (id)_generateSQLForSubqueryExpression:(id)arg1 trailingKeypath:(id)arg2 inContext:(id)arg3;
- (id)_generateSQLForTernaryExpression:(id)arg1 allowToMany:(bool)arg2 inContext:(id)arg3;
- (id)_generateSQLForVariableExpression:(id)arg1 allowToMany:(bool)arg2 inContext:(id)arg3;
- (id)_lastScopedItem;
- (void)_promoteJoinsForAggregateExpression:(id)arg1;
- (void)_promoteJoinsForFunctionExpression:(id)arg1;
- (void)_promoteJoinsForKeypathExpression:(id)arg1;
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)arg1;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (void)_promoteJoinsForTernaryExpression:(id)arg1;
- (id)disambiguatingEntity;
- (bool)expressionIsBasicKeypath:(id)arg1;
- (id)fetchIntermediate;
- (id)fetchIntermediateForKeypathExpression:(id)arg1;
- (id)generateSQLStringInContext:(id)arg1;
- (id)governingAlias;
- (id)governingAliasForKeypathExpression:(id)arg1;
- (id)governingEntityForKeypathExpression:(id)arg1;
- (id)initWithScope:(id)arg1;
- (bool)isFunctionScoped;
- (bool)isHavingScoped;
- (bool)isOrScoped;
- (bool)isSimpleKeypath:(id)arg1;
- (bool)isSimpleNoIndexFunction:(id)arg1;
- (bool)isTargetColumnsScoped;
- (bool)isUpdateColumnsScoped;
- (bool)isUpdateScoped;
- (bool)isVariableBasedKeypathScopedBySubquery:(id)arg1;
- (bool)isWhereScoped;
- (bool)keypathExpressionIsSafeLHSForIn:(id)arg1;
- (void)promoteJoinsInKeypathsForExpression:(id)arg1;
- (id)scope;
- (void)setDisambiguatingEntity:(id)arg1;

@end
