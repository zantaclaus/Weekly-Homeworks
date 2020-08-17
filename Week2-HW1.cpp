#include<iostream>
using namespace std;
int main()
{
	int n, m, A[200][200], B[200][200];
	cin >> m >> n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin >> A[i][j];
		}
	}
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin >> B[i][j];
		}
	}
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout << A[i][j] + B[i][j];
			if(j != n-1)
				cout << " ";
		}
		if(i != m-1)
			cout << endl;
	}
	return 0;
}
