#include <list>
#include <vector>
#include <iostream>
using namespace std;


void keepOdd(list<int> &li){
    auto iter = li.begin();
    while(iter != li.end()){
        if(*iter % 2){
            iter = li.insert(iter, *iter);
            advance(iter, 2);    
        }else
            iter = li.erase(iter);
    }
}

int main(){
    list<int> li = {1,2,3,4};
    keepOdd(li);
    for(auto i: li)
        cout << i;
}
