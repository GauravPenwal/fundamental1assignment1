#include<iostream>
using namespace std;
int main(){
    int r;
    cin>>r;
    float area = 3.14*r*r;
    float circumference = 2*r*3.14;
    if(area>circumference) cout<<area<<" area is greater than "<< circumference<<"circumferne"<<endl;
    else cout<<circumference<<" circumference is greater than "<< area<<" area"<<endl;
}