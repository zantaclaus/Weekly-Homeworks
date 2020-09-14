#include<iostream>
using namespace std;
int main()
{
	int A[100], N = 0;
	for(int i=0;1;i++)
	{
		cin >> A[i];
		N++; 
		if(A[i] <= 0) {break;}
	}
		
	for(int i=0;i<N;i++)
	{
		for(int j=1;j<=A[i];j++)
		{
			cout << "*";
		}
		if(i<N-1)
		cout << endl;
	}

	return 0;
}
