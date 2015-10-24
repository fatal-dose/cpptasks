#include <iostream>

using namespace std;

int main()
{
    int treeLen, dayDist, nightDist, step, days;
    cin >> treeLen >> dayDist >> nightDist;
    step = dayDist - nightDist;
    days = ((treeLen - dayDist) + step - 1) / step;
    cout << "> " << days + 1 << endl;

    return 0;
}
