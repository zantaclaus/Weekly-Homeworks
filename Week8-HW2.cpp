#include<iostream>
using namespace std;

int findMaxMarks(void);
struct data{
    char id[20];
    int marks[20];
};
struct data student[1050];
int nStudent, nTest;
int temp, maxMarks = 0,sum[1050] = {};

int main()
{
    cin >> nStudent >> nTest;
    for(int i = 0; i < nStudent; i++)
    {
        cin >> student[i].id;
        for(int j = 0; j < nTest; j++)
        {
            cin >> student[i].marks[j];
        }
    }

    for(int i = 0; i < nStudent;i++)
    {
        for(int j = 0; j < nTest-1; j++)
        {
            for(int k = 0; k < nTest-1; k++)
            {
                if(student[i].marks[k] < student[i].marks[k+1])
                {
                    temp = student[i].marks[k];
                    student[i].marks[k] = student[i].marks[k+1];
                    student[i].marks[k+1] = temp; 
                }
            }
        }
    }

    for(int i = 0; i < nStudent; i++)
    {
        for(int j = 0; j < nTest-1; j++)
        {
            sum[i] = sum[i] + student[i].marks[j];
        }
    }

   maxMarks = findMaxMarks();

    cout << maxMarks << endl;
    for(int i = 0; i < nStudent; i++)
    {
        if(sum[i] == maxMarks)
        {
            cout << student[i].id << endl;
        }
    }
    return 0;
}

int findMaxMarks()
{
    for(int i = 0; i < nStudent; i++)
    {
        if(sum[i] > maxMarks)
            maxMarks = sum[i];
    }
    return maxMarks;
}