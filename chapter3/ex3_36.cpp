#include <iostream>
#include <vector>
using namespace std;

bool cmpArr1(int a[], int aLen, int b[], int bLen){
    if(a != b)
        return false;
    for(size_t i=0; i<aLen; i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}


bool cmpArr2(const int *pb1, const int *pe1, const int *pb2, const int *pe2){
    if((pe1-pb1) != (pe2-pb2))
        return false;
    for(; pb1 != pe1; pb1++, pb2++){
        if(*pb1 != *pb2)
            return false;
    }
    return true;
}


int main(int argc, char** argv){
    int ia1[] = {1,2,3};
    int ia2[] = {2,3,4};
    cout << "cmpArr1" << endl;
    if(cmpArr1(ia1, sizeof(ia1)/sizeof(ia1[0]), ia2, sizeof(ia2)/sizeof(ia2[0])))
        cout << "ia1 = ia2" << endl;
    else
        cout << "ia1 != ia2" << endl;

    cout << "cmpArr2" << endl;
    if(cmpArr2(begin(ia1), end(ia1), begin(ia2), end(ia2)))
        cout << "ia1 = ia2" << endl;
    else
        cout << "ia1 != ia2" << endl;

    cout << "cmpVec" << endl;  
    vector<int> ivec1{1, 2, 3};
    vector<int> ivec2{1, 2, 4};
    if(ivec1 == ivec2)
        cout << "ivec1 == ivec2" << endl;
    else
        cout << "ivec1 != ivec2" << endl;

}
