#include<iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N;j++)
		{
			if(i==1||j==1||i==N||j==N||i==j||i+j==N+1)
			{
				cout << "*";
			}
			else cout << " ";
		}
		if(i!=N)
		cout << endl;
	}
	return 0;
}

