//
//  DetailViewController.h
//  testapp
//
//  Created by CL on 07/05/16.
//  Copyright © 2016 CL. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

