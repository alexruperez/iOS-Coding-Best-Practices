//
//  MyAppDelegate.h
//  MyApp
//
//  Created by alexruperez on 31/05/13.
//  Copyright (c) 2013 alexruperez. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
