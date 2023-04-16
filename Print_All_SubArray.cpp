#include<iostream>
#include <vector>
using namespace std;
void printSubArray(vector<int>&arr , int start , int end){
   // base case 
   if(end == arr.size()){
    return;
   }


   for(int i = start ; i<=end ; i++){
      cout<<arr[i] <<" ";

   }
   cout<<endl;
   printSubArray(arr , start , end+1);

}

void print_UtilSubarray(vector<int>&arr){
    for(int start = 0 ; start<arr.size() ; start ++){
        int end = start;
        printSubArray(arr , start , end);
    }
}

int main(){

vector<int>arr ={1,2,3,4,5};
print_UtilSubarray(arr);

}