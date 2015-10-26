
#import "QQMusicDumper.h"
#import "CrashReporter/CrashReporter.h"
#import "QQUser.h"
%hook QQMusicAppDelegate
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2{
    BOOL ret=%orig;
    UIAlertView* UA=[[UIAlertView alloc] initWithTitle:@"Alert" message:@"QQ Music Lyrics Dumper By Naville" delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil];
    [UA show];
    [UA release];
    PLCrashReporter *crashReporter = [PLCrashReporter sharedReporter];
 NSError *error;

  // Check if we previously crashed
    if ([crashReporter hasPendingCrashReport]==TRUE){
        NSLog(@"Exist Crash Report");
            [self handleCrashReport];
    }
    else{
                NSLog(@"Exist Crash Report");
        
    }
    // Enable the Crash Reporter
    if (![crashReporter enableCrashReporterAndReturnError: &error]){
               NSLog(@"Warning: Could not enable crash reporter: %@", error);
            
        }
    
    
       [QQMusicDumper Dump];
    return ret;
}
%new
- (void)handleCrashReport {
    PLCrashReporter crashReporter = [PLCrashReporter sharedReporter];
    NSData crashData;
    NSError error;
    
    // Try loading the crash report
    crashData = [crashReporter loadPendingCrashReportDataAndReturnError: &error];
    if (crashData == nil) {
        NSLog(@"Could not load crash report: %@", error);
        goto finish;
    }
    
    // We could send the report from here, but we'll just print out
    // some debugging info instead
    PLCrashReport report = [[[PLCrashReport alloc] initWithData: crashData error: &error] autorelease];
    if (report == nil) {
        NSLog(@"Could not parse crash report");
        goto finish;
    }
    
    NSLog(@"Crashed on %@", report.systemInfo.timestamp);
    NSLog(@"Crashed with signal %@ (code %@, address=0x%" PRIx64 ")", report.signalInfo.name,
          report.signalInfo.code, report.signalInfo.address);
    
    // Purge the report
finish:
    [crashReporter purgePendingCrashReport];
    return;
}
%end

%hook UserSession
- (void)onLoginSuccess{
    %orig;
    [MSHookIvar<QQUser*>(self,"_qqUser") setMVipLevel:10];
    [MSHookIvar<QQUser*>(self,"_qqUser") setMVip:YES];
    
    
}
%end
//%hook DownLoadingViewController
