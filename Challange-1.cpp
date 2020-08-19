#include<iostream>
#include<math.h>
using namespace std;
void outputNum(int x, int y);
double sumNumber(int x, int y);
double sumNumberSquare(int x, int y);


int main()
{
	int x = 0, y = 0, N = 0;
	double average = 0, sd = 0;

	cin >> x >> y;
	if (x < y)
		N = y - x + 1;
	else if (x > y)
		N = x - y + 1;
	else
	{
		printf("%d", x);
		printf("\nAverage = %d.0", x);
		printf("\nSD = 0.00");
		return 0;
	}

	outputNum(x, y);

	average = sumNumber(x, y) / N;
	printf("\nAverage = %.1lf", average);

	sd = sqrt((sumNumberSquare(x, y) - (N * pow(average, 2))) / (N - 1));
	printf("\nSD = %.2lf", sd);


	return 0;
}

double sumNumber(int x, int y)
{
	int sum = 0;
	for (int i=x; x<y?i<=y:i>=y ; x<y?i++:i--)
	{
		sum = sum + i;
	}
	return sum;
}

double sumNumberSquare(int x, int y)
{
	int sum = 0;
	for (int i=x; x<y?i<=y:i>=y ; x<y?i++:i--)
	{
		sum = sum + i * i;
	}
	return sum;
}

void outputNum(int x, int y)
{
	for (int i=x; x<y?i<=y:i>=y ; x<y?i++:i--)
	{
		cout << i;
		if (i != y) cout << " ";
	}
}
