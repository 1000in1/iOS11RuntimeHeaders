/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROBrailleKeyboardKey : SCROBrailleKey {
    unsigned int  _keyCode;
    NSString * _keyString;
    unsigned int  _modifiers;
    unsigned int  _virtualKeyCode;
}

@property (nonatomic) unsigned int keyCode;
@property (nonatomic, retain) NSString *keyString;
@property (nonatomic) unsigned int modifiers;
@property (nonatomic) unsigned int virtualKeyCode;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)keyCode;
- (id)keyString;
- (unsigned int)modifiers;
- (void)setKeyCode:(unsigned int)arg1;
- (void)setKeyString:(id)arg1;
- (void)setModifiers:(unsigned int)arg1;
- (void)setVirtualKeyCode:(unsigned int)arg1;
- (unsigned int)virtualKeyCode;

@end
