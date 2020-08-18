#include<iostream>
using namespace std;
int main()
{
	int N, A[100];
	int count = 0, ans = 0;
	for(int i=1;i<=10;i++)
	{
		cin >> N;
		A[i] = N%42;
	}
	
	for(int i=1;i<=10;i++)
	{
		count = 0;
		for(int j=1;j<i;j++)
		{
			if(A[i]==A[j])
			{
				count++;
			}
		}
		if(count == 0)
		{
			ans++;
		}
	}
	
	cout << ans;
	return 0;
}
