/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

@interface CVAVideoPipelineProperties_Impl : NSObject <CVAVideoPipelinePropertiesSPI> {
    float  _alphaCoeffFilterColorStd;
    float  _alphaCoeffFilterColorStdFast;
    float  _alphaContrastExponent;
    float  _alphaGammaExponent;
    float  _alphaGuidedFilterEps;
    unsigned long long  _alphaMattePixelBufferHeight;
    unsigned int  _alphaMattePixelBufferPixelFormat;
    unsigned long long  _alphaMattePixelBufferWidth;
    float  _alphaMaxLaplacian;
    int  _backgroundDisparityStatsWindowSize;
    float  _backgroundDisparityUpdateRate;
    float  _backgroundSeparationLikelihoodHigh;
    float  _backgroundSeparationLikelihoodLow;
    float  _centerDeltaCanonicalDisparity;
    float  _closeDisparityPercentile;
    unsigned long long  _colorPixelBufferHeight;
    unsigned int  _colorPixelBufferPixelFormat;
    unsigned long long  _colorPixelBufferWidth;
    float  _deltaCanonicalDisparity;
    float  _deltaDepth;
    float  _depthPixelBufferMaxLeftOcclusionDisparityChange;
    float  _depthPixelBufferMaxRightOcclusionDisparityChange;
    float  _depthPixelBufferOffset;
    float  _depthPixelBufferScale;
    int  _depthPixelBufferXPadding;
    int  _depthPixelBufferYPadding;
    float  _depthQualityMetricFocalPlaneOffsetMeters;
    float  _disparityFilterColorStd;
    float  _disparityFilterUpdateRate;
    int  _disparityPushingBackgroundToForegroundDisparityDifference;
    float  _disparityStereoBaselineMeters;
    float  _disparityStereoFocalLengthPixels;
    float  _dsCanonicalHighScale;
    float  _dsCanonicalHighThld;
    float  _dsCanonicalLowScale;
    float  _dsCanonicalLowThld;
    float  _faceSizeRatioInFocus;
    float  _focusThresholdHardness;
    float  _focusUpdateRateFast;
    float  _focusUpdateRateSlow;
    float  _foregroundPercentile;
    float  _guidedFilterMinDistToDeweight;
    float  _guidedFilterUnconfidentWeight;
    unsigned long long  _inputDisparityPixelBufferHeight;
    unsigned int  _inputDisparityPixelBufferPixelFormat;
    unsigned long long  _inputDisparityPixelBufferWidth;
    unsigned long long  _inputToOutputDisparityPixelBufferRotation;
    int  _invalidDisparityRatioStatsWindowSize;
    float  _invalidDisparityRatioUpdateRate;
    float  _mattingUpdateRate;
    float  _mattingUpdateRateFast;
    float  _maxDeltaCanonicalDisparity;
    float  _maxDisparityFillingDistFromForeground;
    float  _maxDisparityFillingInconsistency;
    int  _maxDistToPushDisparityEdgesFwd;
    int  _maxDistToPushDisparityEdgesRev;
    float  _minDeltaCanonicalDisparity;
    bool  _modulateFocalRatio;
    unsigned long long  _outputDisparityPixelBufferHeight;
    unsigned int  _outputDisparityPixelBufferPixelFormat;
    unsigned long long  _outputDisparityPixelBufferWidth;
    float  _referenceDisparity;
    int  _relightDisplayMode;
    bool  _relightMarkFaceCenter;
    bool  _relightOverlayModel;
    bool  _relightSkipAlpha;
    float  _renderingDisparityAtInfinity;
    float  _renderingDisparityBlurRadius;
    float  _renderingDisparityUpdateRate;
    float  _renderingInvalidDisparityFillValue;
    float  _renderingLensFocalLength;
    float  _sdofStateMachineIntensityIncrement;
    double  _sdofStateMachineMaxOrientationDifference;
    float  _stableBackgroundDisparitySumVariance;
    float  _stableInvalidDisparityRatio;
    double  _stageLightStageMachineMaxOrientationDifference;
    float  _stageLightStateMachineIntensityIncrement;
    float  _unstableBackgroundDisparitySumVariance;
    float  _unstableInvalidDisparityRatio;
    unsigned long long  _videoPipelineDevice;
}

