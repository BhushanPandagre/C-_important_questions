//Rearrange the sentance....??
#include<iostream>
using namespace std;
#include<string>
#include<vector>
string arng(string s)
{
string tmp;
vector<string>str(10);
int index=0;
int count=0;
while(index<s.size())
{
if(s[index]==' ')
{
    int pos;
 pos=tmp[tmp.size()-1]-'0';
 tmp.pop_back();
 str[pos]=tmp;
 tmp.clear();
 count++;
}
else
{
tmp+=s[index];
}
index++;
}
int pos;
pos=tmp[tmp.size()-1]-'0';
 tmp.pop_back();
 str[pos]=tmp;
 tmp.clear();
 count++;
for(int i=1;i<=count;i++)
{
    tmp+=str[i];
    tmp+=' ';
}
tmp.pop_back();
return tmp;

}
int main()
{
string s="is2 he1 a3 boy4 ";
cout<<arng(s);
}