#include <iostream>

using namespace std;

int main(){
    unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0, tabCnt = 0, lfCnt = 0,
                    ffCnt = 0, flCnt = 0, fiCnt = 0;
    char ch, prech=' ';
    while(cin >> ch){
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
                if(prech=='i')
                    ++fiCnt;
                iCnt++;
                break;
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
            case '\t':
                tabCnt++;
                break;
            case ' ':
                spaceCnt++;
                break;
            case '\n':
                lfCnt++;
                break;
            case 'f':
                if(prech=='f')
                    ++ffCnt;
                break;
            case 'l':
                if(prech=='l')
                    ++flCnt;
                break;
        }
        prech=ch;
    }
    cout << "Number of a: " << aCnt << endl
        << "Number of e: " << eCnt << endl
        << "Number of i: " << iCnt << endl
        << "Number of o: " << oCnt << endl
        << "Number of u: " << uCnt << endl
        << "Number of 'tab': " << tabCnt << endl
        << "Number of 'space': " << spaceCnt << endl
        << "Number of 'ff': " << ffCnt << endl
        << "Number of 'fi': " << fiCnt << endl
        << "Number of 'fl': " << flCnt << endl;
}