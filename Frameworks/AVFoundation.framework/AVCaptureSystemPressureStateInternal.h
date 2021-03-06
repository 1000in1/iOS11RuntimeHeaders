/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureSystemPressureStateInternal : NSObject {
    unsigned long long  _factors;
    NSString * _level;
    AVFrameRateRange * _recommendedFrameRateRangeForPortrait;
}

@property (readonly) unsigned long long factors;
@property (readonly) NSString *level;
@property (readonly) AVFrameRateRange *recommendedFrameRateRangeForPortrait;

- (void)dealloc;
- (unsigned long long)factors;
- (id)initWithLevel:(id)arg1 factors:(unsigned long long)arg2 recommendedFrameRateRangeForPortrait:(id)arg3;
- (id)level;
- (id)recommendedFrameRateRangeForPortrait;

@end
