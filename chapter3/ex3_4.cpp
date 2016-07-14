#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv){
    string infirst, insecond;
    cout << "please enter the first string: " << endl;
    cin >> infirst;
    cout << "please enter the first string: " << endl;   
    cin >> insecond;
    if(infirst != insecond){
        if(infirst.size() > insecond.size())
            cout << infirst << endl;
        else
            cout << insecond << endl;
    }else{
        cout << "equal!" << endl;
    }

    if(infirst.size() != insecond.size()){
        if(infirst.size() > insecond.size())
            cout << infirst << endl;
        else
            cout << insecond << endl;
    }else{
        cout << "the stings's lengths is same!" << endl;
    }    
}
