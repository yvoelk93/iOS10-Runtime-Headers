/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOSupportedTileSets : PBCodable  {
    NSMutableArray *_tileSets;
}

@property(retain) NSMutableArray * tileSets;


- (id)tileSets;
- (id)tileSetAtIndex:(unsigned int)arg1;
- (void)clearTileSets;
- (unsigned int)tileSetsCount;
- (void)addTileSet:(id)arg1;
- (void)setTileSets:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end