#include <iostream>

using namespace std;

int main(){
    char scores[]={'D', 'C','C', 'B', 'A', 'S', 'w'};
    int grade = 0;
    while(cin >> grade){
        int level = 0;
        level = (grade < 60)? 0 : ((grade -50)/10 > 5 ? 6: (grade -50)/10 );
        cout << scores[level] <<  endl;
    }
}