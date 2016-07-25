#include <iostream>

using namespace std;

int main(){
    char scores[]={'D', 'C','C', 'B', 'A', 'S'};
    int grade = 0;
    while(cin >> grade){
        if(grade < 60){
            cout << scores[0] << endl;
        }else{
            if(grade > 100){
                cout << "--!" << endl;
                continue;
            }
            int level = (grade-50)/10;
            cout << scores[level] << endl; 
        }
    }
}