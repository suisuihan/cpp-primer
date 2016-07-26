#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
struct sucessiveStr {
	string currStr;
	int i;
};

int main() {
	vector<sucessiveStr> suStrVec;
	int count = 0;
	string inputstr, prestr;
	while (std::cin >> inputstr) {
		if (inputstr == prestr) {
			++count;
			suStrVec.rbegin()->i = count;
		} else {
			count = 1;
			sucessiveStr newSuc;
			newSuc.currStr = inputstr;
			newSuc.i = count;
			suStrVec.push_back(newSuc);
		}
		prestr = inputstr;
	}

	if (suStrVec.empty()) {
		cout << "empty" << endl;
		return 0;
	}
	for (auto word: suStrVec) {
		cout << word.currStr << " " << word.i << endl;
	}
	cout << endl;

	sort(suStrVec.begin(), suStrVec.end(),
		[](sucessiveStr a, sucessiveStr b) {return a.i > b.i; });

	for (auto itr = suStrVec.cbegin(); (itr + 1) != suStrVec.cend(); itr++) {
		cout << itr->currStr << " " << itr->i << endl;
		if ((itr + 1) != suStrVec.end() && (itr + 1)->i == itr->i)
			continue;
		else
			break;
	}
	
	return 0;

}