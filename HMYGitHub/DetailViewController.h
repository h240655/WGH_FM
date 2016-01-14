//
//  DetailViewController.h
//  HMYGitHub
//
//  Created by 韩明雨 on 16/1/14.
//  Copyright © 2016年 韩明雨. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

