//----------------freequency count-----------------------//

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int n;
    string s;
    map<string, int> mp;
    cout << "how many records\n";
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> s;
        mp[s]++;
    }
    for (auto p : mp)
    {
        cout << p.first << "=" << p.second << "\n";
    }
}

