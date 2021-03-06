/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDSStyle;

@interface GQDTCell : NSObject  {
    unsigned short mColumnIndex;
    unsigned short mRowIndex;
    unsigned short mColumnSpan;
    unsigned short mRowSpan;
    GQDSStyle *mStyle;
}


- (int)readAttributesForBaseCell:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (int)readBaseAttributesForBaseCell:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (void)incrementColumnSpan;
- (int)readAttributesForBaseTabularCell:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (void)dealloc;
- (id)cellStyle;
- (unsigned short)rowIndex;
- (unsigned short)columnIndex;
- (unsigned short)rowSpan;
- (void)setCellStyle:(id)arg1;
- (unsigned short)columnSpan;

@end
