#include <iostream>
#include <string>
#include <vector>

using namespace std;

int getIntSum(vector<string> &v){
	int sum = 0;
	for(auto &i: v){
		sum += stoi(i);
	}
	return sum;
}

float getFloatSum(vector<string> &v){
	float sum = 0;
	for(auto &i: v){
		sum += stof(i);
	}
	return sum;
}


int main(){
	vector<string> vec{"12","32.1"};

	cout << getIntSum(vec) << endl;
	cout << getFloatSum(vec) << endl;

}
