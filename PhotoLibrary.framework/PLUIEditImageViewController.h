/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLUIEditImageViewController : PLUIImageViewController  {
    id _delegate;
    int _saveOptions;
}

@property id delegate;


- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (int)saveOptions;
- (void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2;
- (id)imageTile;
- (int)imageFormat;
- (unsigned int)_contentAutoresizingMask;
- (unsigned int)_tileAutoresizingMask;
- (id)photo;
- (void)cropOverlayWasCancelled:(id)arg1;
- (void)cropOverlayWasOKed:(id)arg1;
- (id)initWithPhoto:(id)arg1;
- (void)setImageSavingOptions:(int)arg1;

@end