#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char code[15000];
	cin >> code;
	int lens = strlen(code), count1 = 0, count2 = 0;
	for (int i = 0; i < lens; i++)
	{
		if (code[i] >= 'A' && code[i] <= 'Z')
		{
			count1++;
		}
		else if (code[i] >= 'a' && code[i] <= 'z')
		{
			count2++;
		}
	}
	if (count1 == lens)
	{
		cout << "All Capital Letter";
	}
	else if (count2 == lens)
	{
		cout << "All Small Letter";
	}
	else
	{
		cout << "Mix";
	}
	return 0;
}
