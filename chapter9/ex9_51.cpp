#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Mydate{
public:
	Mydate(const string &s){
		int datetype = -1;
		if(s.find_first_of(",") != string::npos)
			datetype = 0;
		else if(s.find_first_of("/") != string::npos)
			datetype = 1;
		else	
			datetype = 2;
		switch(datetype){
			case 0:{
				if (s.find_first_of("Jan") != string::npos) month = 1;
				else if(s.find_first_of("Feb") != string::npos) month = 2;
				else if(s.find_first_of("Mar") != string::npos) month = 3;
				else if(s.find_first_of("Apr") != string::npos) month = 4;
				else if(s.find_first_of("May") != string::npos) month = 5;
				else if(s.find_first_of("Jun") != string::npos) month = 6;
				else if(s.find_first_of("Jul") != string::npos) month = 7;
				else if(s.find_first_of("Aug") != string::npos) month = 8;
				else if(s.find_first_of("Sep") != string::npos) month = 9;
				else if(s.find_first_of("Oct") != string::npos) month = 10;
				else if(s.find_first_of("JNov") != string::npos) month = 11;
				else month = 12;
				string::size_type dayBeginIndex = s.find_first_of(" ");
				string::size_type dayEndIndex = s.find_first_of(",");
				day = stoi(s.substr(dayBeginIndex, dayEndIndex - dayBeginIndex));
				year = stoi(s.substr(dayEndIndex+1));
			}
				break;

			case 1:{
				string::size_type dateIndex = s.find_first_of("/");
				string::size_type yearIndex = s.find_last_of("/");
				month = stoi(s.substr(0, dateIndex));
				day = stoi(s.substr(dateIndex+1, yearIndex - dateIndex-1));
				year = stoi(s.substr(yearIndex+1));
			}
				break;

			case 2:{
				if (s.find_first_of("Jan") != string::npos) month = 1;
				else if(s.find_first_of("Feb") != string::npos) month = 2;
				else if(s.find_first_of("Mar") != string::npos) month = 3;
				else if(s.find_first_of("Apr") != string::npos) month = 4;
				else if(s.find_first_of("May") != string::npos) month = 5;
				else if(s.find_first_of("Jun") != string::npos) month = 6;
				else if(s.find_first_of("Jul") != string::npos) month = 7;
				else if(s.find_first_of("Aug") != string::npos) month = 8;
				else if(s.find_first_of("Sep") != string::npos) month = 9;
				else if(s.find_first_of("Oct") != string::npos) month = 10;
				else if(s.find_first_of("JNov") != string::npos) month = 11;
				else month = 12;
				string::size_type dateIndex = s.find_first_of(" ");
				string::size_type yearIndex = s.find_last_of(" ");
				day = stoi(s.substr(dateIndex+1, yearIndex - dateIndex));
				year = stoi(s.substr(yearIndex));
			}
				break;
			default:
				break;
		}
	}
	void printDate(){
		cout <<	month << "/" << day << "/" << year << endl;
	}
private:
	unsigned year, month, day;
};

int main(){
	Mydate date1("January 1,1900");
	Mydate date2("1/1/1900");
	Mydate date3("Jan 1 1900");
	date1.printDate();
	cout << endl;
	date2.printDate();
	cout << endl;
	date3.printDate();
	cout << endl;
}
