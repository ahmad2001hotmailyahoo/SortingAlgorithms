#include<iostream>
#include<math.h>

using namespace std ;

void bubbleSort(int arr[] , int size)
{
    for(int i = 0 ; i < size-1 ; i++)
    {
        for(int j = 0 ; j < size-1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}


int main()
{
        int arr[10] = {0} ;
    cout << "Ënter the elements" << endl ;
    for(int i = 0 ; i < 10 ; i++)
    {
            cin >> arr[i] ;
    }

    cout << "The sorted array is " << endl ;
    bubbleSort(arr,10);
    for(int i = 0 ; i < 10 ; i++)
    {
            cout << arr[i] << " ";
    }
    cout << endl ;
}