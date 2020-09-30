#include<iostream>
using namespace std;
int plusOne(int);

struct competition{
    char name[50];
};

int main()
{
    struct competition Human[8];
    int N, vote[15000], score[8] = {};
    int min = 1000000;

    for(int i = 0; i < 8; i++)
    {
        cin >> Human[i].name;
    }
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> vote[i];
    }
    
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(vote[i] == j+1)
            {
                score[j] = plusOne(score[j]);
            }
        }
    }
    for(int j = 0; j < 8; j++)
    {
       if(score[j] < min)
        min = score[j];
    }
    for(int j = 0; j < 8; j++)
    {
       if(score[j] != min)
        cout << Human[j].name << endl;
    }
    return 0;
}

int plusOne(int x)
{
    return x+1;
}