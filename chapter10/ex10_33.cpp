#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <iterator>

using namespace std;

void splitNum(string readfile, string oddfile, string evenfile){
	ifstream infs(readfile);
	ofstream oddfs(oddfile), evenfs(evenfile);

	istream_iterator<int> inIter(infs), eof;
	ostream_iterator<int> outOddIter(oddfs, "\n");
	ostream_iterator<int> outEvenIter(evenfs, "\n");
	
	while(inIter != eof){
		int value = *inIter;
		if(*inIter % 2)
			outOddIter = value;
		else
			outEvenIter = value;
		inIter++;

	}

}

int main(){
	string srcfile = "num.txt", dstfile1 = "odd.txt", dstfile2 = "even.txt";
	splitNum(srcfile, dstfile1, dstfile2);
}
