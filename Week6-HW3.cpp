#include<iostream>
using namespace std;
int main()
{
	int N, temp;
	int str[600], code[600];
	cin >> N;
	for(int i=1;i<=N;i++)
	{
		if(i<100)
		{
			str[i] = i%10;
			code[i] = i%10;
		}
		else
		{
			str[i] = i%100;  
			code[i] = i%100; 
		}
	}
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N;j++)
		{
			cout << code[j] << " ";
		}
		for(int k=1;k<=N;k++)
		{
			if(k == 1)
			{
				code[k] = str[N];
			}
			else code[k] = str[k-1];
		}
		for(int j=1;j<=N;j++)
		{
			str[j] = code[j];
		}
		cout << endl;
	}
	return 0;
}
