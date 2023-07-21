#include<iostream>
using namespace std;
int main()
{
    int n,x,y,z;
    cin>>n;
    for(int i = 1; i<=n; i++){
        cin>>x>>y>>z;
        if((x*y<=z))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
