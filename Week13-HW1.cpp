#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
int plusOne(int);

int main()
{
	int i = 0;
	char str[2000], check[2000];
	char A, B;
	scanf("%[^\n]",str);

	char *ptr;
	ptr = &str[0];
	
	cin >> A >> B;
	cin >> check;
	int len = strlen(check);
	
	while(1)
	{
		if(*ptr == A)
		{
			if(check[i] == 'Y')
			{
				*ptr = B;
			}
			i = plusOne(i);
			if(i >= len) break;
		}
		ptr++;
	}
	
	cout << str;

	return 0;
}

int plusOne(int x)
{
	return x+1;
}
