#include <iostream>

using namespace std;

int main(){
    unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    while(cin >> std::noskipws >> ch){
        switch(ch){
            case 'a':
            case 'A':
                aCnt++;
                break;
            case 'e':
            case 'E':
                eCnt++;
                break;
            case 'i':
            case 'I':
                iCnt++;
                break;
            case 'o':
            case 'O':
                oCnt++;
                break;
            case 'u':
            case 'U':
                uCnt++;
                break;
        }
    }
    cout << "Number of a: " << aCnt << endl
        << "Number of e: " << eCnt << endl
        << "Number of i: " << iCnt << endl
        << "Number of o: " << oCnt << endl
        << "Number of u: " << uCnt << endl;
}