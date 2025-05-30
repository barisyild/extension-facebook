#import <UIKit/UIKit.h>

@class CallbacksDelegate;

@interface CallbacksDelegate : NSObject <UIApplicationDelegate>

@end

@interface NMEAppDelegate : NSObject <UIApplicationDelegate>
@end

@interface NMEAppDelegate (CallbacksDelegate)
@end