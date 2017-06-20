/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPhoto : PBCodable <NSCopying> {
    NSString * _photoId;
    NSMutableArray * _photoVersions;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasPhotoId;
@property (nonatomic, retain) NSString *photoId;
@property (nonatomic, retain) NSMutableArray *photoVersions;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)photoVersionType;
+ (id)photosForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (void)addPhotoVersion:(id)arg1;
- (id)bestURL;
- (void)clearPhotoVersions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPhotoId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)photoId;
- (id)photoVersionAtIndex:(unsigned long long)arg1;
- (id)photoVersions;
- (unsigned long long)photoVersionsCount;
- (bool)readFrom:(id)arg1;
- (void)setPhotoId:(id)arg1;
- (void)setPhotoVersions:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end