#include <iostream>
using namespace std;

std::string global_str;
int global_int;
int main(int argc, char** argv){
	int local_int;
	std::string local_str;
	cout << "global_str = " << global_str << endl;
	cout << "global_int = " << global_int << endl;
	cout << "local_str = " << local_str << endl;
	cout << "local_int = " << local_int << endl;
}
