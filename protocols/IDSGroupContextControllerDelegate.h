/* Generated by RuntimeBrowser.
 */

@protocol IDSGroupContextControllerDelegate <NSObject>

@required

- (NSDictionary *)groupContextController:(IDSGroupContextController *)arg1 accountsForAlises:(NSSet *)arg2;
- (void)groupContextController:(IDSGroupContextController *)arg1 didCreateGroup:(ENGroup *)arg2;
- (void)identitiesForGroupContextController:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: IDSGroupContextController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, IDSDeviceIdentity *, NSError *, void*

@end