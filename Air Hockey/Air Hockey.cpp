#include<iostream>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n;
    for(int i = 1; i<=n; i++){
        cin>>x>>y;
        if(x>=y)
            cout<<(7-x)<<endl;
        else
            cout<<(7-y)<<endl;
    }
    return 0;
}

