/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPXOneUpPresentationImplementation : NSObject <PUOneUpPresentationHelperAssetDisplayDelegate, PUOneUpPresentationHelperDelegate> {
    PUOneUpPresentationHelper * __helper;
    PXOneUpPresentation * __oneUpPresentation;
}

@property (nonatomic, readonly) PUOneUpPresentationHelper *_helper;
@property (nonatomic, readonly) PXOneUpPresentation *_oneUpPresentation;
@property (nonatomic, readonly) bool canStart;
@property (nonatomic, readonly) bool canStop;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)implementationForOneUpPresentation:(id)arg1;

- (void).cxx_destruct;
- (id)_helper;
- (id)_initWithOneUpPresentation:(id)arg1;
- (id)_oneUpPresentation;
- (bool)canStart;
- (bool)canStop;
- (void)commitPreviewViewController:(id)arg1;
- (void)didDismissPreviewViewController:(id)arg1 committing:(bool)arg2;
- (bool)handlePresentingPinchGestureRecognizer:(id)arg1;
- (id)init;
- (void)invalidatePresentingGeometry;
- (id)oneUpPresentationHelper:(id)arg1 currentImageForAssetReference:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })oneUpPresentationHelper:(id)arg1 rectForAssetReference:(id)arg2 cropInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg3 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (void)oneUpPresentationHelper:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (void)oneUpPresentationHelper:(id)arg1 shouldHideAssetReferences:(id)arg2;
- (bool)oneUpPresentationHelperShouldAutoPlay:(id)arg1;
- (id)oneUpPresentationHelperViewController:(id)arg1;
- (void)presentingViewControllerViewDidAppear:(bool)arg1;
- (void)presentingViewControllerViewDidDisappear:(bool)arg1;
- (void)presentingViewControllerViewWillAppear:(bool)arg1;
- (void)presentingViewControllerViewWillDisappear:(bool)arg1;
- (id)previewViewControllerAllowingActions:(bool)arg1;
- (bool)startAnimated:(bool)arg1 interactiveMode:(long long)arg2;
- (void)stopAnimated:(bool)arg1;

@end