#include<iostream>
using namespace std;
#include<bits/stdc++.h>
vector<int>s1,s2;
void dp()
{
       int n=s1.size()+1;
       int m=s2.size()+1;
       vector<vector<int>> v( n , vector<int> (m, 0)); //*****
       for(int i=0;i<=s1.size();i++)
       {
           for(int j=0;j<=s2.size();j++)
           {
               if(i==0||j==0)
               {
                   v[i][j]=0;
               }
               else if(s1[i-1]==s2[j-1])
               {
                   v[i][j]=v[i-1][j-1]+1;
               }
               else
               {
                   v[i][j]=max(v[i-1][j],v[i][j-1]);
               }
           }
       }
       cout<<v[n-1][m-1]<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;cin>>t;int size_of_vector;int a;
    while (t--)
    {
        set<int>s; 
        cin>>size_of_vector;
        while (size_of_vector--)
        {
            cin>>a;
            s1.push_back(a);
            s.insert(a);           //insetion time compex..  O(nlog(n))
        } 
        for(auto i=s.begin();i!=s.end();i++)
        {
           s2.push_back(*i);
        }
        dp();  
    }  
    return 0;
}