// Second Largest Value
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int>v{12,33,24,89,54,43};
    sort(v.begin(), v.end());
    auto it = v.end();
    cout << "Second Largest value is = " << *(it-2) << "\n";
return 0;

}