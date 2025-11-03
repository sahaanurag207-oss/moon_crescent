#include<iostream>
using namespace std;
int main()
{
int  n,digit;
cout<<"enter range : ";
cin>>n;
int arr[n];

//array input 
for(int i=0;i<n;i++)
{
    cout<<"enter the "<<i<<"th element of the array : ";
    cin>>arr[i]; 
}
//array output
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
cout<<endl;
// array element finding // linear searching //
cout<<"digit = ";
cin>>digit;
for(int i=0;i<n;i++){
    if(arr[i]==digit)
    cout<<"The element position is  : " <<i;
}
//inserting the element 
int ins;
cout<<"enter the element : ";
cin>>ins;
//new array
int arr1[n+1];

for (int i = 0; i < n; ++i) {
        arr1[i] = arr[i];
}
arr1[n+1] == ins;

// newarray output
for(int i=0;i<n+1;i++)
{
cout<<arr1[i]<<" ";
}
cout<<endl;
cout<<ins;

return 0;

}