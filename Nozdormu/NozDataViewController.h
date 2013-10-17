//
//  NozDataViewController.h
//  Nozdormu
//
//  Created by tonic on 13-10-17.
//  Copyright (c) 2013年 tonic. All rights reserved.
//

#import <UIKit/UIKit.h>

#define CHOOSE_SHEET_TAG 255

@interface NozDataViewController : UIViewController<UIActionSheetDelegate,
        UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;


@end
