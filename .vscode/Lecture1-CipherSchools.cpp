#include <bits/stdc++.h>
using namespace std;

void mergeSortedArrays(vector<int>&a, int m,vector<int>&b,int n){
    int i=m-1,j=n-1,k=m+n-1;
    while(i>=0 && j>=0){
        if(a[i]>b[j]){
            a[k]=a[i];
            i--;

        }
        else{
            a[k]=b[j];
            j--;
        }
        k--;
    }
    while(j>=0){
        a[k]=b[j];
        j--;
        k--;
    }
     for(int i=0;i<8;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
   vector<int>b(4);
    vector<int>a(8);
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    a[3] = 40;
     
     b[0] = 8;
    b[1] = 34;
    b[2] = 43;
    b[3] = 53;
       
    mergeSortedArrays(a,4,b,4);
   
    return 0;

}