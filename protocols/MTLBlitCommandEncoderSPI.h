/* Generated by RuntimeBrowser.
 */

@protocol MTLBlitCommandEncoderSPI <MTLBlitCommandEncoder>

@required

- (void)copyFromTexture:(id <MTLTexture>)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toTexture:(id <MTLTexture>)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg9 options:(unsigned long long)arg10;

@end
