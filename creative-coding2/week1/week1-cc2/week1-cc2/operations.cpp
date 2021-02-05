//
//  operations.cpp
//  week1-cc2
//
//  Created by Filippo Romeo on 04/02/2021.
//

#include "operations.hpp"

float operations::mult(float x, float y){
    return x*y;
}

float operations::add(float x, float y){
    return x+y;
}

float operations::div(float x, float y){
    return x/y;
}

float operations::sub(float x, float y){
    
    float ret = (x>y) ? x-y : y-x;
      return ret;
    }

float operations::sqr(float x){
    return x*x;
}
