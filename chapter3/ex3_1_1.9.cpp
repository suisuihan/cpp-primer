#include <iostream>
using namespace std;

int main(int argc, char** argv){
    int i{50}, sum{0};
    while(i<=100){
        sum+=i;
        i++;
    }
    cout<< "sum of 50 to 100 is " << sum << endl;
}
