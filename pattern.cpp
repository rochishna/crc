#include <iostream>
using namespace std;
int main() {
int n;
cout<<"ENTER A NUMBER = ";
cin>>n;
for (int i = 1; i <= n; i++) 
        {
            for (int j = 1; j < i; j++) 
            {
                cout<<" ";
            }
            for (int j = i; j <= n; j++) 
            { 
                cout<<j<<" "; 
            } 
             
           cout<<"\n"; 
        } 
        for (int i = n-1; i >= 1; i--) 
        {
             
            for (int j = 1; j < i; j++) 
            {
                cout<<" ";
            }
            for (int j = i; j <= n; j++)
            {
                cout<<j<<" ";
            }
             
            cout<<"\n";
        }
}
