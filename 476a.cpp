
#include <bits/stdc++.h>
using namespace std;

signed main()
{
   cin.tie(NULL)->sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    int steps=n/2;
    int ans=-1;
    if(n%2==1){
        steps++;
    }
    for(int i=steps;i<=n;i++){
        if(i%m==0){
            ans=i;
            break;
        }
    }
    cout<<ans<<"\n";
    
    return 0;
}
