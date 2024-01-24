// String is isomorphic or not ....???
// #include <iostream>
// using namespace std;
// #include <vector>
// bool iso(string &s1 , string &s2)
// {
//     int n=s1.length();
//     int ma=s2.length();
//     if(n!=ma)
//     {
//         cout<<"length is not equal\n";
//         return false;

//     }
//     int m1[256]={0};
//     int m2[256]={0};
//     for(int i=0;i<n;i++)
//     {
//         if(!m1[s1[i]] and !m2[s2[i]])
//         {
//             m1[s1[i]]=s2[i];
//             m2[s2[i]]=s1[i];
//         }
//         else if(m1[s1[i]] !=s2[i])
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     string s1 = "all";
//     string s2 = "nkk";
//     bool s = iso(s1, s2);
//     cout << s << "\n";
//     if (s)
//     {
//         cout << "it is isomorphic";
//     }
//     else
//     {
//         cout << "it is not isomorphic";
//     }
// }

#include<iostream>
using namespace std;
#include<vector>
 bool iso(string &s1,string &s2)
 {
   int n=s1.length();
   int ma=s2.length();

   if(n!=ma)
   {
    cout<<"length is not equal\n";
    return false;
   }

   int m1[256]={0};
   int m2[256]={0};

   for(int i=0;i<n;i++)
   {
    if(!m1[s1[i]] and !m2[s2[i]])
    {
        m1[s1[i]]=s2[i];
        m2[s2[i]]=s1[i];

    }
    else if(m1[s1[i]] !=s2[i])
    {
        return false;
    }
   }
   return true;
 }
int main()
{
    string s1="alluu";
    string s2="dffjj";

     bool s= iso(s1,s2);
     cout<<s<<"\n";
     if(s)
     {
        cout<<"it is isomorphic\n";
     }
     else{
        cout<<"it is not isomorphic\n";
     }

     return 0;

    
}