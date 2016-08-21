#ifndef EX9_4_H
#define EX9_4_H
#include <vector>


bool contains(std::vector<int>::iterator itrBegin, std::vector<int>::iterator itrEnd, int value){
    auto itrDiff = itrEnd - itrBegin;
    if(itrDiff > 0){
        while(itrBegin != itrEnd){
            if(*itrBegin == value)
                return true;
            itBegin++;
        }
    }else if(itrDiff < 0){
        while(itrBegin != itrEnd){
            if(*itrBegin == value)
                return true;
            itBegin--;
        }
    }
    return false; 
}

#endif