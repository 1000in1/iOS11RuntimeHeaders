/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCSessionMessageTopic : NSObject {
    bool  allowConcurrent;
    NSArray * associatedStrings;
    struct tagHANDLE { int x1; } * handle;
    NSObject<OS_dispatch_queue> * inMessageQueue;
    bool  isSendingEnabled;
    long long  latestOutgoingMessageIndex;
    long long  latestReceivedTopicMessageNumber;
    NSObject<OS_dispatch_queue> * outMessageQueue;
    unsigned int  p2pID;
    id /* block */  receiveBlock;
    bool  shouldEncodeTopicKeyInMessage;
    NSString * topicKey;
    NSString * topicPrefix;
}

@property (setter=setIsSendingEnabled:, nonatomic) bool isSendingEnabled;
@property (readonly) NSString *topicKey;

- (void)dealloc;
- (id)initWithTopicKey:(id)arg1 strings:(id)arg2 allowConcurrent:(bool)arg3 receiveHandler:(id /* block */)arg4;
- (bool)isSendingEnabled;
- (bool)isStringAssociated:(id)arg1;
- (void)passMessage:(id)arg1 sequence:(int)arg2;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 withSequence:(long long)arg2 numRetries:(long long)arg3;
- (void)setIsSendingEnabled:(bool)arg1;
- (void)setP2PID:(unsigned int)arg1;
- (id)topicKey;

@end
