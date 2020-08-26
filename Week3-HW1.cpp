#include<iostream>
using namespace std;
int main()
{
	int N, K, P;
	int check[1500];
	int count = 0;
	cin >> N >> K;
	for(int i = 2; i <= N; i++)
	{
		check[i] = 1;
	}
	while(1)
	{
		for(int i = 2; i <= N; i++)
		{
			if(check[i] == 1)
			{
				P = i;
				break;
			}
		}
		
		for(int i = 2; i <= N; i++)
		{
			if(i%P == 0 && check[i] == 1)
			{
				check[i] = 0;
				count++;
			}
			if(count == K)
			{
				cout << i;
				return 0;
			}
		}
	}
	
}
