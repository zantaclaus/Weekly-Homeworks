#include<iostream>
using namespace std;
int main()
{
	int N;
	scanf("%d",&N);
	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= N; j++)
		{
			if(i==2&&j!=1&&j!=N || j==2&&i!=1&&i!=N || j==N-1&&i!=1&&i!=N || i==N-1&&j!=1&&j!=N)
				cout << " ";
			else 
				cout << "*";
		}
		if(i!=N)
		cout << endl;
	}
	return 0;
}
