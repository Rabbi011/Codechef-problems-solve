#include<iostream>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n;
    for(int i = 1; i<=n; i++){
        cin>>x>>y;
        cout<<(x/10)*y<<endl;
    }
    return 0;
}
