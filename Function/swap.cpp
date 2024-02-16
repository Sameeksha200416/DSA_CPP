#include<iostream>
using namespace std;

//pass by value
/*void swap(int a, int b)
{
    int c;
    c=a;
    a=b;
    b=c;
}
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b<<" ";

}
*/

//Pass by reference
void swap(int &a, int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
}
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b<<" ";

}