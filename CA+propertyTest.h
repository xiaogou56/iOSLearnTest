//
//  CA+propertyTest.h
//  iOSLearnTest
//
//  Created by test on 15/9/4.
//  Copyright © 2015年 wayne. All rights reserved.
//

#import "CA.h"

@interface CA (propertyTest)

//Categories can be used to declare either instance methods or class methods but are not usually suitable for declaring additional properties. It’s valid syntax to include a property declaration in a category interface, but it’s not possible to declare an additional instance variable in a category. This means the compiler won’t synthesize any instance variable, nor will it synthesize any property accessor methods. You can write your own accessor methods in the category implementation, but you won’t be able to keep track of a value for that property unless it’s already stored by the original class.
//
//The only way to add a traditional property—backed by a new instance variable—to an existing class is to use a class extension, as described in Class Extensions Extend the Internal Implementation.
@property(nonatomic, assign)NSInteger inteC;
@end