@property float alphaCoeffFilterColorStd;
@property float alphaCoeffFilterColorStdFast;
@property float alphaContrastExponent;
@property float alphaGammaExponent;
@property float alphaGuidedFilterEps;
@property unsigned long long alphaMattePixelBufferHeight;
@property (readonly) unsigned int alphaMattePixelBufferPixelFormat;
@property unsigned long long alphaMattePixelBufferWidth;
@property float alphaMaxLaplacian;
@property int backgroundDisparityStatsWindowSize;
@property float backgroundDisparityUpdateRate;
@property float backgroundSeparationLikelihoodHigh;
@property float backgroundSeparationLikelihoodLow;
@property float centerDeltaCanonicalDisparity;
@property float closeDisparityPercentile;
@property unsigned long long colorPixelBufferHeight;
@property (readonly) unsigned int colorPixelBufferPixelFormat;
@property unsigned long long colorPixelBufferWidth;
@property (readonly, copy) NSString *debugDescription;
@property float deltaCanonicalDisparity;
@property float deltaDepth;
@property float depthPixelBufferMaxLeftOcclusionDisparityChange;
@property float depthPixelBufferMaxRightOcclusionDisparityChange;
@property float depthPixelBufferOffset;
@property float depthPixelBufferScale;
@property int depthPixelBufferXPadding;
@property int depthPixelBufferYPadding;
@property float depthQualityMetricFocalPlaneOffsetMeters;
@property (readonly, copy) NSString *description;
@property float disparityFilterColorStd;
@property float disparityFilterUpdateRate;
@property int disparityPushingBackgroundToForegroundDisparityDifference;
@property float disparityStereoBaselineMeters;
@property float disparityStereoFocalLengthPixels;
@property float dsCanonicalHighScale;
@property float dsCanonicalHighThld;
@property float dsCanonicalLowScale;
@property float dsCanonicalLowThld;
@property float faceSizeRatioInFocus;
@property float focusThresholdHardness;
@property float focusUpdateRateFast;
@property float focusUpdateRateSlow;
@property float foregroundPercentile;
@property float guidedFilterMinDistToDeweight;
@property float guidedFilterUnconfidentWeight;
@property (readonly) unsigned long long hash;
@property unsigned long long inputDisparityPixelBufferHeight;
@property (readonly) unsigned int inputDisparityPixelBufferPixelFormat;
@property unsigned long long inputDisparityPixelBufferWidth;
@property unsigned long long inputToOutputDisparityPixelBufferRotation;
@property int invalidDisparityRatioStatsWindowSize;
@property float invalidDisparityRatioUpdateRate;
@property float mattingUpdateRate;
@property float mattingUpdateRateFast;
@property float maxDeltaCanonicalDisparity;
@property float maxDisparityFillingDistFromForeground;
@property float maxDisparityFillingInconsistency;
@property int maxDistToPushDisparityEdgesFwd;
@property int maxDistToPushDisparityEdgesRev;
@property float minDeltaCanonicalDisparity;
@property bool modulateFocalRatio;
@property unsigned long long outputDisparityPixelBufferHeight;
@property (readonly) unsigned int outputDisparityPixelBufferPixelFormat;
@property unsigned long long outputDisparityPixelBufferWidth;
@property float referenceDisparity;
@property int relightDisplayMode;
@property bool relightMarkFaceCenter;
@property bool relightOverlayModel;
@property bool relightSkipAlpha;
@property float renderingDisparityAtInfinity;
@property float renderingDisparityBlurRadius;
@property float renderingDisparityUpdateRate;
@property float renderingInvalidDisparityFillValue;
@property float renderingLensFocalLength;
@property float sdofStateMachineIntensityIncrement;
@property double sdofStateMachineMaxOrientationDifference;
@property float stableBackgroundDisparitySumVariance;
@property float stableInvalidDisparityRatio;
@property double stageLightStageMachineMaxOrientationDifference;
@property float stageLightStateMachineIntensityIncrement;
@property (readonly) Class superclass;
@property float unstableBackgroundDisparitySumVariance;
@property float unstableInvalidDisparityRatio;
@property (readonly) unsigned long long videoPipelineDevice;

