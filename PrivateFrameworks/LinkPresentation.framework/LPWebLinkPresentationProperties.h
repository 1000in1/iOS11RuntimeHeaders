/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPWebLinkPresentationProperties : NSObject <LPLinkPresentationPropertyProvider> {
    UIColor * _backgroundColor;
    LPCaptionBarPresentationProperties * _captionBar;
    LPiTunesPlaybackInformation * _iTunesPlaybackInformation;
    LPImage * _image;
    LPCaptionBarPresentationProperties * _mediaBottomCaptionBar;
    LPCaptionBarPresentationProperties * _mediaTopCaptionBar;
    bool  _preliminary;
    NSString * _quotedText;
    long long  _style;
    LPVideo * _video;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) LPCaptionBarPresentationProperties *captionBar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LPiTunesPlaybackInformation *iTunesPlaybackInformation;
@property (nonatomic, retain) LPImage *image;
@property (nonatomic, retain) LPCaptionBarPresentationProperties *mediaBottomCaptionBar;
@property (nonatomic, retain) LPCaptionBarPresentationProperties *mediaTopCaptionBar;
@property (getter=isPreliminary, nonatomic) bool preliminary;
@property (nonatomic, copy) NSString *quotedText;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic, retain) LPVideo *video;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)captionBar;
- (id)iTunesPlaybackInformation;
- (id)image;
- (bool)isPreliminary;
- (id)mediaBottomCaptionBar;
- (id)mediaTopCaptionBar;
- (id)quotedText;
- (void)setBackgroundColor:(id)arg1;
- (void)setCaptionBar:(id)arg1;
- (void)setITunesPlaybackInformation:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setMediaBottomCaptionBar:(id)arg1;
- (void)setMediaTopCaptionBar:(id)arg1;
- (void)setPreliminary:(bool)arg1;
- (void)setQuotedText:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setVideo:(id)arg1;
- (long long)style;
- (id)video;

@end