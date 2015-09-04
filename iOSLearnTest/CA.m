//
//  CA.m
//  iOSLearnTest
//
//  Created by test on 15/9/4.
//  Copyright © 2015年 wayne. All rights reserved.
//

#import "CA.h"

@implementation CA
-(NSInteger) sum
{
    return _inteA + _inteB;
}

-(void) print
{
    NSLog(@"%ld", (long)[self sum]);
}
@end
