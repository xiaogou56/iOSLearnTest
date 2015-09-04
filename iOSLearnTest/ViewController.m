//
//  ViewController.m
//  iOSLearnTest
//
//  Created by test on 15/9/4.
//  Copyright © 2015年 wayne. All rights reserved.
//

#import "ViewController.h"
#import "CA.h"
#import "CA+propertyTest.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    CA *oa = [[CA alloc] init];
    [oa setInteA:1];
    [oa setInteB:2];
    
    // 在xcode7 beta4上，xcode能够智能提示出setInteC方法，但运行时会崩溃。
    //[oa setInteC:3];

    
    [oa print];
    //NSLog(@"%ld", [oa inteC]);
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
