#include<iostream>

using namespace std ;

void insertionSort(int arr[] , int size)
{
    int hole = 0 ,value = 0;
    for(int i = 1 ; i < size ; i++)
    {
        value = arr[i] ;    
        hole=i;
        while(hole > 0 && arr[hole-1] > value)
        {
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole] = value;
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
    insertionSort(arr,10);
    for(int i = 0 ; i < 10 ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl ;
}