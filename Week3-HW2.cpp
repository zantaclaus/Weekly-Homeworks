#include<iostream>
using namespace std;
int main()
{
	int N[50][50];
	int sum[50] = {};
	int max = 0;
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin >> N[i][j];
		}
	}
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<4;j++)
		{
			sum[i] = sum[i] + N[i][j];
		}
	}
	
	for(int i=0;i<5;i++)
	{
		if(sum[i] > max)
		{
			max = sum[i];
		}
	}
	
	for(int i=0;i<5;i++)
	{
		if(sum[i] == max)
		{
			cout << i+1 << " " << max;
		}
	}
}
