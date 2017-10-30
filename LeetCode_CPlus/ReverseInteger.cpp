//
//  ReverseInteger.cpp
//  LeetCode_CPlus
//
//  Created by xiaode on 10/30/17.
//  Copyright © 2017 xiaode. All rights reserved.
//

#include "ReverseInteger.hpp"

//Reverse digits of an integer.
//Example1: x = 123, return 321
//Example2: x = -123, return -321
ReverseInteger::ReverseInteger()
{
    
}

ReverseInteger::~ReverseInteger()
{

}

int ReverseInteger::reverse(int x)
{
    //corner case
    if (x == 0) return 0;
    
    long long result = 0;
    int remainder = 0;
    while (x != 0) {
        result*=10;
        remainder = x % 10;
        x = x / 10;
        result += remainder;
        
    }
    return (result < INT_MIN || result > INT_MAX) ? 0 : result;
}
