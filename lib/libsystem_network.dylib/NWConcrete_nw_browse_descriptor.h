/* Generated by RuntimeBrowser
   Image: /usr/lib/system/libsystem_network.dylib
 */

@interface NWConcrete_nw_browse_descriptor : NSObject <OS_nw_browse_descriptor> {
    char * bonjour_domain;
    char * bonjour_type;
    id /* block */  browse_block;
    NSObject<OS_dispatch_data> * custom_data;
    NSObject<OS_nw_interface> * interface;
    int  type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
