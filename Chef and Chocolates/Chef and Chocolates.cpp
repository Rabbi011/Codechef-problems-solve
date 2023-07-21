#include<iostream>
using namespace std;
int main()
{
    int r,x,y,z;
    cin>>r;
    for(int i = 1; i<=r; i++){
        cin>>x>>y>>z;
       cout<<(((x*5)+(y*10))/z)<<endl;
    }
    return 0;
}

