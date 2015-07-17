/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDCanvasSelection : TSKSelection <TSDCanvasSelection> {
    NSSet * mInfos;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int infoCount;
@property (nonatomic, readonly) NSSet *infos;
@property (nonatomic, readonly) BOOL isEmpty;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int unlockedInfoCount;
@property (nonatomic, readonly) NSSet *unlockedInfos;

+ (Class)archivedSelectionClass;
+ (id)emptySelection;

- (BOOL)containsKindOfClass:(Class)arg1;
- (BOOL)containsUnlockedKindOfClass:(Class)arg1;
- (id)copyExcludingInfo:(id)arg1;
- (id)copyIncludingInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (unsigned int)infoCount;
- (id)infos;
- (id)infosOfClass:(Class)arg1;
- (id)initWithArchive:(const struct CanvasSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct Reference {} *x6; }*)arg1 unarchiver:(id)arg2;
- (id)initWithInfos:(id)arg1;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (void)saveToArchive:(struct CanvasSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct Reference {} *x6; }*)arg1 archiver:(id)arg2;
- (unsigned int)unlockedInfoCount;
- (id)unlockedInfos;

@end