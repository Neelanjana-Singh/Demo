#include<bits/stdc++.h>
using namespace std;
int baseCase(int n)
{
    //base-case
    if(n==0)
    {
        return 1;
    }
    return 2*baseCase(n-1);
}

int main()
{
int n;
cin>>n;
int ans=baseCase(n);
cout<<ans<<endl;
return 0;
}
