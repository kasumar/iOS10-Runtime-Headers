/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartElementSceneObject : TSCH3DSceneObject

+ (bool)isHorizontalChart;
+ (struct TSCH3DScenePart { id x1; })partWithEnumerator:(id)arg1 layoutSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; long long x6; unsigned long long x7; })arg2;
+ (id)resetSeriesStorage:(id)arg1 forSeries:(id)arg2;
+ (id)scenePropertiesKey;
+ (void)setLowDetailedGeometriesForScene:(id)arg1;
+ (bool)shouldCreateMeshSeriesStorage;

- (struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })adjustedScaleForInfoChartScale:(const struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg1 scene:(id)arg2;
- (bool)applyEffectsForProperties:(id)arg1 series:(id)arg2 index:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg3 pipeline:(id)arg4 injectEffectsUsingBlock:(id /* block */)arg5;
- (float)chartOpacityForScene:(id)arg1;
- (id)delegateFromScene:(id)arg1;
- (float)depthForScene:(id)arg1;
- (id)elementPropertiesFromScene:(id)arg1;
- (struct GeometryResource { int x1; struct ObjcSharedPtr<TSCH3DResource> { id x_2_1_1; struct GeometryArrays { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; } x_2_1_2; struct ObjcSharedPtr<TSCH3DGeometry> { id x_3_2_1; } x_2_1_3; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x_2_1_4; void*x_2_1_5; void*x_2_1_6; void*x_2_1_7; void*x_2_1_8; void*x_2_1_9; void*x_2_1_10; void*x_2_1_11; void*x_2_1_12; void*x_2_1_13; void*x_2_1_14; void*x_2_1_15; void*x_2_1_16; void*x_2_1_17; void*x_2_1_18; void*x_2_1_19; void*x_2_1_20; void*x_2_1_21; void*x_2_1_22; void*x_2_1_23; void*x_2_1_24; struct  
                float z; 
                float b; 
                float p; 
             {} x_2_1_25; void*x_2_1_26; void*x_2_1_27; void*x_2_1_28; void*x_2_1_29; void*x_2_1_30; void*x_2_1_31; void*x_2_1_32; void*x_2_1_33; void*x_2_1_34; void*x_2_1_35; void*x_2_1_36; void*x_2_1_37; void*x_2_1_38; void*x_2_1_39; void*x_2_1_40; void*x_2_1_41; void*x_2_1_42; void*x_2_1_43; void*x_2_1_44; void*x_2_1_45; void*x_2_1_46; void*x_2_1_47; void*x_2_1_48; void*x_2_1_49; void*x_2_1_50; void*x_2_1_51; void*x_2_1_52; void*x_2_1_53; void*x_2_1_54; void*x_2_1_55; void*x_2_1_56; void*x_2_1_57; void*x_2_1_58; void*x_2_1_59; BOOL x_2_1_60; out void*x_2_1_61; in int x_2_1_62; void*x_2_1_63; void*x_2_1_64; double x_2_1_65; void*x_2_1_66; float x_2_1_67; int x_2_1_68; long x_2_1_69; void*x_2_1_70; const void*x_2_1_71; void*x_2_1_72; void*x_2_1_73; void*x_2_1_74; void*x_2_1_75; SEL x_2_1_76; void*x_2_1_77; void*x_2_1_78; void*x_2_1_79; void*x_2_1_80; void*x_2_1_81; short x_2_1_82; int x_2_1_83; in void*x_2_1_84; void*x_2_1_85; void*x_2_1_86; void x_2_1_87; out int x_2_1_88; double x_2_1_89; char *x_2_1_90; void*x_2_1_91; void*x_2_1_92; char *x_2_1_93; void*x_2_1_94; void*x_2_1_95; void x_2_1_96; out int x_2_1_97; double x_2_1_98; char *x_2_1_99; void*x_2_1_100; void*x_2_1_101; void*x_2_1_102; void*x_2_1_103; void*x_2_1_104; void*x_2_1_105; void*x_2_1_106; void*x_2_1_107; void*x_2_1_108; void*x_2_1_109; void*x_2_1_110; void*x_2_1_111; void*x_2_1_112; void*x_2_1_113; void*x_2_1_114; void*x_2_1_115; void*x_2_1_116; void*x_2_1_117; void*x_2_1_118; void*x_2_1_119; void*x_2_1_120; void*x_2_1_121; void*x_2_1_122; void*x_2_1_123; void*x_2_1_124; void*x_2_1_125; void*x_2_1_126; void*x_2_1_127; void*x_2_1_128; void*x_2_1_129; void*x_2_1_130; void*x_2_1_131; void*x_2_1_132; void*x_2_1_133; void*x_2_1_134; void*x_2_1_135; void*x_2_1_136; void*x_2_1_137; void*x_2_1_138; void*x_2_1_139; void*x_2_1_140; void*x_2_1_141; void*x_2_1_142; void*x_2_1_143; void*x_2_1_144; void*x_2_1_145; void*x_2_1_146; void*x_2_1_147; void*x_2_1_148; void*x_2_1_149; void*x_2_1_150; void*x_2_1_151; void*x_2_1_152; void*x_2_1_153; void*x_2_1_154; void*x_2_1_155; void*x_2_1_156; void*x_2_1_157; void*x_2_1_158; void*x_2_1_159; void*x_2_1_160; void*x_2_1_161; void*x_2_1_162; void*x_2_1_163; void*x_2_1_164; void*x_2_1_165; void*x_2_1_166; void*x_2_1_167; void*x_2_1_168; void*x_2_1_169; void*x_2_1_170; void*x_2_1_171; void*x_2_1_172; void*x_2_1_173; void*x_2_1_174; void*x_2_1_175; void*x_2_1_176; void*x_2_1_177; void*x_2_1_178; void*x_2_1_179; void*x_2_1_180; void*x_2_1_181; void*x_2_1_182; struct  struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl { {} x_2_1_183; void*x_2_1_184; char *x_2_1_185; void*x_2_1_186; void*x_2_1_187; void*x_2_1_188; void*x_2_1_189; void*x_2_1_190; void*x_2_1_191; void*x_2_1_192; void*x_2_1_193; void*x_2_1_194; } x2; void*x3; void*x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; })geometryForSeries:(id)arg1 index:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 scene:(id)arg3;
- (Class)getBounds3DClass;
- (void)getBounds:(id)arg1;
- (void)getSceneObjectElementsBounds:(id)arg1;
- (void)getSelectionKnobsPositions:(id)arg1;
- (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })labelObjectSpacePosition:(unsigned int)arg1 axisValue:(double)arg2 intercept:(double)arg3;
- (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })labelOffset:(unsigned int)arg1 labelSize:(const struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg2 textureSize:(const struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg3 dataSpaceValue:(float)arg4;
- (id)modelEnumeratorFromScene:(id)arg1;
- (bool)p_isRenderPassDelayedForDelegate:(id)arg1;
- (void)p_processItems:(id)arg1 processItemsClass:(Class)arg2;
- (void)postrenderElement:(const struct RenderElementInfo { id x1; id x2; /* Warning: Unrecognized filer type: 't' using 'void*' */ void*x3; void x4; void*x5; BOOL x6; void*x7; void*x8; int x9; in void*x10; void*x11; void*x12; union { int x_13_1_1; int x_13_1_2; int x_13_1_3; } x13; union { int x_14_1_1; int x_14_1_2; int x_14_1_3; } x14; }*)arg1;
- (void)prerenderElement:(const struct RenderElementInfo { id x1; id x2; /* Warning: Unrecognized filer type: 't' using 'void*' */ void*x3; void x4; void*x5; BOOL x6; void*x7; void*x8; int x9; in void*x10; void*x11; void*x12; union { int x_13_1_1; int x_13_1_2; int x_13_1_3; } x13; union { int x_14_1_1; int x_14_1_2; int x_14_1_3; } x14; }*)arg1;
- (void)rayPick:(id)arg1;
- (void)render:(id)arg1;
- (struct ElementRenderPass { int x1; })render:(const struct RenderElementInfo { id x1; id x2; /* Warning: Unrecognized filer type: 't' using 'void*' */ void*x3; void x4; void*x5; BOOL x6; void*x7; void*x8; int x9; in void*x10; void*x11; void*x12; union { int x_13_1_1; int x_13_1_2; int x_13_1_3; } x13; union { int x_14_1_1; int x_14_1_2; int x_14_1_3; } x14; }*)arg1 pushMatrix:(bool)arg2 delayedPass:(bool)arg3;
- (void)renderElement:(const struct RenderElementInfo { id x1; id x2; /* Warning: Unrecognized filer type: 't' using 'void*' */ void*x3; void x4; void*x5; BOOL x6; void*x7; void*x8; int x9; in void*x10; void*x11; void*x12; union { int x_13_1_1; int x_13_1_2; int x_13_1_3; } x13; union { int x_14_1_1; int x_14_1_2; int x_14_1_3; } x14; }*)arg1;
- (void)renderLabelsSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)renderSeriesLabelsSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)renderTwoPassGeometry:(bool)arg1 processor:(id)arg2 renderBlock:(id /* block */)arg3;
- (Class)resizer3DClass;
- (struct TSCH3DScenePart { id x1; })scenePartForScene:(id)arg1;
- (id)scenePropertiesKey;
- (id)selectionPathForInfo:(id)arg1 scene:(id)arg2 pickedPoint:(id)arg3;
- (void)setTransparencyBlendingForProcessor:(id)arg1;
- (bool)shouldDelayForChartOpacity:(float)arg1;
- (bool)shouldRenderEachValue;
- (bool)shouldRenderSeries:(id)arg1;
- (bool)transparencyDepthMask;
- (void)updateLightingEffectsState:(id)arg1 scene:(id)arg2;

@end
