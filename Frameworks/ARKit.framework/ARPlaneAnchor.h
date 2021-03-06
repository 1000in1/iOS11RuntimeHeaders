/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARPlaneAnchor : ARAnchor {
    long long  _activePlaneID;
    long long  _alignment;
    void _center;
    void _extent;
    ARPatchGrid * _gridExtent;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _visionTransform;
}

@property (nonatomic) long long activePlaneID;
@property (nonatomic, readonly) long long alignment;
@property (nonatomic) void center;
@property (nonatomic) void extent;
@property (nonatomic, retain) ARPatchGrid *gridExtent;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } visionTransform;

- (void).cxx_destruct;
- (id)_description:(bool)arg1;
- (id)_hitTestFromOrigin:(void *)arg1 withDirection:(void *)arg2 usingExtent:(void *)arg3; // needs 3 arg types, found 1: bool
- (long long)activePlaneID;
- (long long)alignment;
- (void)center;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugQuickLookObject;
- (id)description;
- (void)extent;
- (id)gridExtent;
- (id)initWithIdentifier:(id)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 alignment:(long long)arg3;
- (void)setActivePlaneID:(long long)arg1;
- (void)setCenter;
- (void)setExtent;
- (void)setGridExtent:(id)arg1;
- (void)setVisionTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })visionTransform;

@end
