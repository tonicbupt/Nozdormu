//
//  NozModelController.h
//  Nozdormu
//
//  Created by tonic on 13-10-17.
//  Copyright (c) 2013年 tonic. All rights reserved.
//

#import <UIKit/UIKit.h>

@class NozDataViewController;

@interface NozModelController : NSObject <UIPageViewControllerDataSource>

- (NozDataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(NozDataViewController *)viewController;

@end
