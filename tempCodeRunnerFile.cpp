// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int x;
    cin>>x;
       int y=0;
       while(x!=0)
       {
       int rev= x%10;
       x=x/10;
       y= y*10+rev;
       }
       cout<<y<<endl;
}