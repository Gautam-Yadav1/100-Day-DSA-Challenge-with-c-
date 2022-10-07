#include <iostream>

using namespace std;
void binarysearch(int arr[] ,int low ,int high, int num)
 {
         if(low>high){
         cout<<"Element not found";
         }
         else{
        int mid = (low+high) /2;
         if(arr[mid] == num) {
             cout<<"element found at index :"<<mid;
             exit(0);
         }
         else if(arr[mid]>num){
             binarysearch(arr,low,mid-1,num);
         }
         else{
          binarysearch(arr,mid+1,high,num);
         }
     }
 }

int main()
{
    int n,num,low = 0;
    cout<<"enter the size of array :";
    cin>>n;
    if(n<1){
        cout<<"Enter the valid size";
    }else{
    int arr[n];
    int high = n;
    cout<<"enter the "<<n<<" elements in sorted sequence :"<<endl;
     for(int i = 0;i<n;i++){
         cin>>arr[i];
     }
     cout<<"enter the desired elemen t to search for :";
     cin>>num;
       binarysearch( arr, low,high,num);
 }
}

