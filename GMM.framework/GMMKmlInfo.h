/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMDocumentInfo;

@interface GMMKmlInfo : PBCodable  {
    GMMDocumentInfo *_sourceDocument;
    BOOL _isUserCreated;
    BOOL _hasIsUserCreated;
}

@property(readonly) BOOL hasSourceDocument;
@property(readonly) BOOL hasIsUserCreated;
@property BOOL isUserCreated;
@property(retain) GMMDocumentInfo * sourceDocument;


- (id)dictionaryRepresentation;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)hasSourceDocument;
- (void)setIsUserCreated:(BOOL)arg1;
- (void)setSourceDocument:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)sourceDocument;
- (BOOL)hasIsUserCreated;
- (BOOL)isUserCreated;

@end