//
//  SaveUpAppDelegate.h
//  SaveUp
//
//  Created by Clint Shryock on 11/18/10.
//  Copyright 2010 Cramer Development. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SaveUpAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end

