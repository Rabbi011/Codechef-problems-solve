#include<iostream>
using namespace std;
int main()
{
    int r,x,y,z;
    cin>>r;
    for(int i = 1; i<=r; i++){
        cin>>x>>y>>z;
        if(x<=(y*z))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}

