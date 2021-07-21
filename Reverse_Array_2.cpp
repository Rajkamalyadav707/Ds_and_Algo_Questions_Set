#include<bits/stdc++.h>
using namespace std; 

int main(){

int arr[]={1,2,3,4,5,6}; // array declearation

int size = *(&arr+1)-arr;//to find the size of an array 

int *p ; //pointer variable

p = new int(size); // dynamic memory allocation

for (int i = 0,j = size - 1; i < j; ++i,j--)
{
  int temp = arr[i]; //initlizing the temp value with arr[i]

  arr[i]=arr[j]; //swap first element of array to the last element of arrray
  
  arr[j]=temp;  //store it to the temp
}
for (int i = 0; i < size; ++i)
{
  cout<<arr[i]<<" "; //excessing the values of the array
}
  return 0 ; 
}
