#include <bits/stdc++.h> 
using namespace std;
long long int houseRobberUtil(vector<int> valueInHouse, int start, int end)
{

    long long int valueAtIthHouse[valueInHouse.size()];

// Check if the thief may steal the first house or not.
    if (start == 0)
    {
        valueAtIthHouse[0] = valueInHouse[0];
        valueAtIthHouse[1] = max(valueInHouse[0], valueInHouse[1]);
    }

    else
    {
        valueAtIthHouse[0] = 0;
        valueAtIthHouse[1] = valueInHouse[1];
    }

    for (int i = 2; i < end; i++)
    {
        valueAtIthHouse[i] = max(valueAtIthHouse[i - 2] + valueInHouse[i], valueAtIthHouse[i - 1]);
    }

    return valueAtIthHouse[end - 1];
}
int rob(vector <int> &houses)
{
    if (houses.size() == 0)
    {
        return 0;
    }

    if (houses.size() == 1)
    {
        return houses[0];
    }
    return max(houseRobberUtil(houses,0, houses.size() - 1), houseRobberUtil(houses, 1, houses.size()));
}
