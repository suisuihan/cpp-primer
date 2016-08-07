#include <iostream>
#include <vector>
using namespace std;
template<typename T>
void printValue(T begItr, T endItr )
{
    #ifndef NDEBUG
        cout << __func__ << "vector size is " << endItr - begItr << endl;
    #endif

    if (begItr != endItr)
    {
        cout << *begItr << endl;
        printValue(++begItr, endItr);
    }
}

int main()
{
    vector<int> vec{ 1, 2, 3};
    printValue(vec.cbegin(), vec.cend());

    return 0;
}