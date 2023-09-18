#include <iostream>
int heapsize = 0;
using namespace std;
int Right(int i)
{
    return 2*i + 1;
}
int Left(int i)
{
    return 2*i;
}
void maxHeapify(int *arr, int i)
{
    int l = Left(i);
    int r = Right(i);
    int largest;
    if(l <= heapsize && arr[l - 1] > arr[i - 1]){
        largest = l;
    }else
        largest = i;
    if(r <= heapsize && arr[r - 1] > arr[largest - 1]){
        largest = r;
    }
    if(largest != i){
        int t = arr[largest - 1];
        arr[largest - 1] = arr[i - 1];
        arr[i - 1] = t;
        maxHeapify(arr,largest);
    }

}
int main()
{
    heapsize = 8;
    int arr[] = {2,5,3,6,8,9,1,2};
    for(int i = heapsize/2 ;i >= 1; i--){
        maxHeapify(arr,i);
    }
    for(int j = 0;j < heapsize;j++ ){
        cout<<arr[j]<<" ";
    }
    cout<<endl;

}
