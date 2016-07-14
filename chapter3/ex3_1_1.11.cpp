#include <iostream>
using namespace std;

int main(int argc, char** argv){
    int firstNum, secondNum;
    cout << "please enter the first num:";
    cin >> firstNum;
    cout << "please enter the second num:";
    cin >> secondNum;
    int leftNum, rightNum;
    leftNum = firstNum > secondNum?secondNum:firstNum;
    rightNum = firstNum < secondNum?secondNum:firstNum;
    while(leftNum <= rightNum){
        cout << leftNum << endl;
        leftNum++;
    }
}
