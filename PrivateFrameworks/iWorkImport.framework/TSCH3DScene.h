/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DScene : NSObject {
    TSCH3DScenePropertyAccessor * mAccessor;
    NSObject<TSCH3DScenePropertyAccessorFactory> * mAccessorFactory;
    TSCH3DCamera * mCamera;
    TSUNoCopyDictionary * mDelegateMap;
    NSMutableDictionary * mEnumeratorMap;
    TSCH3DSceneObject * mMain;
    NSMutableArray * mObjects;
    TSCH3DScene * mOriginal;
    NSMutableDictionary * mPropertiesMap;
}

@property (nonatomic, retain) TSCH3DScenePropertyAccessor *accessor;
@property (nonatomic, retain) NSObject<TSCH3DScenePropertyAccessorFactory> *accessorFactory;
@property (nonatomic, retain) TSCH3DCamera *camera;
@property (nonatomic, readonly) <TSCH3DSceneDelegate> *delegate;
@property (nonatomic, retain) TSCH3DSceneObject *main;
@property (nonatomic, retain) TSCH3DScene *original;

+ (id)scene;

- (id)accessor;
- (id)accessorFactory;
- (void)addObject:(id)arg1;
- (id)camera;
- (struct ChartScenePropertyAccessor { id x1; })chartProperties;
- (id)clone;
- (void)copyPropertiesFromScene:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)delegate;
- (id)delegateForObject:(id)arg1;
- (id)delegateForSceneObject:(id)arg1;
- (id)delegateMap;
- (id)description;
- (void)enumerateAllObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)enumeratorForType:(id)arg1;
- (id)enumeratorMap;
- (id)extractObjects:(bool)arg1 ofClasses:(id)arg2;
- (id)extractObjectsNotOfClass:(Class)arg1;
- (id)extractObjectsNotOfClasses:(id)arg1;
- (id)extractObjectsOfClass:(Class)arg1;
- (id)extractObjectsOfClasses:(id)arg1;
- (id)init;
- (id)main;
- (void)makeAllObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)makeDelegatesFromDelegator:(id)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)mutablePropertiesForType:(id)arg1;
- (id)objects;
- (id)original;
- (void)overrideObjects;
- (struct TSCH3DScenePart { id x1; })partForType:(id)arg1;
- (id)propertiesForType:(id)arg1;
- (id)propertiesMap;
- (id)reallocateObjects;
- (id)removeObjects:(bool)arg1 ofClasses:(id)arg2 addTo:(id)arg3;
- (id)removeObjects:(bool)arg1 ofClasses:(id)arg2 into:(id)arg3;
- (void)removeObjectsNotOfClass:(Class)arg1;
- (void)removeObjectsOfClass:(Class)arg1;
- (id)renderCache;
- (void)resetDelegates;
- (void)resetEnumerator;
- (void)resetObjects;
- (void)resetProperties;
- (id)returnRemoved:(bool)arg1 removeObjectsPassingTest:(id /* block */)arg2;
- (void)setAccessor:(id)arg1;
- (void)setAccessorFactory:(id)arg1;
- (void)setCamera:(id)arg1;
- (void)setDelegate:(id)arg1 forObject:(id)arg2;
- (void)setDelegate:(id)arg1 forSceneObject:(id)arg2;
- (void)setEnumerator:(id)arg1 forType:(id)arg2;
- (void)setEnumerator:(id)arg1 properties:(id)arg2 forType:(id)arg3;
- (void)setMain:(id)arg1;
- (void)setOriginal:(id)arg1;
- (void)setPart:(struct TSCH3DScenePart { id x1; })arg1 forType:(id)arg2;
- (void)setProperties:(id)arg1 forType:(id)arg2;
- (struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; })transform;

@end
