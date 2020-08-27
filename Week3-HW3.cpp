#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	int N;
	cin >> N;
	for(int i=3;i<N;i++)
	{
		if(i%3==0||i%5==0)
		{
			sum = sum + i;
		}
		
	}
	cout << sum;
	return 0;
}
