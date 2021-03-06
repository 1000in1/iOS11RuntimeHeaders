/* Generated by RuntimeBrowser.
 */

@protocol MPSCNNConvolutionDataSource <NSObject>

@required

- (float*)biasTerms;
- (unsigned int)dataType;
- (MPSCNNConvolutionDescriptor *)descriptor;
- (NSString *)label;
- (bool)load;
- (void)purge;
- (void*)weights;

@optional

- (float*)lookupTableForUInt8Kernel;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)rangesForUInt8Kernel;

@end
