#include<iostream>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n;
    for(int i = 1; i<=n; i++){
        cin>>x>>y;
        if(x>y)
            cout<<x<<endl;
        else
            cout<<y<<endl;
    }
    return 0;
}


