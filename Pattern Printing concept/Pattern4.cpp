#include<iostream>
using namespace std;
/*int main()
{
    int i,j;
    for(i=1;i<=6;i++)
    //space print
    {
        for(j=1;j<=6-i;j++)
        {
            cout<<" ";
        }
        //star print
        for(j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}*/

//alphabet triangle
/*int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=(2*i-1);j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}*/

//palidrom triangle pattern
/*int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(j=1;j<=i-1;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}*/

/*int main()
{
    int i,n,j;
    cout<<"enter the value:";
    cin>>n;
    for(i=1;i>=1;i--)
    {
        //space
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        //star print
        for(j=1;j<=(2*i-1);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
*/
//Pattern-4
/*int main()
{
    int i,j,n;
    cin>>n;
    for(i=n;i>=1;i--)
    {
        //print *
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        //print space
        for(j=1;j<=2*n-2*i;j++)
        {
            cout<<" ";
        }
        //print *
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //revere pattern of *
    for(i=1;i<=n;i++)
    {
        //print *
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        //print space
        for(j=1;j<=2*n-2*i;j++)
        {
            cout<<" ";
        }
        //print *
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}*/

//Butterfly Pattern
/*int main()
{
    int i,j,n;
    cout<<"Enter the input";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        //print *
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        //print space
        for(j=1;j<=2*n-2*i;j++)
        {
            cout<<" ";
        }
        //print *
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    } 
     for(i=n-1;i>=1;i--)
    {
        //print *
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        //print space
        for(j=1;j<=2*n-2*i;j++)
        {
            cout<<" ";
        }
        //print *
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    } 
    
    }
*/

//Diamond pattern 
int main()
{
    int i, j, rowNum, space;
    cout<<"Enter the Number of Rows: ";
    cin>>rowNum;
    space = rowNum-1;
    for(i=1; i<=rowNum; i++)
    {
        for(j=1; j<=space; j++)
            cout<<" ";
        space--;
        for(j=1; j<=(2*i-1); j++)
            cout<<"*";
        cout<<endl;
    }
    space = 1;
    for(i=1; i<=(rowNum-1); i++)
    {
        for(j=1; j<=space; j++)
            cout<<" ";
        space++;
        for(j=1; j<=(2*(rowNum-i)-1); j++)
            cout<<"*";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}