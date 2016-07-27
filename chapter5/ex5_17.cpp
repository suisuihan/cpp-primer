#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> iVec1{2,1,2}, iVec2{2,1,2,3};
	bool isPre = true;
	for(auto itr1=iVec1.begin(), itr2=iVec2.begin();itr1!=iVec1.end() && itr2!=iVec2.end(); ++itr1, ++itr2){
		if(*itr1 != *itr2){
			isPre = false;
			break;
		}
	}

	if(isPre)
		cout << "YES!" << endl;
	else
		cout << "NO!" << endl;

	
	return 0;

}