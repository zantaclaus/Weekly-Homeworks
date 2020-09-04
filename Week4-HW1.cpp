#include<iostream>
using namespace std;
int main()
{
	int N, Matrix[100][100];
	int temp;
	
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			cin >> Matrix[i][j];
		}
	}
		
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			if(i < j)
			{
				temp = Matrix[i][j];
				Matrix[i][j] = Matrix[j][i];
				Matrix[j][i] = temp;
			}
		}
	}
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			cout << Matrix[i][j] << " ";
		}
		printf("\n");
	}
	
	return 0;
}
