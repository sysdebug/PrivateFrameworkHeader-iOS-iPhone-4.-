/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSHashTable, NSMutableSet, VMURangeArray, NSMapTable;

@interface VMUObjectIdentifier : NSObject  {
    unsigned int _task;
    struct _CSTypeRef { 
        unsigned int _opaque_1; 
        unsigned int _opaque_2; 
    } _symbolicator;
    NSMapTable *_isaToClassInfo;
    NSMapTable *_cfTypeIDtoClassInfo;
    NSHashTable *_classAddresses;
    NSHashTable *_objcRuntimeMallocBlocksHash;
    NSMutableSet *_objcRuntimeMallocBlocks;
    unsigned int _cfTypeCount;
    unsigned int _objcClassCount;
    unsigned int _cPlusPlusClassCount;
    NSHashTable *_invalidPointers;
    VMURangeArray *_targetProcessVMranges;
    int peeksAtRemoteObjectIsa;
}


- (id)initWithTask:(unsigned int)arg1;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(id)arg2;
- (unsigned int)CFTypeCount;
- (unsigned int)ObjCclassCount;
- (unsigned int)CPlusPlusClassCount;
- (id)objcRuntimeMallocBlocksHash;
- (id)objcRuntimeMallocBlocks;
- (id)readClassNameString:(unsigned int)arg1;
- (BOOL)isValidRemotePointer:(unsigned int)arg1;
- (id)classInfoForIsaPointer:(unsigned int)arg1;
- (id)classInfoForCFType:(struct __CFRuntimeBase { unsigned int x1; unsigned char x2[4]; }*)arg1;
- (id)classInfoForObject:(unsigned int)arg1;
- (void)findCFTypes;
- (void)findObjCclasses;
- (void)findTargetProcessVMranges;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })vmRegionRangeForAddress:(unsigned long long)arg1;
- (void)dealloc;

@end
