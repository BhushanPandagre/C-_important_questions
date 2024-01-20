// FIND LONGEST PALINDROM.......????

#include<iostream>
#include<vector>
using namespace std;
int lgp(string s)
{
vector<int>lwr(26,0);
vector<int>upr(26,0);
for(int i=0;i<s.size();i++)
{
if(s[i]>='a')
{
    lwr[s[i]-'a']++;
}
if(s[i]>='A')
{
 upr[s[i]-'A']++;
}
}
int count=0;
bool odd=0;
for(int i=0;i<=25;i++)
{
    if(lwr[i]%2==0)
    {
        count+=lwr[i];
    }
    else
    {
        count+=lwr[i]-1;
        odd=1;
    }
    if(upr[i]%2==0)
    {
        count+=upr[i];
    }
    else
    {
        count+=upr[i]-1;
        odd=1;
    }

}
return count+odd;
}
int main()
{
    string s={"abbcdccfbb"};
    cout<<lgp(s);
    
}

//=====================================================PRACTICE TIME=================================================//

