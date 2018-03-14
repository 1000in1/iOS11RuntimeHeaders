/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreCacheFetchRecordMappingResult : HMFObject {
    HMDBackingStoreCacheGroup * _group;
    NSString * _recordName;
    HMDBackingStoreCacheShareGroup * _share;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) HMDBackingStoreCacheGroup *group;
@property (nonatomic, readonly) NSString *recordName;
@property (nonatomic, readonly) HMDBackingStoreCacheShareGroup *share;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (id)description;
- (id)group;
- (id)initWithGroup:(id)arg1 share:(id)arg2 recordName:(id)arg3 uuid:(id)arg4;
- (id)recordName;
- (id)share;
- (id)uuid;

@end