//============================================================================
// Name        : WhiteBelt(Vector-1).cpp
// Author      : Vilture
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

void PrintVector (const vector<string>& vect)
{ for(string s:vect){
	cout << s << endl;
}

}

int main() {

	int n;
	cin >> n;
	vector<string> v;

	for(int i=0;i<n;i++)
	{string s;
	cin >> s;
	v.push_back(s);
	cout << "Current Size = " << v.size() << endl;

	}

	PrintVector(v);

	return 0;
}
