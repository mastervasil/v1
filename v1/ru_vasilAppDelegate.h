//
//  ru_vasilAppDelegate.h
//  v1
//
//  Created by Vasil on 16.03.14.
//  Copyright (c) 2014 Vasil. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ru_vasilAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
