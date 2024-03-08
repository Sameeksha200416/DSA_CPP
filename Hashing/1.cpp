#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    //Precompute
    int hash[13] = {0};
    for(int i=0;i<a;i++){
        hash[arr[i]] +=1;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //Fetch
        cout<<hash[number]<<endl;
    }
}