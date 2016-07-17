#include <iostream>
#include <cstring>
#include <string>
using namespace std;


int main(int argc, char** argv){
    const int buffer_size = 1024;
    char carr1[] = "what";
    char carr2[] = " up";
    char carr3[buffer_size];
    strcpy(carr3, carr1);
    strcat(carr3, carr2);
    cout << "carr3 is: " << carr3 << endl;
}
