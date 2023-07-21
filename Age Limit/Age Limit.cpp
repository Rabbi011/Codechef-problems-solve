#include<iostream>
using namespace std;
int main()
{
    int n,x,y,a;
    cin>>n;
    for(int i = 1; i<=n ;i++){
        cin>> x >> y >> a;

        if(a >= x && a<y){
            cout<<"YES"<<endl;
        }
        else{
            cout <<"NO"<<endl;

        }

    }
    return 0;
}
