#include<iostream>
using namespace std;

/// Descending the given one dimention array
/// @param A one dimention array
/// @param len length of the array
void sort_descending(int* A, int len)
{
    for(int j=1;j<len;j++){
        int key = A[j];
        int i = j-1;
        
        while(i>=0 & A[i]<key){
            A[i+1] = A[i];
            i--;
        }
        A[i+1]=key;
    }
}


/// Ascending the given one dimention array
/// @param A the given one dimenntion array
/// @param len the lenth of the array
void sort_ascending(int* A, int len)
{
    for(int j=1;j<len;j++){
        int key = A[j];
        int i = j-1;
        
        while(i>=0 & A[i]>key){
            A[i+1] = A[i];
            i--;
        }
        A[i+1]=key;
    }
}

int main()
{
    int len = 6;
//    int A[6] = {31, 41, 59, 26, 41, 58}; // heap 栈数组
     int* A = new int[6]; // stack 堆数组
    A[0] = 31;    A[1] = 41;    A[2] = 59;
    A[3] = 26;    A[4] = 41;    A[5] = 58;
    // cout<<sizeof(int)<<endl;
    // cout<<sizeof(A)<<endl;

    sort_ascending(A, len);
    cout<<"Ascending"<<endl;
    for(int j=0;j<len;j++){
        cout << A[j]<<' ' ;
    }
    
    cout<<endl<<"Descending"<<endl;
    sort_descending(A, len);
    for(int j=0;j<len;j++){
        cout << A[j] <<' ';
    }
    return 0;
}
