#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter your number at"<<i+1<<"th position";
        cin>>arr[i];
    }
    cout<<"reversed array is";
    for(int i=n-1;i>=0;i--){
        cout<<arr[i];
    }
    return 0;
    
}