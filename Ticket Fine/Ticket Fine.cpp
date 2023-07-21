#include<iostream>
using namespace std;
int main()
{
    int n,x,y,z;
    cin>>n;
    for(int i = 1; i<=n; i++){
        cin>>x>>y>>z;
        cout<<((y-z)*x)<<endl;
    }
    return 0;
}