- (float)alphaCoeffFilterColorStd;
- (float)alphaCoeffFilterColorStdFast;
- (float)alphaContrastExponent;
- (float)alphaGammaExponent;
- (float)alphaGuidedFilterEps;
- (unsigned long long)alphaMattePixelBufferHeight;
- (unsigned int)alphaMattePixelBufferPixelFormat;
- (unsigned long long)alphaMattePixelBufferWidth;
- (float)alphaMaxLaplacian;
- (int)backgroundDisparityStatsWindowSize;
- (float)backgroundDisparityUpdateRate;
- (float)backgroundSeparationLikelihoodHigh;
- (float)backgroundSeparationLikelihoodLow;
- (float)centerDeltaCanonicalDisparity;
- (float)closeDisparityPercentile;
- (unsigned long long)colorPixelBufferHeight;
- (unsigned int)colorPixelBufferPixelFormat;
- (unsigned long long)colorPixelBufferWidth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)deltaCanonicalDisparity;
- (float)deltaDepth;
- (float)depthPixelBufferMaxLeftOcclusionDisparityChange;
- (float)depthPixelBufferMaxRightOcclusionDisparityChange;
- (float)depthPixelBufferOffset;
- (float)depthPixelBufferScale;
- (int)depthPixelBufferXPadding;
- (int)depthPixelBufferYPadding;
- (float)depthQualityMetricFocalPlaneOffsetMeters;
- (float)disparityFilterColorStd;
- (float)disparityFilterUpdateRate;
- (int)disparityPushingBackgroundToForegroundDisparityDifference;
- (float)disparityStereoBaselineMeters;
- (float)disparityStereoFocalLengthPixels;
- (float)dsCanonicalHighScale;
- (float)dsCanonicalHighThld;
- (float)dsCanonicalLowScale;
- (float)dsCanonicalLowThld;
- (float)faceSizeRatioInFocus;
- (float)focusThresholdHardness;
- (float)focusUpdateRateFast;
- (float)focusUpdateRateSlow;
- (float)foregroundPercentile;
- (float)guidedFilterMinDistToDeweight;
- (float)guidedFilterUnconfidentWeight;
- (id)initForVideoPipelineDevice:(unsigned long long)arg1;
- (unsigned long long)inputDisparityPixelBufferHeight;
- (unsigned int)inputDisparityPixelBufferPixelFormat;
- (unsigned long long)inputDisparityPixelBufferWidth;
- (unsigned long long)inputToOutputDisparityPixelBufferRotation;
- (int)invalidDisparityRatioStatsWindowSize;
- (float)invalidDisparityRatioUpdateRate;
- (float)mattingUpdateRate;
- (float)mattingUpdateRateFast;
- (float)maxDeltaCanonicalDisparity;
- (float)maxDisparityFillingDistFromForeground;
- (float)maxDisparityFillingInconsistency;
- (int)maxDistToPushDisparityEdgesFwd;
- (int)maxDistToPushDisparityEdgesRev;
- (float)minDeltaCanonicalDisparity;
- (bool)modulateFocalRatio;
- (unsigned long long)outputDisparityPixelBufferHeight;
- (unsigned int)outputDisparityPixelBufferPixelFormat;
- (unsigned long long)outputDisparityPixelBufferWidth;
- (float)referenceDisparity;
- (int)relightDisplayMode;
- (bool)relightMarkFaceCenter;
- (bool)relightOverlayModel;
- (bool)relightSkipAlpha;
- (float)renderingDisparityAtInfinity;
- (float)renderingDisparityBlurRadius;
- (float)renderingDisparityUpdateRate;
- (float)renderingInvalidDisparityFillValue;
- (float)renderingLensFocalLength;
- (float)sdofStateMachineIntensityIncrement;
- (double)sdofStateMachineMaxOrientationDifference;
- (void)setAlphaCoeffFilterColorStd:(float)arg1;
- (void)setAlphaCoeffFilterColorStdFast:(float)arg1;
- (void)setAlphaContrastExponent:(float)arg1;
- (void)setAlphaGammaExponent:(float)arg1;
- (void)setAlphaGuidedFilterEps:(float)arg1;
- (void)setAlphaMattePixelBufferHeight:(unsigned long long)arg1;
- (void)setAlphaMattePixelBufferWidth:(unsigned long long)arg1;
- (void)setAlphaMaxLaplacian:(float)arg1;
- (void)setBackgroundDisparityStatsWindowSize:(int)arg1;
- (void)setBackgroundDisparityUpdateRate:(float)arg1;
- (void)setBackgroundSeparationLikelihoodHigh:(float)arg1;
- (void)setBackgroundSeparationLikelihoodLow:(float)arg1;
- (void)setCenterDeltaCanonicalDisparity:(float)arg1;
- (void)setCloseDisparityPercentile:(float)arg1;
- (void)setColorPixelBufferHeight:(unsigned long long)arg1;
- (void)setColorPixelBufferWidth:(unsigned long long)arg1;
- (void)setDeltaCanonicalDisparity:(float)arg1;
- (void)setDeltaDepth:(float)arg1;
- (void)setDepthPixelBufferMaxLeftOcclusionDisparityChange:(float)arg1;
- (void)setDepthPixelBufferMaxRightOcclusionDisparityChange:(float)arg1;
- (void)setDepthPixelBufferOffset:(float)arg1;
- (void)setDepthPixelBufferScale:(float)arg1;
- (void)setDepthPixelBufferXPadding:(int)arg1;
- (void)setDepthPixelBufferYPadding:(int)arg1;
- (void)setDepthQualityMetricFocalPlaneOffsetMeters:(float)arg1;
- (void)setDisparityFilterColorStd:(float)arg1;
- (void)setDisparityFilterUpdateRate:(float)arg1;
- (void)setDisparityPushingBackgroundToForegroundDisparityDifference:(int)arg1;
- (void)setDisparityStereoBaselineMeters:(float)arg1;
- (void)setDisparityStereoFocalLengthPixels:(float)arg1;
- (void)setDsCanonicalHighScale:(float)arg1;
- (void)setDsCanonicalHighThld:(float)arg1;
- (void)setDsCanonicalLowScale:(float)arg1;
- (void)setDsCanonicalLowThld:(float)arg1;
- (void)setFaceSizeRatioInFocus:(float)arg1;
- (void)setFocusThresholdHardness:(float)arg1;
- (void)setFocusUpdateRateFast:(float)arg1;
- (void)setFocusUpdateRateSlow:(float)arg1;
- (void)setForegroundPercentile:(float)arg1;
- (void)setGuidedFilterMinDistToDeweight:(float)arg1;
- (void)setGuidedFilterUnconfidentWeight:(float)arg1;
- (void)setInputDisparityPixelBufferHeight:(unsigned long long)arg1;
- (void)setInputDisparityPixelBufferWidth:(unsigned long long)arg1;
- (void)setInputToOutputDisparityPixelBufferRotation:(unsigned long long)arg1;
- (void)setInvalidDisparityRatioStatsWindowSize:(int)arg1;
- (void)setInvalidDisparityRatioUpdateRate:(float)arg1;
- (void)setMattingUpdateRate:(float)arg1;
- (void)setMattingUpdateRateFast:(float)arg1;
- (void)setMaxDeltaCanonicalDisparity:(float)arg1;
- (void)setMaxDisparityFillingDistFromForeground:(float)arg1;
- (void)setMaxDisparityFillingInconsistency:(float)arg1;
- (void)setMaxDistToPushDisparityEdgesFwd:(int)arg1;
- (void)setMaxDistToPushDisparityEdgesRev:(int)arg1;
- (void)setMinDeltaCanonicalDisparity:(float)arg1;
- (void)setModulateFocalRatio:(bool)arg1;
- (void)setOutputDisparityPixelBufferHeight:(unsigned long long)arg1;
- (void)setOutputDisparityPixelBufferWidth:(unsigned long long)arg1;
- (void)setReferenceDisparity:(float)arg1;
- (void)setRelightDisplayMode:(int)arg1;
- (void)setRelightMarkFaceCenter:(bool)arg1;
- (void)setRelightOverlayModel:(bool)arg1;
- (void)setRelightSkipAlpha:(bool)arg1;
- (void)setRenderingDisparityAtInfinity:(float)arg1;
- (void)setRenderingDisparityBlurRadius:(float)arg1;
- (void)setRenderingDisparityUpdateRate:(float)arg1;
- (void)setRenderingInvalidDisparityFillValue:(float)arg1;
- (void)setRenderingLensFocalLength:(float)arg1;
- (void)setSdofStateMachineIntensityIncrement:(float)arg1;
- (void)setSdofStateMachineMaxOrientationDifference:(double)arg1;
- (void)setStableBackgroundDisparitySumVariance:(float)arg1;
- (void)setStableInvalidDisparityRatio:(float)arg1;
- (void)setStageLightStageMachineMaxOrientationDifference:(double)arg1;
- (void)setStageLightStateMachineIntensityIncrement:(float)arg1;
- (void)setUnstableBackgroundDisparitySumVariance:(float)arg1;
- (void)setUnstableInvalidDisparityRatio:(float)arg1;
- (float)stableBackgroundDisparitySumVariance;
- (float)stableInvalidDisparityRatio;
- (double)stageLightStageMachineMaxOrientationDifference;
- (float)stageLightStateMachineIntensityIncrement;
- (float)unstableBackgroundDisparitySumVariance;
- (float)unstableInvalidDisparityRatio;
- (void)validate;
- (unsigned long long)videoPipelineDevice;

@end
