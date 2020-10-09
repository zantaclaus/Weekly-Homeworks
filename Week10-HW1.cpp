#include<iostream>
using namespace std;
int findLastThreeDigit(int);
struct lottery{
    int number;
};

int main()
{
    struct lottery setLottery[60000];
    int nSetLottery, nReward, ans = 0, reward[500];
    int lastThreeDigit;
    cin >> nSetLottery;
    for(int i = 0; i < nSetLottery; i++)
    {
        cin >> setLottery[i].number;
    }

    cin >> nReward;
    for(int i = 0; i < nReward; i++)
    {
        cin >> reward[i];
    }

    for(int i = 0; i < nSetLottery; i++)
    {
        lastThreeDigit = findLastThreeDigit(setLottery[i].number);
        for(int j = 0; j < nReward; j++)
        {
            if(lastThreeDigit == reward[j])
            {
                ans++;
            }
        }  
    }
    
    cout << ans;
    return 0;
}

int findLastThreeDigit(int x)
{
    return x % 1000;
}