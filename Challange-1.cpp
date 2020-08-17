#include<iostream>
#include<math.h>
using namespace std;
int outputNum(int x, int y);
double sumNumber(int x, int y);
double sumNumberSquare(int x, int y);


int main()
{
	int x, y, N;
	double average, sd;

	cin >> x >> y;
	if (x < y)
		N = y - x + 1;
	else
		N = x - y + 1;

	outputNum(x, y); //เเสดงผลเลข จากมากไปน้อย หรือน้อยไปมาก

	average = sumNumber(x, y) / N; //หาค่าเฉลี่ย ฟังก์ชันผลรวม หาร จำนวนเลข
	printf("\nAverage = %.1lf", average); //เเสดงผล ค่าเฉลี่ย

	sd = sqrt((sumNumberSquare(x, y) - (N * pow(average, 2))) / (N - 1)); //หาค่า S.D 
	printf("\nSD = %.2lf", sd); //เเสดงผล S.D.


	return 0;
}

double sumNumber(int x, int y)
{
	int sum = 0;
	for (int i = x; x<y?i<=y:i>=y ; x<y?i++:i--)
	{
		sum = sum + i;
	}
	return sum;
}

double sumNumberSquare(int x, int y)
{
	int sum = 0;
	for (int i = x; x<y?i<=y:i>=y ; x<y?i++:i--)
	{
		sum = sum + i * i;
	}
	return sum;
}

int outputNum(int x, int y)
{
	for (int i = x; x<y?i<=y:i>=y ; x<y?i++:i--)
	{
		cout << i;
		if (i != y) cout << " ";
	}
}

