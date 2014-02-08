//
//  S10AppDelegate.h
//  supersekiguchi-ten
//
//  Created by 関口徹 on 2014/02/08.
//  Copyright (c) 2014年 関口徹. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface S10AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
