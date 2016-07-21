#include <iostream>
#include <vector>

using namespace std;

void scorebyConditionOpration(vector<int> scores){
    for(auto grade: scores){
        cout << ((grade > 90)? "high pass":(grade > 75)? "pass":(grade >= 60)? "low pass":"fail") << endl;
    }
}

void scorebyif(vector<int> scores){
    for(auto grade: scores){
        if(grade > 90){
            cout << "hight pass" << endl;
            continue;
        }else if(grade > 75){
            cout << "pass" << endl;
            continue;
        }else if(grade >= 60){
            cout << "low pass" << endl;
            continue;
        }else{
            cout << "fail" << endl;
            continue;
        }
    }
}

int main(int argc, char** argv){
    vector<int> v{10,20,60, 61,75, 76, 90, 91};
    cout << "scorebyConditionOpration:" << endl;
    scorebyConditionOpration(v);
    cout << "\nscorebyif:" << endl;
    scorebyif(v);

}