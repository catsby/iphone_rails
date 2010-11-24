//
//  GoalsViewController.h
//  SaveUp
//
//  Created by Clint Shryock on 11/18/10.
//  Copyright 2010 Cramer Development. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GoalsViewController : UITableViewController {
	NSMutableArray *goals;
}

@property (nonatomic, retain) NSMutableArray *goals;

- (IBAction)refresh;
@end
