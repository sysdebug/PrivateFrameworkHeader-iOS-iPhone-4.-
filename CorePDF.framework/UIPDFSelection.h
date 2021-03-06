/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class UIPDFPage;

@interface UIPDFSelection : NSObject  {
    UIPDFPage *_page;
    struct CGPDFSelection { } *_cgSelection;
    BOOL _dirty;
    struct __CFString { } *_string;
}


- (id)string;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (void)dealloc;
- (BOOL)isEmpty;
- (id)description;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (struct CGPDFSelection { }*)CGSelection;
- (id)initWithPage:(id)arg1 cgSelection:(struct CGPDFSelection { }*)arg2;
- (unsigned int)numberOfRectangles;
- (id)containingTextLine;
- (BOOL)isWord;
- (void)getBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg2 index:(unsigned int)arg3;
- (void)extendToParagraph;
- (id)page;

@end
