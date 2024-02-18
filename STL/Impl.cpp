#include<iostream>
#include<vector>
using namespace std;
int main()
{
 /* //create vector,declare
    vector<int>v;
    vector<int>v1(5,1);
    //size and capacity
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(3);
    v.push_back(10);
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;
    //update value
    v[1]=5;
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;
    v.push_back(8);
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;
 
   //Delete value from vector
   vector<int>vnew;
   vnew.push_back(4);
   vnew.push_back(41);
   vnew.push_back(42);
   vnew.push_back(91);
   vnew.push_back(40);
   vnew.pop_back();
   cout<<"Size of v: "<<vnew.size()<<endl;
   cout<<"Capacity of v: "<<vnew.capacity()<<endl;
   //erase
   vnew.erase(vnew.begin()+1);
   cout<<"Size of v: "<<vnew.size()<<endl;
   cout<<"Capacity of v: "<<vnew.capacity()<<endl;
   for(int i=0;i<vnew.size();i++)
   cout<<vnew[i]<<" ";

   //insert value
   vnew.insert(vnew.begin()+1,50);
   cout<<endl;
   vnew[1]=37;
   for(int i=0;i<vnew.size();i++)
   cout<<vnew[i]<<" ";

   //Remove all element
   vnew.clear();
   cout<<"Size of v: "<<vnew.size()<<endl;
   cout<<"Capacity of v: "<<vnew.capacity()<<endl;
*/ 
   //copy value of 1 vector to another
   vector<int>arr;
   arr.push_back(2);
   arr.push_back(21);
   arr.push_back(12);
   arr.push_back(29);
   arr.push_back(222);
   cout<<arr[0]<<endl;
   cout<<arr.front()<<endl;
   cout<<arr[arr.size()-1]<<endl;
   cout<<arr.back()<<endl;
   vector<int>a;
   //copy value of 1 vector to another

   a=arr;
   cout<<a.size();
   cout<<endl;
   for(auto it = arr.begin();it!=arr.end();it++)
   {
    cout<<*it<<" ";
   }
   cout<<endl;
   for(auto i: arr)
   cout<<i<<" ";
   




}