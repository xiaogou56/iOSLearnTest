//
//  CA.h
//  iOSLearnTest
//
//  Created by test on 15/9/4.
//  Copyright © 2015年 wayne. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CA : NSObject
@property(nonatomic, assign) NSInteger  inteA;
@property(nonatomic, assign) NSInteger  inteB;

// 必须暴露方法声明，否则外面无法调用。
-(void) print;
@end
