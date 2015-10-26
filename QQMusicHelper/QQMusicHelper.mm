#line 1 "/Users/Naville/Desktop/mac/Development/Completed/QQMusic/QQMusicHelper/QQMusicHelper.xm"

#import "QQMusicDumper.h"

#include <logos/logos.h>
#include <substrate.h>
@class QQMusicAppDelegate; 
static BOOL (*_logos_orig$_ungrouped$QQMusicAppDelegate$application$didFinishLaunchingWithOptions$)(QQMusicAppDelegate*, SEL, id, id); static BOOL _logos_method$_ungrouped$QQMusicAppDelegate$application$didFinishLaunchingWithOptions$(QQMusicAppDelegate*, SEL, id, id); 

#line 4 "/Users/Naville/Desktop/mac/Development/Completed/QQMusic/QQMusicHelper/QQMusicHelper.xm"

static BOOL _logos_method$_ungrouped$QQMusicAppDelegate$application$didFinishLaunchingWithOptions$(QQMusicAppDelegate* self, SEL _cmd, id arg1, id arg2){
    BOOL ret=_logos_orig$_ungrouped$QQMusicAppDelegate$application$didFinishLaunchingWithOptions$(self, _cmd, arg1, arg2);
    if([NSThread isMainThread]){
        NSLog(@"狗神在主线程没有女朋友");
    }
    else{
        NSLog(@"狗神不在主线程也没有女朋友");
        
    }
    
    [QQMusicDumper Dump];
      
 
    return ret;
}























static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$QQMusicAppDelegate = objc_getClass("QQMusicAppDelegate"); MSHookMessageEx(_logos_class$_ungrouped$QQMusicAppDelegate, @selector(application:didFinishLaunchingWithOptions:), (IMP)&_logos_method$_ungrouped$QQMusicAppDelegate$application$didFinishLaunchingWithOptions$, (IMP*)&_logos_orig$_ungrouped$QQMusicAppDelegate$application$didFinishLaunchingWithOptions$);} }
#line 43 "/Users/Naville/Desktop/mac/Development/Completed/QQMusic/QQMusicHelper/QQMusicHelper.xm"
