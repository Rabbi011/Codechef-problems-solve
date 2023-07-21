
#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    for(int i = 1; i<=n; i++){
        cin>>x;
        if(x<300)
            cout<<(300*10)<<endl;
        else
            cout<<(x*10)<<endl;


    }
    return 0;
}


