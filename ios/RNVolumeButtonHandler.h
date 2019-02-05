
//#if __has_include("RCTBridgeModule.h")
//#import "RCTBridgeModule.h"
//#else
//#import <React/RCTBridgeModule.h>
//#endif
//
//#if __has_include("RCTEventEmitter.h")
//#import "RCTEventEmitter.h"
//#else
//#import <React/RCTEventEmitter.h>
//#endif

#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>

#import "JPSVolumeButtonHandler.h"

@interface RNVolumeButtonHandler : RCTEventEmitter <RCTBridgeModule>

@property (nonatomic, strong) JPSVolumeButtonHandler *handler;

@end