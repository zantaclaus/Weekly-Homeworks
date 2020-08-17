#include<iostream>
using namespace std;
int main()
{
	int N, x;
	cin >> N >> x;
	int min = x;
	int max = x;
	for(int i=1;i<N;i++)
	{
		cin >> x;
		if(x >= max) max = x;
		if(x <= min) min = x;
	}
	cout << min << endl << max;
	return 0;
}
