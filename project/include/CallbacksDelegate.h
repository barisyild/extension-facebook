#import <UIKit/UIKit.h>

@class CallbacksDelegate;

@interface SDLUIKitDelegate : NSObject <UIApplicationDelegate>
@end

@interface MyDelegate : SDLUIKitDelegate
@end

// Add a 'category' to the SDL app delegate class
@interface SDLUIKitDelegate (extra)
{
}
@end

@implementation SDLUIKitDelegate (extra)
+ (NSString *)getAppDelegateClassName {
    return @"MyDelegate";
}
@end