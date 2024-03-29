//
//  CalculatorAppDelegate.h
//  Calculator
//
//  Created by Антон on 10.01.11.
//  Copyright 2011 Штрих-М. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CalculatorViewController;

@interface CalculatorAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    CalculatorViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet CalculatorViewController *viewController;

@end

