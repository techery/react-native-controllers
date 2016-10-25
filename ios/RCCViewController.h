#import <UIKit/UIKit.h>
#import "RCTBridge.h"
#import "RCCRotatable.h"
#import "RCCNotificationsPresenter.h"

@interface RCCViewController : UIViewController <RCCRotatable, RCCNotificationsPresenter>

@property (nonatomic) NSMutableDictionary *navigatorStyle;
@property (nonatomic) BOOL navBarHidden;

+ (UIViewController*)controllerWithLayout:(NSDictionary *)layout globalProps:(NSDictionary *)globalProps bridge:(RCTBridge *)bridge;

- (instancetype)initWithProps:(NSDictionary *)props children:(NSArray *)children globalProps:(NSDictionary *)globalProps bridge:(RCTBridge *)bridge;
- (instancetype)initWithComponent:(NSString *)component passProps:(NSDictionary *)passProps navigatorStyle:(NSDictionary*)navigatorStyle globalProps:(NSDictionary *)globalProps bridge:(RCTBridge *)bridge;
- (void)setStyleOnAppear;
- (void)setStyleOnInit;
- (void)setNavBarVisibilityChange:(BOOL)animated;

@end
