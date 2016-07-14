#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv){
    string concatstring;
    string bufferstring;
    while(cin >> bufferstring){
        concatstring+=bufferstring;
    }
    cin.clear();
    cout << "the concatstring is: " << concatstring << endl;
}
