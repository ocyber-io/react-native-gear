
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNGearSpec.h"

@interface Gear : NSObject <NativeGearSpec>
#else
#import <React/RCTBridgeModule.h>

@interface Gear : NSObject <RCTBridgeModule>
#endif

@end
