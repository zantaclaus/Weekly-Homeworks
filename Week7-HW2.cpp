#include<iostream>
using namespace std;

int checkStudentYear(int);
struct school{
    char id[9];
    char firstName[31];
    char lastName[51];
    int year;
};
struct school student[100];
int N, Y, count = 0;

int main()
{
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> student[i].id;
        cin >> student[i].firstName;
        cin >> student[i].lastName;
        cin >> student[i].year;
    }
    
    cin >> Y;
    count = checkStudentYear(Y);
    
    if(count != 0)
    {
        for(int i = 0; i < N; i++)
        {
            if(student[i].year == Y)
            {
                cout << student[i].id << " ";
                cout << student[i].firstName << " ";
                cout << student[i].lastName;
                if(i < N-1)
                    cout << endl;
            }
        }
    }
    else 
        cout << "None";

    return 0;
}

int checkStudentYear(int x)
{
    for(int i = 0; i < N; i++)
    {
        if(student[i].year == x)
        count++;
    }
    return count;
}