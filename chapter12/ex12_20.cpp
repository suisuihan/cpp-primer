#include "ex12_19.h"
#include <fstream>

using namespace std;

int main(){
    StrBlob blob;
    ifstream inputfile("gitcommit.sh");
    string line;
    while(getline(inputfile, line))
        blob.push_back(line);
    auto iter = blob.begin();
    for(;iter != blob.end(); iter.incr())
        cout << iter.deref() << endl;
}






















