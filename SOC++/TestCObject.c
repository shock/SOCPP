//
//  TestObject.c
//  SOC++
//
//  Created by Bill Doughty on 1/4/16.
//  Copyright © 2016 Bill Doughty. All rights reserved.
//

#include "SOC.h"

TestCObject *allocateTestCObject(long value1, double value2) {
    TestCObject *ptr = malloc(sizeof(TestCObject));
    ptr->value1 = value1;
    ptr->value2 = value2;
    return ptr;
}

void releaseTestCObject(TestCObject *ptr) {
    free(ptr);
}