
#include<iostream>
using namespace std;
int main()
{
    int n,x,y,z,a;
    cin>>n;
    for(int i = 1; i<=n; i++){
        cin>>x>>y>>z>>a;
        if((x+y)>=(z+a))
        cout<<(z+a)<<endl;
        else
            cout<<(x+y)<<endl;
    }
    return 0;
}

