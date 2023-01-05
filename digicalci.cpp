#include<iostream>
using namespace std;
int main(){
int a,b;
char op;
//cout<<"value of a and b"<<endl;
cin>>a>>b;
//cout<<"operation to be performed"<<endl;
cin>>op;

switch(op)
{
    case '+':cout<<" "<<a+b<<endl;
    break;
    case '-': cout<<" "<<a-b<<endl;
    break;
    case '*':cout<<" "<<a*b<<endl;
    break;
    case '/':cout<<""<<a/b<<endl;
    break;
    case '%':cout<<" "<<a%b<<endl;
    break;
}
return 0;
