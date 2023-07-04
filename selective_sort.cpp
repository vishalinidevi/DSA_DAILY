#include<iostream>
using namespace std;

void selectionSort(int a[])
{
    for(int i=0;i<4;i++)
    {
        int min = i;
        for(int j=i+1;j<5;j++)
        {
            if(a[j] < a[min]) // compare like this > i get the decending order 
            {
                min = j;
            }
        }
        if(min != i)
        {
            int temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }
}

int main()
{
    int arr[] = {3,6,4,2,7};
    cout << "UNSORTED ARRAY" <<  endl;
    for(int i=0;i<5;i++)
    {
        cout << arr[i] << " " ;
    }
    cout <<  endl;
    selectionSort(arr);

     cout << "SORTED ARRAY"  <<  endl;
    for(int i=0;i<5;i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;

    return 0;
}