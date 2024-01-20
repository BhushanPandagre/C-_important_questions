//-----sliding window problem-----------------------------//

#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> v{3, 4, 5, 10, 9};
    int k = 3, j = 0, s = 0, mx = 0,  p = 0;
    for (int i = 0; i < 3; ++i)
    {
        s = s + v[i];
    }
    mx = s;
    j = k;
    while (j < v.size())
    {
        s = s - v[p];
        s = s + v[j];
        mx= max(mx, s);
        //for min we replesh 
        j++;
        p++;
    }
    cout << "max sum=" << mx;
    return 0;
}