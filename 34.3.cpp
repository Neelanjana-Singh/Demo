// tail -recursion

/*
#include<bits/stdc++.h>
using namespace std;
void printNumber(int n)
{
    //base-case
    if(n==0)
    {
        return;
    }
    cout<<n<<endl;
    printNumber(n-1);
}
int main()
{
int n;
cin>>n;
cout<<endl;
printNumber(n);
return 0;
}
*/


//head recursion
#include<bits/stdc++.h>
using namespace std;
void printNumber(int n)
{
    //base-case
    if(n==0)
    {
        return;
    }

    printNumber(n-1);
    cout<<n<<endl;
}
int main()
{
int n;
cin>>n;
cout<<endl;
printNumber(n);
return 0;
}
