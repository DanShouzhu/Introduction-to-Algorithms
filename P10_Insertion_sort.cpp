#include<iostream>
using namespace std;

void sort(int* A, int len)
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
    int A[len] = {31, 41, 59, 26, 41, 58}; // heap 栈数组
    // int* A = new int[6]; // stack 堆数组
    // cout<<sizeof(int)<<endl;
    // cout<<sizeof(A)<<endl;

    sort(A, len);
    for(int j=0;j<len;j++){
        cout << A[j] << endl;
    }
    return 0;
}