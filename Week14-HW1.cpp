#include<iostream>
using namespace std;

int plusOne(int);
struct info{
	char name[6];
	float score;
};

int main()
{
	struct info student[10005];
	int N, sum = 0;
	float mean;
	int count = 0, ans = 0;
	
	cin >> N;
	for(int i =  0; i < N; i++)
	{
		cin >> student[i].name >> student[i].score;
		sum += student[i].score;
	}
	mean = (sum*1.0) / N;
	
	for(int i =  0; i < N; i++)
	{
		if(student[i].score >= mean)
		{
			ans = plusOne(ans);
		}
	}
	
	cout << ans << endl;
	for(int i =  0; i < N; i++)
	{
		if(student[i].score >= mean)
		{
			cout << student[i].name;
			count = plusOne(count);
			if(count < ans)
				cout << endl;
		}
	}
	return 0;
}

int plusOne(int x)
{
	return x+1;
}

	

