/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRouteInfo : NSObject {
    NSString * _etaText;
    GEOComposedRoute * _route;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _uniqueEnd;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _uniqueStart;
}

@property (nonatomic, retain) NSString *etaText;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (nonatomic) struct PolylineCoordinate { unsigned int x1; float x2; } uniqueEnd;
@property (nonatomic) struct PolylineCoordinate { unsigned int x1; float x2; } uniqueStart;

- (id).cxx_construct;
- (void)dealloc;
- (id)etaText;
- (id)initWithComposedRoute:(id)arg1 etaText:(id)arg2 uniqueStart:(struct PolylineCoordinate { unsigned int x1; float x2; })arg3 uniqueEnd:(struct PolylineCoordinate { unsigned int x1; float x2; })arg4;
- (id)route;
- (void)setEtaText:(id)arg1;
- (void)setUniqueEnd:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setUniqueStart:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (struct PolylineCoordinate { unsigned int x1; float x2; })uniqueEnd;
- (struct PolylineCoordinate { unsigned int x1; float x2; })uniqueStart;

@end