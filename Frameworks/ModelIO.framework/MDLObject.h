/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLObject : NSObject <MDLNamed> {
    <MDLObjectContainerComponent> * _children;
    NSMapTable * _components;
    MDLObject * _parent;
    NSString * name;
}

@property (nonatomic, retain) <MDLObjectContainerComponent> *children;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) MDLObject *parent;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, retain) <MDLTransformComponent> *transform;

// Image: /System/Library/Frameworks/ModelIO.framework/ModelIO

- (void).cxx_destruct;
- (void)addChild:(id)arg1;
- (struct { })boundingBoxAtTime:(double)arg1;
- (id)children;
- (id)componentConformingToProtocol:(id)arg1;
- (id)init;
- (id)name;
- (id)parent;
- (id)path;
- (void)setChildren:(id)arg1;
- (void)setComponent:(id)arg1 forProtocol:(id)arg2;
- (void)setName:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setTransform:(id)arg1;
- (id)transform;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (id)objectWithSCNNode:(id)arg1;
+ (id)objectWithSCNNode:(id)arg1 bufferAllocator:(id)arg2;

- (id)_associatedSCNNode;
- (void)_updateAssociatedSCNNodeWithGeometrySetter:(id /* block */)arg1 texturePathProvider:(id /* block */)arg2 vertexAttributeNamed:(id)arg3 materialPropertyNamed:(id)arg4;

@end
