//============================================================================
// Name        : WhitePoyas(Vector-2).cpp
// Author      : Vilture
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

void PrintVector (const vector<bool>& vect)
{ for(auto s:vect){
	cout << s << endl;
}

}
int main() {
	vector<bool> is_holiday(28, false);
	is_holiday[22]=true;
	}
	PrintVector(is_holiday);
	return 0;
}
