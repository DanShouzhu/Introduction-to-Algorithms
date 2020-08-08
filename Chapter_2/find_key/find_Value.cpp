
#include <iostream>
using namespace std;

int find(int* A, int key, int len)
{
    for(int i = 0; i<len; i++){
        if(A[i] == key){
            cout<<"The number have been found."<<endl;
            key = A[i];
            break;
        }
        key = NULL;
        cout<<"The number cannot be found."<<endl;
    }
    return key;
}
int main(int argc, char* argv[]){
    int len;
    cout <<"How many numbers will you input:"<<endl;
    cin>>len;
    
    
    int* A = new int[len];
    cout <<"Please input some number:"<<endl;
    for(int i = 0;i<len;i++)
        cin >>A[i];
    
    int value = NULL;
    cout <<"Please input the number you wanna find:"<<endl;
    cin>>value;
    
    int key;
    key = find(A, value, len);
}
