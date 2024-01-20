// #include<iostream>
// using namespace std;
// #include<vector>
// #include<algorithm>
// string issum(vector<int>&p,int s,int t)

// {
//     int left=0;
//     int right=s-1;
//     sort(p.begin(),p.end());
//     while(left<right)
//     {
//         int sum=p[left]+p[right];
//         if(sum==t)
//         {
//             cout<<"("<<left<<","<<right<<")"<<endl;
//             return "yes";
//         }
//         else if(sum<t)
//         {
//             left++;
//         }
//         else{
//             right++;
//         }
//     }
//     return "no";
// }
// int main()
// {
//     vector<int>v{2,3,4,1,5,7};
//     int size=6;
//     int target=9;
//     cout<<issum(v,size,target);
// }

#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<algorithm>
 string issum(vector<int> &p,int s,int t)
 {
   int left=0;
   int right=s-1;
   sort(p.begin(),p.end());
    while(left<right)
    {
        int sum=p[left]+p[right];

        if(sum==t)
        {
            cout<<"("<<left<<","<<right<<")"<<"\n";
            return "yes";
        }
         else if(sum<t)
        {
            left++;
        }
        else{
            right++;
        }
    }
    return "no";
 }
int main()
{
   vector<int>v{2,3,4,1,5,7};
   int size=6;
   int target=9;
   cout<<issum(v,size,target);
}

