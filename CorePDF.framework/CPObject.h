/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPPage, CPObject, NSMutableArray, CPDocument;

@interface CPObject : NSObject <NSCopying> {
    CPObject *parent;
    NSMutableArray *children;
    CPDocument *document;
    CPPage *page;
    long zOrder;
}


- (id)nextSibling;
- (id)previousSibling;
- (void)remove;
- (void)removeAll;
- (id)lastChild;
- (id)firstChild;
- (BOOL)isEqual:(id)arg1;
- (void)performSelector:(SEL)arg1;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)count;
- (void)setDocument:(id)arg1;
- (id)document;
- (void)addChildren:(id)arg1;
- (void)setParent:(id)arg1;
- (id)childAtIndex:(unsigned int)arg1;
- (id)parent;
- (id)children;
- (void)add:(id)arg1;
- (void)remove:(id)arg1;
- (unsigned int)indexOf:(id)arg1;
- (void)map:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3;
- (id)takeChildren;
- (id)childrenOfClass:(Class)arg1;
- (void)disposeDescendants;
- (id)copyWithoutChildren;
- (id)copyAndSplitChildrenAtIndex:(unsigned int)arg1;
- (id)lastSibling;
- (id)firstSibling;
- (void)add:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeLastChild;
- (void)promoteChildren;
- (id)ancestorOfClass:(Class)arg1;
- (void)childrenOfClass:(Class)arg1 into:(id)arg2;
- (id)childrenNotOfClass:(Class)arg1;
- (void)map:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3 last:(BOOL)arg4;
- (void)mapSafely:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3;
- (void)map:(SEL)arg1 target:(id)arg2;
- (void)map:(SEL)arg1 target:(id)arg2 last:(BOOL)arg3;
- (id)descendantsOfClass:(Class)arg1 deep:(BOOL)arg2;
- (void)descendantsOfClass:(Class)arg1 to:(id)arg2;
- (id)descendantsOfClass:(Class)arg1;
- (id)shallowDescendantsOfClass:(Class)arg1;
- (id)descendantsOfClass:(Class)arg1 omitTraversing:(Class)arg2;
- (id)firstDescendantOfClass:(Class)arg1;
- (id)lastDescendantOfClass:(Class)arg1;
- (unsigned int)countOfFirstDescendantsOfClass:(Class)arg1;
- (void)accept:(id)arg1;
- (void)recomputeZOrder;
- (void)setZOrder:(long)arg1;
- (void)clearCachedInfo;
- (id)firstDescendantsOfClass:(Class)arg1;
- (void)updateZOrder:(long)arg1;
- (unsigned int)countOfClass:(Class)arg1;
- (void)addChildrenOf:(id)arg1;
- (long)zOrder;
- (void)removeFirstChild;
- (id)page;
- (void)setPage:(id)arg1;
- (int)depth;

@end