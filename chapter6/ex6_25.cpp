#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv){
    if(argc < 2){
        cout << "arguments does not enough" << endl;
        return -1;
    }
    string connectStr = argv[1];
    connectStr = connectStr + argv[2];
    cout << connectStr << endl;
    return 0;
}

