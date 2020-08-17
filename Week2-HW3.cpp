#include<iostream>
using namespace std;
int main()
{
	int a, b, ans;
	int i = 1;
	cin >> a >> b;
	while(i<=a && i<=b)
	{
		if(a%i == 0 && b%i == 0)
		{
			ans = i;
		}
		i++;
	}
	cout << ans;
	return 0;
}
