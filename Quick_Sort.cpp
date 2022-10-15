#include <iostream>
using namespace std;

int Partition(int arr[], int s , int e)
{
    int pivot = arr[e];
    int pIndex = s;
    for(int i =s;i<e;i++){
        if(arr[i]<pivot){
            int temp = arr[i];
            arr[i]=arr[pIndex];
            arr[pIndex]= temp;
            pIndex++;
        }
    }
    int temp = arr[e];
            arr[e]=arr[pIndex];
            arr[pIndex]= temp;

    return pIndex;

}

void quicksort(int arr[], int s, int e){
    if(s<e){
        int p = Partition(arr,s,e);
        quicksort(arr,s,p-1);
        quicksort(arr,p+1,e);

    }
}

int main(){
    cout<<"Enter size of array"<<endl;
    int n ;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements"<<endl;
    for (int i =0; i <n;i++)
    {
        cin>>arr[i];
    }

    quicksort(arr,0,n-1);
    for (int i =0; i <n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;

}