//
//  TestObject.h
//  SOC++
//
//  Created by Bill Doughty on 1/4/16.
//  Copyright © 2016 Bill Doughty. All rights reserved.
//

#ifndef TestCObject_h
#define TestCObject_h

#include "SOC.h"

typedef struct {
    long value1;
    double value2;
} TestCObject;


extern TestCObject *allocateTestCObject(long value1, double value2);
extern void releaseTestCObject(TestCObject *ptr);

#endif /* TestCObject_h */
