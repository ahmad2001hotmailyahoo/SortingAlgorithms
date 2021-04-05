#include<iostream>
#include<math.h>

using namespace std ;

void selectionSort(int arr[] , int size)
{
    int iMin = 0 ;
    for(int i = 0 ; i <= size-2 ; i++)
    {
        iMin = i ;
        for(int j = i ; j <= size-1 ;j++)
        {
            if(arr[iMin] > arr[j])
            {
                iMin = j ;
            }
        }
        swap(arr[i],arr[iMin]);
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
    selectionSort(arr,10);
    for(int i = 0 ; i < 10 ; i++)
    {
            cout << arr[i] << " ";
    }
    cout << endl ;
}