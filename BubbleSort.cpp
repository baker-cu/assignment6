#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n)
{
      bool swapped = true;
      int j = 0;
      int tmp;
      while (swapped)
      {
            swapped = false;
            j++;
            for (int i = 0; i < n - j; i++)
            {
                  if (arr[i] > arr[i + 1])
                  {
                        tmp = arr[i];
                        arr[i] = arr[i + 1];
                        arr[i + 1] = tmp;
                        swapped = true;
                  }
            }
      }
}

void printArray(int arr[], int n)
{
    for (int i=0; i<n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
} 
