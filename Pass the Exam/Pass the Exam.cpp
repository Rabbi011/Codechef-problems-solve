#include<iostream>
using namespace std;
int main()
{
    int r,x,y,z;
    cin>>r;
    for(int i = 1; i<=r; i++){
        cin>>x>>y>>z;
        if((x>=10 && y>=10 && z>=10)&&(x+y+z)>=100){
            cout<<"PASS"<<endl;
        }
        else
            cout<<"FAIL"<<endl;

    }
    return 0;
}
