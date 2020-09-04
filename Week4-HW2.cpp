#include<iostream>
using namespace std;
int main()
{
	int N, Num[500];
	int temp;
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> Num[i];
	}
	
	for(int i = 0; i < N-1; i++)
	{
		for(int j = 0; j < N-1; j++)
		{
			if(Num[j] > Num[j+1])
			{
				temp = Num[j];
				Num[j] = Num[j+1];
				Num[j+1] = temp;
			}
		}
	}
		
	for(int i = 0; i < N; i++)
	{
		cout << Num[i] << " ";
	}
	
	return 0;
}
