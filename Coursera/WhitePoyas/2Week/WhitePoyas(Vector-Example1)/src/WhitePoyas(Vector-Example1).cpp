//============================================================================
// Name        : WhitePoyas(Vector-Example1).cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N,n;
	std::vector<int> dataIn;
	int HotDayCount;
	int MidTemp=0;
	std::vector<int> dataOut;

	cin >> N;
	for(int i=0 ; i<N ; i++)
	{
		cin >> n;
		MidTemp+=n;
		dataIn.push_back(n);
	}

	MidTemp/=N;
	for(int i =0 ; i<dataIn.size() ; i++)
	{
		if(dataIn[i]>MidTemp)
		{
			dataOut.push_back(dataIn[i]);
		}
	}

	cout << dataOut.size() << endl;
	for(auto s :dataOut)
	{
		cout << dataOut[s];
	}

	return 0;
}
