#include <fstream>
#include <vector>
#include <iostream>
#include <list>
using namespace std;


bool cmpVector(const vector<int> vec1, const vector<int> vec2){
    if(vec1.empty() && vec2.empty())
        return true;
    else if((vec1.empty() && (!vec2.empty())) || ((!vec1.empty()) && vec2.empty()))
        return false;
    auto itrBegin1 = vec1.cbegin();
    auto itrEnd1 = vec1.cend();
    auto itrBegin2 = vec2.cbegin();
    auto itrEnd2 = vec2.cend();

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
    vector<int> vec11;
    vector<int> vec12;
    cout << boolalpha;
    cout << "vec11 cmpare vec12 is " << cmpVector(vec11, vec12) << endl;

    vector<int> vec21{1,2,3};
    vector<int> vec22{1,2,3,4};
    cout << "vec21 cmpare vec22 is " << cmpVector(vec21, vec22) << endl;

 
    vector<int> vec31{1,2,3,4};
    vector<int> vec32{1,2,3};
    cout << "vec31 cmpare vec32 is " << cmpVector(vec31, vec32) << endl;   


 
    vector<int> vec41{1,2,3,4};
    vector<int> vec42{1,2,3,5};
    cout << "vec41 cmpare vec42 is " << cmpVector(vec41, vec42) << endl;  

     
    vector<int> vec51{1,2,3,4};
    vector<int> vec52{1,2,3,4};
    cout << boolalpha;
    cout << "vec51 cmpare vec52 is " << cmpVector(vec51, vec52) << endl;   

    cout << "use operator \"==\":" << endl;
    cout << "  vec51 cmpare vec52 is " << (vec51==vec52 ? true : false) << endl;
    cout << "  vec41 cmpare vec42 is " << (vec41==vec42 ? true : false) << endl;
}
