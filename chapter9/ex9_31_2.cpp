#include <forward_list>
#include <vector>
#include <iostream>
using namespace std;


void keepOdd(forward_list<int> &li){
    auto preIter = li.before_begin();
    auto currIter = li.begin();
    while(currIter != li.end()){
        if(*currIter % 2){
            currIter = li.insert_after(currIter, *currIter);
            currIter++;
            advance(preIter,2);    
        }else
            currIter = li.erase_after(preIter);

    }
}

int main(){
    forward_list<int> li = {1,2,3,4};
    keepOdd(li);
    for(auto i: li)
        cout << i;
}
