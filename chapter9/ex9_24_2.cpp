#include <list>
#include <vector>
#include <iostream>
using namespace std;


int main(){
    vector<string> vec();
    cout << "vec.at(0)=" << vec.at(0)<<endl;
    cout << "vec[0]=" << vec[0]<<endl;
    cout << "vec.front()=" << vec.front() << endl;
    cout << "vec.begin()=" << *vec.begin() << endl; 
}
