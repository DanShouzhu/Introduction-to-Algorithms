//
//  main.cpp
//  divide-Conquer
//
//  Created by Cecil Dan on 8/8/20.
//  Copyright © 2020 Cecil Dan. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;



/// <#Description#>
/// @param A One dimension array with number
/// @param s Start index
/// @param m Middle index
/// @param e End index
void merge(int* A, int s, int m, int e)
{
    int n1 = m-s+1;
    int n2 = e-m;
    int* L = new int[n1];
    int* R = new int[n2];
    for(int i = 0; i<n1; i++){  // Left array
        L[i] = A[s+i];
    }
    for(int j = 0; j<n2; j++){  // Right array
        R[j] = A[m+j+1];
    }
    
    L[n1] = R[n2] = 1e5;
    
    for(int k = s, i = 0, j = 0; k<=e; k++){
        if(L[i]<=R[j]){
            A[k] = L[i];
            i++;
        }
        else{
            A[k] = R[j];
            j++;
        }
    }
}


/// Divide-Conquer Algorithm
/// @param A One dimension array with number
/// @param s Start index
/// @param e End index
void merge_sort(int* A, int s, int e)
{
    if(s<e){
        int m = floor((s+e)/2);
        merge_sort(A, s, m);
        merge_sort(A, m+1, e);
        merge(A, s, m, e);
    }
}


int main(int argc, const char * argv[])
{
    int len = 8;
    int A[]={6,5,4,3,2,1,5,3};
    merge_sort(A, 0, len-1);
    for(int i = 0; i<len;i++)
        cout << A[i] <<endl;
    return 0;
}
