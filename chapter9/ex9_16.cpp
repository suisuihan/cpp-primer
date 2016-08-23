#include <fstream>
#include <vector>
#include <iostream>
#include <list>
using namespace std;


bool cmpVector(const vector<int> vec, const list<int> l){
    if(vec.empty() && l.empty())
        return true;
    else if((vec.empty() && (!l.empty())) || ((!vec.empty()) && l.empty()))
        return false;
    auto itrBegin1 = vec.cbegin();
    auto itrEnd1 = vec.cend();
    auto itrBegin2 = l.cbegin();
    auto itrEnd2 = l.cend();

    for(; itrBegin1!=itrEnd1 && itrBegin2!=itrEnd2; itrBegin1++, itrBegin2++){
        if(*itrBegin1 != *itrBegin2)
            return false;
    }

    if(itrBegin1 == itrEnd1 && itrBegin2 == itrEnd2)
        return true;
    else
        return false;

}

int main(){
    vector<int> vec1;
    list<int> list1;
    cout << boolalpha;
    cout << "vec1 cmpare list1 is " << cmpVector(vec1, list1) << endl;

    vector<int> vec2{1,2,3};
    list<int> l2{1,2,3,4};
    cout << "vec2 cmpare l2 is " << cmpVector(vec2, l2) << endl;

 
    vector<int> vec3{1,2,3,4};
    list<int> l3{1,2,3};
    cout << "vec3 cmpare l3 is " << cmpVector(vec3, l3) << endl;   


 
    vector<int> vec4{1,2,3,4};
    list<int> l4{1,2,3,5};
    cout << "vec4 cmpare l4 is " << cmpVector(vec4, l4) << endl;  

     
    vector<int> vec5{1,2,3,4};
    list<int> l5{1,2,3,4};
    cout << "vec5 cmpare l5 is " << cmpVector(vec5, l5) << endl;   

    cout << "cmpare with operator \"==\":";
    cout << "  vec4 cmpare l4 is " << ((vec4==vector<int>(l4.cbegin(), l4.cend()))?true:false) << endl;
    cout << "  vec5 cmpare l5 is " << ((vec5==vector<int>(l5.cbegin(), l5.cend()))?true:false) << endl;
}
