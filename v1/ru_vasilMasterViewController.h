//
//  ru_vasilMasterViewController.h
//  v1
//
//  Created by Vasil on 16.03.14.
//  Copyright (c) 2014 Vasil. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ru_vasilDetailViewController;

#import <CoreData/CoreData.h>

@interface ru_vasilMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) ru_vasilDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
