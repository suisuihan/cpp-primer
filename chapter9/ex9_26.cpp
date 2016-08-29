#include <list>
#include <vector>
#include <iostream>
using namespace std;


int main(){
    int ia[] = {0,1,1,2,3,5,8,13,21,55,89};
    vector<int> vec(begin(ia), end(ia));
    list<int> li(begin(ia), end(ia));
    auto iterVec = vec.begin();
    auto iterList = li.begin();
    while(iterVec != vec.end()){
        if(*iterVec%2 == 0)
            iterVec = vec.erase(iterVec);
        else
            iterVec++;
    }
    while(iterList != li.end()){
        if(*iterList%2 == 1)
            iterList = li.erase(iterList);
        else
            iterList++;
    }
    for(auto i: vec)
        cout << i << " ";
    cout << endl;
    
    for(auto i: li)
        cout << i << " ";
    cout << endl;
    

}
