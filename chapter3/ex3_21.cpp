#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename T>
void printValue(vector<T> vec){
    cout << "size of vector is " << vec.size() << endl;
    for(auto itr=vec.cbegin(); itr!=vec.cend();itr++)
        cout << "value is: " << (*itr) << endl;
    cout << endl;
}

int main(int argc, char** argv){
    vector<int> v1;      
    vector<int> v2(10);     
    vector<int> v3(10, 42); 
    vector<int> v4{ 10 };    
    vector<int> v5{ 10, 42 };
    vector<string> v6{ 10 };  
    vector<string> v7{ 10, "hi" };  

    printValue(v1);
    printValue(v2);
    printValue(v3);
    printValue(v4);
    printValue(v5);
    printValue(v6);
    printValue(v7);

}
