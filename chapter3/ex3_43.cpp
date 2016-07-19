#include <iostream>
#include <vector>
using namespace std;


int main(int argc, char** argv){
    int arr[3][4]={0,1,2,3,
                   4,5,6,7,
                   8,9,10,11
                   };
                    
    cout << "range type:" << endl;
    for(int (&row)[4]: arr)
        for(int num: row)
            cout << num << " ";
    cout << endl;

    cout << "point type:" << endl;
    for(int *p = &arr[0][0]; p!=(arr+12); p++)
        cout << *p << " ";
    cout << endl;

    cout << "subscript index type:" << endl;
    for(int i = 0; i < 3; i++)
        for(int j=0; j < 4; j++)
            cout << arr[i][j] << " ";
    cout << endl;
}
