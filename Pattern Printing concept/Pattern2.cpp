#include<iostream>
using namespace std;
//Printing right hand triangle
/*int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}*/

//Asending number pattern
/*int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}*/

//Number pattern-2
/*int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}*/

//Reverse Number Pattern
/*int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}*/

//Alphabet pattern
/*int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        char name = 'a'+(i-1);
        for(j=1;j<=i;j++)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }

}*/

//Reverse Star pattern
/*int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        
        for(j=1;j<=5-(i-1);j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}*/

//Number pattern 
/*int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-(i-1);j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}*/

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=5-(i-1);j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}