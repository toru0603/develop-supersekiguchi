//
//  S10DetailViewController.h
//  supersekiguchi-ten
//
//  Created by 関口徹 on 2014/02/08.
//  Copyright (c) 2014年 関口徹. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface S10DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
