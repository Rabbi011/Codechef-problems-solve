#include<iostream>
using namespace std;
int main()
{
    int r,x,y;
    cin>>r;
    for(int i = 1; i<=r; i++){
        cin>>x>>y;
        if(x*100>=y*10)
            cout<<"Cloth"<<endl;
        else
            cout<<"Disposable"<<endl;


    }
    return 0;
}


