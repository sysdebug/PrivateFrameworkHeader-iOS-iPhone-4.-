/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPRegion;

@interface CPRegion : CPChunk  {
    BOOL isTextRegion;
    BOOL isImageRegion;
    BOOL isCompoundShape;
    CPRegion *nextRegion;
    int order;
    id link;
}


- (BOOL)isRotated;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setOrder:(int)arg1;
- (int)order;
- (BOOL)isCompoundShape;
- (BOOL)isBodyZone;
- (void)setIsCompoundShape:(BOOL)arg1;
- (BOOL)isZone;
- (void)setNextRegion:(id)arg1;
- (id)nextRegion;
- (BOOL)isParagraphRegion;
- (BOOL)isListItemRegion;
- (BOOL)isTextRegion;
- (void)setIsTextRegion:(BOOL)arg1;
- (BOOL)isTableCellRegion;
- (BOOL)isBoxRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isRowRegion;
- (void)setIsImageRegion:(BOOL)arg1;
- (BOOL)isImageRegion;
- (BOOL)isShapeRegion;
- (BOOL)isIndivisible;
- (void)accept:(id)arg1;
- (id)link;
- (void)setLink:(id)arg1;

@end
