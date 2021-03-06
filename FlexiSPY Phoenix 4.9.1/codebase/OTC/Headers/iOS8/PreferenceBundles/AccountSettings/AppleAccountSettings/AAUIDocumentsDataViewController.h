/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

//#import <AccountsUI/ACUIViewController.h>
//#import <AppleAccountSettings/AAUICloudKitUpgradeViewControllerDelegate.h>

@class PSSpecifier, NSMutableArray, NSArray, AAUIServiceAccessCache, ACAccount;

@interface AAUIDocumentsDataViewController : NSObject //ACUIViewController <AAUICloudKitUpgradeViewControllerDelegate>
{

	PSSpecifier* _docsAndDataSpecifier;
	NSMutableArray* _appSpecifiers;
	NSArray* _cellularSpecifiers;
	NSArray* _logsSpecifiers;
	AAUIServiceAccessCache* _accessCache;
	ACAccount* _appleAccount;
	BOOL _isFirstSetup;
	id _uiApplicationDidBecomeActiveObserver;

}
+(id)_sanitizeForDiagnoseName:(id)arg1 ;
-(id)_createSpecifiersForDiagnostics;
-(id)_documentsAndDataEnabled:(id)arg1 ;
-(id)_specifierForCloudKit;
-(id)_useCellular:(id)arg1 ;
-(id)_numberOfAppsUsingCloudKit;
-(id)_diagnosePathForBR;
-(void)diagnoseDocumentsAndData:(id)arg1 ;
-(id)_valueForCloudKitSpecifier:(id)arg1 ;
-(id)_appAccessGrantedForSpecifier:(id)arg1 ;
-(id)_collectBRLogs;
-(id)_appleAccount;
-(void)_setDocumentsAndDataEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_createSpecifiersForCellularSwitchCell;
-(id)_createSpecifierForUpgradeButton;
-(void)_setAppAccessGranted:(id)arg1 forSpecifier:(id)arg2 ;
-(void)_loadCloudKitSettingsBundleIfNeeded;
-(void)_reloadSpecifiersThatDependOnDocumentsAndDataSwitchState;
-(void)cloudKitUpgradeViewControllerDidCancel:(id)arg1 ;
-(void)cloudKitUpgradeViewControllerDidSucceed:(id)arg1 ;
-(void)_setDocumentsAndDataEnabled:(BOOL)arg1 ;
-(id)_appSpecifierWithBundleID:(id)arg1 ;
-(void)_upgradeButtonWasTapped:(id)arg1 ;
-(void)_setUseCellular:(id)arg1 forSpecifier:(id)arg2 ;
-(void)_reloadAppleAccount;
-(id)_appSpecifiersForTCCServices;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2 ;
-(id)specifiers;
@end

