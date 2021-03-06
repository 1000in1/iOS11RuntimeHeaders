/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFaceTrackingNode : BWNode {
    bool  _addDebugInfo;
    bool  _addMesh;
    int  _faceKitMachThreadPriority;
    struct CVAFaceKit { } * _faceKitRef;
    bool  _frontCamera;
    bool  _mirrored;
    struct opaqueCMSampleBuffer { } * _nextSbuf;
    int  _orientation;
    bool  _processing;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _processingLock;
    NSObject<OS_dispatch_queue> * _processingQueue;
    NSObject<OS_dispatch_semaphore> * _processingSemaphore;
    struct OpaqueFigCaptureISPProcessingSession { } * _processingSession;
    bool  _setupDone;
}

+ (void)initialize;

- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)_setupCVA;
- (void)_startProcessingSampleSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (bool)frontCamera;
- (id)initWithProcessingSession:(struct OpaqueFigCaptureISPProcessingSession { }*)arg1 figThreadPriority:(unsigned int)arg2 useDepth:(bool)arg3;
- (bool)mirroringEnabled;
- (id)nodeSubType;
- (id)nodeType;
- (int)orientation;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setFrontCamera:(bool)arg1;
- (void)setMirrored:(bool)arg1;
- (void)setOrientation:(int)arg1;

@end
