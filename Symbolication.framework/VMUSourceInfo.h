/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSString;

@interface VMUSourceInfo : VMUAddressRange <NSCopying> {
    NSString *_path;
    unsigned int _lineNumber;
    unsigned int _fileOffset;
}

+ (id)sourceInfoWithPath:(id)arg1 addressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg2 lineNumber:(unsigned int)arg3 fileOffset:(unsigned int)arg4;

- (id)initWithPath:(id)arg1 addressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg2 lineNumber:(unsigned int)arg3 fileOffset:(unsigned int)arg4;
- (BOOL)isEqualToSourceInfo:(id)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })addressRange;
- (unsigned int)fileOffset;
- (unsigned int)lineNumber;
- (int)compare:(id)arg1;
- (id)path;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)fileName;

@end