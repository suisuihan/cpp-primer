#include <iostream>
#include "fact.h"
int fact(int val){
    int ret = 1;
    while(val > 1)
        ret *= val--;
    return ret;
}
