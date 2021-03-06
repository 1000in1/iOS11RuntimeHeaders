/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDBrowsableContentTableViewController : UIViewController <MCDErrorViewDelegate, MCDPCContainerDelegate, UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate> {
    UIView * _MCD_tableView;
    MCDPCContainer * _container;
    long long  _count;
    bool  _currentlyPlayingApp;
    _UIFilteredDataSource * _dataSource;
    MPWeakTimer * _delayTimer;
    bool  _didPushToNowPlayingAtLaunch;
    AVExternalDevice * _externalDevice;
    bool  _hasCarScreen;
    bool  _hasNoBrowsableContent;
    bool  _hasTabbedBrowsing;
    bool  _limited;
    MPWeakTimer * _loadingTimer;
    MCDNowPlayingButton * _nowPlayingButton;
    UIView * _placeholderView;
    NSIndexPath * _reselectIndexPath;
    NSIndexPath * _selectedIndexPath;
    NSIndexPath * _selectedNextIndexPath;
    _MCDBrowsableContentTableViewPreloader * _selectionPreloader;
    NSObject<OS_dispatch_queue> * _serialQueue;
    UITableView * _tableView;
    bool  _visible;
}

@property (nonatomic, readonly) MCDPCContainer *container;
@property (nonatomic) bool currentlyPlayingApp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *placeholderView;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (readonly) Class superclass;
@property (getter=isVisible, nonatomic) bool visible;

- (void).cxx_destruct;
- (void)_clearLoadingActivity;
- (void)_clearTableViewSelectionAnimated:(bool)arg1;
- (void)_configureCell:(id)arg1 forIndexPath:(id)arg2;
- (void)_displayLoadingActivity;
- (void)_limitedUIChanged:(id)arg1;
- (void)_nowPlayingButtonTapped:(id)arg1;
- (void)_nowPlayingDidChange:(id)arg1;
- (void)_replacePlaceholderViewWithView:(id)arg1;
- (void)_showLoadingScreen;
- (void)_showTimeoutScreen;
- (void)_updateNowPlayingButtonVisibility;
- (id)container;
- (void)container:(id)arg1 didInvalidateIndicies:(id)arg2;
- (void)containerDidChangeCount:(id)arg1;
- (void)containerDidInvalidateRootItem:(id)arg1;
- (id)contentScrollView;
- (bool)currentlyPlayingApp;
- (void)dealloc;
- (id)description;
- (void)errorViewDidTapButton:(id)arg1;
- (id)initWithContainer:(id)arg1;
- (id)initWithContainer:(id)arg1 tabbedBrowsing:(bool)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isVisible;
- (id)placeholderView;
- (id)preferredFocusEnvironments;
- (void)reloadTable;
- (void)reloadWithCompletion:(id /* block */)arg1;
- (id)selectedIndexPath;
- (void)setCurrentlyPlayingApp:(bool)arg1;
- (void)setPlaceholderView:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (void)setVisible:(bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
