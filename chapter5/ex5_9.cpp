#include <iostream>

using namespace std;

int main(){
    unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    while(cin >> ch){
        if(ch == 'a'){
            aCnt++;
            continue;
        }else if(ch == 'e'){
            eCnt++;
            continue;
        }else if(ch == 'i'){
            iCnt++;
            continue;
        }else if(ch == 'o'){
            oCnt++;
            continue;
        }else if(ch == 'u'){
            uCnt++;
            continue;
        }
    }
    cout << "Number of a: " << aCnt << endl
        << "Number of e: " << eCnt << endl
        << "Number of i: " << iCnt << endl
        << "Number of o: " << oCnt << endl
        << "Number of u: " << uCnt << endl;
}