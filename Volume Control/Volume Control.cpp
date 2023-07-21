#include<iostream>
using namespace std;
int main()
{
    int r,x,y;
    cin>>r;
    for(int i = 1; i<=r; i++){
        cin>>x>>y;
      cout<<(abs(x-y))<<endl;
    }
    return 0;
}


