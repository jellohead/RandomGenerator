//
//  ViewController.h
//  RandomGenerator
//
//  Created by Pat Escalona on 10/23/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    
    IBOutlet UILabel *resultLabel;
}

@property (retain, nonatomic) UILabel *resultLabel;

-(IBAction)generateNumber:(id)sender;

@end
