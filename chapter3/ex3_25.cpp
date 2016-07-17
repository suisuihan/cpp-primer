#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv){
    vector<unsigned> score(11,0);
    unsigned grade;
    while(cin >> grade){
        if(grade <= 100){
            (*(score.begin()+grade/10))++;
        }
    }
    for(auto s: score)
        cout << s << " ";
    cout << endl;
}
