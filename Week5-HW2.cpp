#include<iostream>
using namespace std;
int main()
{
	int N, M, x;
	int row[500], col[500];
	int check[500][500] = {};
	
	cin >> N >> M;
	cin >> x;
	for(int i = 0; i < x; i++)
	{
		cin >> row[i] >> col[i];
	}
	
	for(int k = 0; k < x; k++)
	{
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < M; j++)
			{
				if(i==row[k]-1 && j==col[k]-1)
					check[i][j] = 1;
			}
		}
	}
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			if(check[i][j] == 1)
				cout << "x";
			else cout << "_";
		}
		cout << endl;
	}
	
	return 0;
}
