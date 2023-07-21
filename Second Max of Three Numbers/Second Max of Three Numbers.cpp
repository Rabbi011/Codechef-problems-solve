#include<iostream>
using namespace std;
int main()
{
    int n,x,y,z;
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        cin>>x>>y>>z;

        if(x>y && x>z)
        {
            if(z>y)
            {
                cout<<z<<endl;
            }
            else
                cout <<y<<endl;
        }

        else if(y>x && y>z)
        {
            if(x>z)
            {
                cout<<x<<endl;
            }
            else
                cout<<z<<endl;
        }
        else if(z>x && z>y){
              if(y>x){
                  cout<<y<<endl;
              }
              else
                cout<<x<<endl;
          }





    }
    return 0;
}




