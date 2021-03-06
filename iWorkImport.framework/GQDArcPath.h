/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDArcPath : GQDPath  {
    struct CGSize { 
        float width; 
        float height; 
    } mSize;
    double mHeadAngle;
    double mArcWidth;
    double mArrowWidth;
    double mArrowLength;
}


- (double)arrowLength;
- (double)arrowWidth;
- (double)arcWidth;
- (double)headAngle;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (struct CGPath { }*)createBezierPath;
- (struct CGSize { float x1; float x2; })size;

@end
