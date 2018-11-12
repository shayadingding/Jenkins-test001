//
//  AppDelegate.h
//  TestOC
//
//  Created by ye.yarong on 2018/11/9.
//  Copyright © 2018年 com.ztesoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

