#include<iostream>
using namespace std;
int main()
{
    int r,x,y;
    cin>>r;
    for(int i = 1; i<=r; i++){
        cin>>x>>y;
        if(x>y)
            cout<<"NO"<<endl;
       else if((x+200)>=y)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
