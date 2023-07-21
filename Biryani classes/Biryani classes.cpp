#include<iostream>
using namespace std;
int main()
{
    int n,x,y,mul;
    cin>>n;
    for(int i = 1; i <= n; i++){
        cin>>x>>y;
        mul = x * y;
        cout<< mul <<endl;
    }
    return 0;
}
