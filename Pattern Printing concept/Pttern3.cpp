#include<iostream>
using namespace std;

//Space and star pattern 
/*int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        //space print 
        for(j=1;j<=5-i;j++)
        {
            cout<<" ";
        }
        //start print
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}*/

//user input
/*int main()
{
    int i,j,n;
    cout<<"Enter the number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}*/

//Number pattern left to right
/*int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        //space printing
        for(j=1;j<=5-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}*/

//number printing
/*int main()
{
    int i,j;
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(i=1;j<=n;i++)
    {
        //space printing
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        //number printing
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}*/

//alphabet printing
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            cout<<" ";
        }
        for(char name='A';name<='A'+(i-1);name++)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }
}