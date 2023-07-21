
#include<iostream>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n;
    for(int i = 1; i<=n; i++){
        cin>>x>>y;
        if((x*3)>=(y*2))
            cout<<(y*2)<<endl;
        else
            cout<<(x*3)<<endl;

    }
    return 0;
}



