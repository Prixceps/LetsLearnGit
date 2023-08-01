#include<iostream>

int main(){
    int n;
    std ::cout<<"enter size of array : ";
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       std:: cout<<"enter your number at "<<i+1<<" position :";
       std:: cin>>arr[i];
    }
    std::cout<<"reversed array is  {";
    for(int i=n-1;i>=0;i--){
       std:: cout<<arr[i]<<" ";
    }
    std::cout<<"}";
    return 0;
    
}