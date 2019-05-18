
#include <iostream>
#include "QuickSort.cpp"
#include "InsertionSort.cpp"
#include "BubbleSort.cpp"
#include "HeapSort.cpp"
#include <fstream>
#include <ctime>
using namespace std;

int main(int argc, char* argv[])
{

//------------Bubble Sort-------------------------------------------------------
    cout<<"Bubble Sort:"<<endl;
    ifstream file(argv[1]);

    string line;
    getline(file,line);
    int arr_leng = stoi(line);

    int* list = new int[arr_leng]();
    for(int x = 0; x<arr_leng; x++)
    {
        getline(file,line);
        int next = stoi(line);
        list[x] = next;
    }

    clock_t time;

    time = clock();
    bubbleSort(list,arr_leng);
    time = clock() - time;
    cout<<time<<" seconds"<<endl;

    file.close();

//-------------Insertion Sort--------------------------------------------------------
    cout<<"Insertion Sort"<<endl;
    ifstream file2(argv[1]);

    getline(file2,line);
    int arr_leng2 = stoi(line);

    int* list2 = new int[arr_leng2]();
    for(int x = 0; x<arr_leng2; x++)
    {
        getline(file2,line);
        int next = stoi(line);
        list2[x] = next;
    }

    clock_t time2;

    time2 = clock();
    insertionSort(list2,arr_leng2);
    time2 = clock()-time2;
    cout<<time2<<" seconds"<<endl;

    file.close();

//---------------Quick Sort----------------------------------------------------
    cout<<"Quick Sort"<<endl;
    ifstream file3(argv[1]);

    getline(file3,line);
    int arr_leng3 = stoi(line);

    int* list3 = new int[arr_leng3]();
    for(int x = 0; x<arr_leng3; x++)
    {
        getline(file3,line);
        int next = stoi(line);
        list3[x] = next;
    }

    clock_t time3;

    time3 = clock();
    quickSort(list3,0,arr_leng3-1);
    time3 = clock()-time3;
    cout<<time3<<" seconds"<<endl;

    file.close();

//---------------------Heap Sort------------------------------------------------
    cout<<"Heap Sort"<<endl;
    ifstream file4(argv[1]);

    getline(file4,line);
    int arr_leng4 = stoi(line);

    int* list4 = new int[arr_leng4]();
    for(int x = 0; x<arr_leng4; x++)
    {
        getline(file4,line);
        int next = stoi(line);
        list4[x] = next;
    }

    clock_t time4;

    time4 = clock();
    heapSort(list4,arr_leng4);
    time4 = clock()-time4;
    cout<<time4<<" seconds"<<endl;

    file.close();

    return 0;
}
