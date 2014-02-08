//
//  S10MasterViewController.h
//  supersekiguchi-ten
//
//  Created by 関口徹 on 2014/02/08.
//  Copyright (c) 2014年 関口徹. All rights reserved.
//

#import <UIKit/UIKit.h>

@class S10DetailViewController;

#import <CoreData/CoreData.h>

@interface S10MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) S10DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
