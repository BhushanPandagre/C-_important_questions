// write a program to find out longest sum of the  subarray...???

//window size is negative...//


// sum=0;

// mx=arr[0];

// mx=mx(mx,sum);
// if(sum<o)
// {
//     sum=0;
// }

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v{2,-1,1,2,1,-1,1,2};
    int sum=0;
    int mx=v[0];

    for(int i=0;i<v.size();i++)
    {
        sum=sum+v[i];
        mx=max(mx,sum);
        if(sum<0)
        {
            sum=0;
        }
        if(sum>mx)
        {
            mx=sum;
        }
    }
cout<<"max sum of sub array :"<<mx;
return 0;
}