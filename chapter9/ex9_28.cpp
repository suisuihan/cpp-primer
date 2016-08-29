#include <forward_list>
#include <iostream>
using namespace std;


void insertList(forward_list<string> &flist, string target, string insertStr){
    auto iterCurr = flist.begin();
    auto iterPre = flist.before_begin();
    
    while(iterCurr != flist.end()){
        if(*iterCurr == target){
            flist.insert_after(iterCurr, insertStr);
            return;
        }else{
            iterPre = iterCurr;
            iterCurr++;
        }
    }
    flist.insert_after(iterPre,insertStr);
}

int main(){
    forward_list<string> flist{"a","b","c"};
    insertList(flist, "g","d");
    for(auto s: flist)
        cout << s << " ";
    cout << endl;

}
