/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBBundleInfo : NSObject <BSDescriptionProviding> {
    NSString * _bundleIdentifier;
    NSString * _bundleType;
    NSURL * _bundleURL;
    NSString * _bundleVersion;
    NSUUID * _cacheGUID;
    NSString * _displayName;
    unsigned long long  _sequenceNumber;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *bundleType;
@property (nonatomic, readonly, retain) NSURL *bundleURL;
@property (nonatomic, readonly, copy) NSString *bundleVersion;
@property (nonatomic, readonly, copy) NSUUID *cacheGUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long sequenceNumber;
@property (readonly) Class superclass;

- (id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2;
- (id)_initWithBundleProxy:(id)arg1 bundleIdentifier:(id)arg2 url:(id)arg3;
- (id)_initWithBundleProxy:(id)arg1 overrideURL:(id)arg2;
- (id)bundleIdentifier;
- (id)bundleType;
- (id)bundleURL;
- (id)bundleVersion;
- (id)cacheGUID;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displayName;
- (id)init;
- (unsigned long long)sequenceNumber;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end