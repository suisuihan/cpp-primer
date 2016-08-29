#include <forward_list>
#include <iostream>
using namespace std;


int main(){
    int ia[] = {0,1,1,2,3,5,8,13,21,55,89};
    forward_list<int> flist(begin(ia), end(ia));
    auto iterPre = flist.before_begin();
    auto iterCurr = flist.begin();
    while(iterCurr != flist.end()){
        if((*iterCurr)%2 == 1)
            iterCurr = flist.erase_after(iterPre);
        else{
            iterPre = iterCurr;
            iterCurr++; 
        }       
    }
    for(auto i: flist)
        cout << i << " ";
    cout << endl;

}
