//
//  DetailViewController.h
//  11
//
//  Created by louis on 14/11/26.
//  Copyright (c) 2014年 louis. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

