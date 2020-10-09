#include<iostream>
using namespace std;
int plusCount(int);

struct binary{
	int number;
};

int main()
{
	int N = 0, count00 = 0, count01 = 0, count10 = 0, count11 = 0;;
	struct binary code[100010];
	
	for(int i = 0; 1; i++)
	{
		cin >> code[i].number;
		N++;
		if(code[i].number != 1 && code[i].number != 0)
		{
			break;
		}
	}
	
	for(int i = 1; i < N; i++)
	{
		if(code[i-1].number == 0 && code[i].number == 0)
			count00 = plusCount(count00);
		else if(code[i-1].number == 0 && code[i].number == 1)
			count01 = plusCount(count01);
		else if(code[i-1].number == 1 && code[i].number == 0 )
			count10 = plusCount(count10);
		else if(code[i-1].number == 1 && code[i].number == 1)
			count11 = plusCount(count11);
	}
	
	cout << count00 << endl;
	cout << count01 << endl;
	cout << count10 << endl;
	cout << count11;
	
	return 0;
}

int plusCount(int x)
{
	return x+1;
}
