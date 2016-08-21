#ifndef EX9_5_H
#define EX9_5_H
#include <vector>


bool find(std::vector<int>::iterator itrBegin, std::vector<int>::iterator itrEnd, int value){
    auto itrDiff = itrEnd - itrBegin;
    if(itrDiff > 0){
        while(itrBegin != itrEnd){
            if(*itrBegin == value)
                return itrBegin;
            itBegin++;
        }
        return itrEnd;
    }else if(itrDiff < 0){
        while(itrBegin != itrEnd){
            if(*itrBegin == value)
                return itrBegin;
            itBegin--;
        }
        return itrEnd;
    }
}

#endif