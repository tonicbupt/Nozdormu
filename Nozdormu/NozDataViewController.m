//
//  NozDataViewController.m
//  Nozdormu
//
//  Created by tonic on 13-10-17.
//  Copyright (c) 2013年 tonic. All rights reserved.
//

#import "NozDataViewController.h"

@interface NozDataViewController ()

@end

@implementation NozDataViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    self.dataLabel.text = [self.dataObject description];
}

@end
