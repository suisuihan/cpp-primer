#include <iostream>
using namespace std;

int main(){
    int length = 2;
    int* ptr = new int[length];
    int num;
    int inputcount = 0;
    while(cin >> num){
        if(inputcount < length){
            ptr[inputcount] = num;
        }else{
            
            int* oldptr = ptr;
            length *= 2;
            int* newptr = new int[length];

            cout << "resize array" << endl;
            cout << "new length is " << length << endl;

            for(int index=0; index<length; index++)
                newptr[index] = ptr[index];
            newptr[inputcount] = num;
            delete [] oldptr;
            ptr = newptr;
            oldptr = nullptr;
            newptr = nullptr;
        }
        ++inputcount;
        // cout << "current length is " << inputcount << endl;
    }

    for(int index=0; index<inputcount; index++)
        cout << ptr[index] << " ";
    cout << endl;
}






















