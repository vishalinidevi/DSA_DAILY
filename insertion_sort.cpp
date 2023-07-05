#include<iostream>
using namespace std;
void insertionSort(int a[])
{
    int i=0,j=0;
    int key;
    for(int i=1;i<5;i++)
    {
        key = a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }


}

int main()
{
    int arr[5] = {3,6,9,7,1};
    cout << "UNSORTED ARRAY" << endl;
    for(int i=0;i<5;i++)
    {
        cout << arr[i] <<" ";
    }
    cout  << endl;

    insertionSort(arr);

    cout << "SORTED ARRAY" << endl;

    for(int i=0;i<5;i++)
    {
        cout << arr[i] <<" " ;
    }
    cout << endl;




    return 0;
}