#include<iostream>
using namespace std;
//Based on Number
int main()
{
    int i;
    for(i=101;i<=200;i++)
    {
        cout<<i<<endl;
    }
}


//Based on charachter
int main()
{
    char name;
    for(name='a';name<='z';name = name+1)
    {
        cout<<name<<endl;
    }
}

//Based on reverse order
int main()
{
    int n,i;
    cout<<"Enter the number:";
    cin>>n;
    for(i=n;i>=1;i=i-1)
    {
        cout<<i<<" ";
    }
}

//Based on number from 1 to 100 but difference is 3
int main()
{
    int i;
    for(i=1;i<=100;i=i+3)
    {
        cout<<i<<" ";
    }
}
//Multiplication table making
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i=1;i<=10;i=i+1)
    {
        cout<<n*i<<endl;
    }
}

//Alternative way of multiplication table
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i=6;i<=60;i=i+6)
    {
        cout<<n*i<<endl;
    }

}
//Calculate the power of number
int main()
{
    int n,pow,i,num;
    cout<<"Enter the number";
    cin>>n;
    cout<<"Enter the power";
    cin>>pow;
    num=n;
    for(i=1;i<pow;i=i+1)
    {
        num=num*n;
    }
    cout<<num;
}

//sum of n natural number number
int main()
{
    int sum = 0;
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i=i+1)
    {
        sum = sum+i;
    }
    cout<<sum<<endl;
}
//sum of square of 'n' natural number
int main()
{
    int n;
    int sum =0;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    for(int i =1;i<=n;i++)
    {
        sum = sum + i*i;
    }
    cout<<sum<<endl;
}
//Factorial of number
int main()
{
    int n;
    int Factorial=1;
    cin>>n;
    for(int i =1;i<=n;i++)
    {
        Factorial = Factorial*i;
    }
    cout<<Factorial;

}
//check a number is prime number or not
int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    if(n<2)
    {
        cout<<"not prime";
        return 0;
    }
    else
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                cout<<"not prime";
                return 0;
            }                                            
        }
        cout<<"prime number";
    }
}

//Fibonacci series of a number
int main()
{
    int n;
    int c=1;
    cout<<"enter the number:";
    cin>>n;
    for(int i =1;i<=n;i++)
    {
        c = c+i;//or c = c*i;
    }
    cout<<c<<endl;
}