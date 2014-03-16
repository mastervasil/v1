//
//  ru_vasilDetailViewController.h
//  v1
//
//  Created by Vasil on 16.03.14.
//  Copyright (c) 2014 Vasil. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ru_vasilDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
