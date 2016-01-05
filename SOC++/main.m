//
//  main.m
//  SOC++
//
//  Created by Bill Doughty on 1/4/16.
//  Copyright © 2016 Bill Doughty. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "SOC.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        NSLog(@"Hello, World!");
        TestCObject *cop = allocateTestCObject(32767, 1.0);
        dprintd(cop->value1);
        dprintg(cop->value2);
    }
    return 0;
}
