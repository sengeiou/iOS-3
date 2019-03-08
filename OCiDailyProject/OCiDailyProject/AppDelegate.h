//
//  AppDelegate.h
//  OCiDailyProject
//
//  Created by Hellen on 2019-01-28.
//  Copyright © 2019 Six. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end
