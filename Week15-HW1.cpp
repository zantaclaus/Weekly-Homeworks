#include<iostream>
using namespace std;

int checkFizzBuss(int*);

int main()
{
	int N;
	cin >> N;
	
	int arr[100000];
	for(int i = 1; i <= N; i++)
	{
		arr[i] = i;
	}
	
	int *ptr = &arr[1];
	
	for(int i = 1; i <= N; i++)
	{
		switch(checkFizzBuss(ptr))
		{
			case 1: cout << *ptr;
					break;
			case 2: cout << "Buzz";
					break;
			case 3: cout << "Fizz";
					break;
			case 4: cout << "FizzBuzz";
					break;		
		}
				
		if(i < N)
			cout << endl;
		ptr++;
	}
	return 0;
}

int checkFizzBuss(int *ptr)
{
	if(*ptr % 3 == 0 && *ptr % 5 == 0)
		return 4;
	else if(*ptr % 3 == 0)
		return 3;
	else if(*ptr % 5 == 0)
		return 2;
	else 
		return 1;
}
