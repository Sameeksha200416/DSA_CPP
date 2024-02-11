#include<iostream>
using namespace std;

//5x5 row and col
int main()
{
    int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=5;col=col+1)
        {
            cout<<"*"<<" ";
        }
       cout<<endl;
    }
    
}

//5x5 row col in 10 print 
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<"10 ";
        }
        cout<<endl;
    }
}

//pattern-3
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

//pattern-4
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

//pattern-5
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


//pattern-6
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<j*j<<" ";
        }
        cout<<endl;
    }
}

//pattern-7
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        char name = 'a'+(i-1);
        for(j=1;j<=5;j++)
        {
            cout<<name <<" ";
        }
        cout<<endl;
    }
}


//pattern-8
int main()
{
    int i;
    char j;
    for(i=1;i<=5;i++)
    {
        for(j='a';j<='e';j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

//pattern-9
int main()
{
    int i,j;
    int count=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}
//---------METHOD-2-------------
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<(i-1)*5+j<<" ";
        }
        cout<<endl;
    }
}