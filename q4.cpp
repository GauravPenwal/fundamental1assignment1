#include<iostream>
using namespace std;
int main(){
    int l,b;
    cin>>l>>b;
    float area = l*b;
    float perimeter = 2*(l+b);
    if(area>perimeter) cout<<area<<" area is greater than "<< perimeter<<"perimeter"<<endl;
    else cout<<perimeter<<" perimeter is greater than "<< area<<" area"<<endl;
}