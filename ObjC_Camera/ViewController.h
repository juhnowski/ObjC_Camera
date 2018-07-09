//
//  ViewController.h
//  ObjC_Camera
//
//  Created by Илья Юхновский on 10.07.2018.
//  Copyright © 2018 Илья Юхновский. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate>{
    UIImagePickerController *picker;
    UIImage *image;
}

- (IBAction)TakePhoto:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *ChoosePhoto;
@property (weak, nonatomic) IBOutlet UIImageView *ImageView;
- (IBAction)ChoosePhotoAction:(id)sender;


@end

