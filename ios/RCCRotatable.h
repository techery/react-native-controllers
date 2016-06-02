//
//  RCCRotatable.h
//  ReactNativeControllers
//
//  Created by Serhij Korochanskyj on 6/2/16.
//  Copyright © 2016 artal. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol RCCRotatable <NSObject>
@property (nonatomic) BOOL rcc_shouldAutorotate;
@property (nonatomic) UIInterfaceOrientation rcc_preferedInterfaceOrientation;
@property (nonatomic) UIInterfaceOrientationMask rcc_supportedInterfaceOrientations;
@end
