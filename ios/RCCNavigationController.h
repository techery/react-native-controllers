#import <UIKit/UIKit.h>
#import "RCTBridge.h"
#import "RCCRotatable.h"

@interface RCCNavigationController : UINavigationController <RCCRotatable>

- (instancetype)initWithProps:(NSDictionary *)props children:(NSArray *)children globalProps:(NSDictionary*)globalProps bridge:(RCTBridge *)bridge;
- (void)performAction:(NSString*)performAction actionParams:(NSDictionary*)actionParams bridge:(RCTBridge *)bridge;

@end
