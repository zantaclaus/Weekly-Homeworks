#include<iostream>
using namespace std;
int main()
{
	int N, M;
	int A[200][200];
	
	cin >> N >> M;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			cin >> A[i][j];
		}
	}
	
	for(int j=M-1;j>=0;j--)
	{
		for(int i=0;i<N;i++)
		{	
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
