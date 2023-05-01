// Program to implement merge sort
// TC - O(nlog(n))
#include<iostream>
using namespace std;

void merge(int arr[], int s, int m, int f){
    int L=m-s+1;
    int R=f-m;
    int r[R];
    int l[L];

    for(int i=0;i<L;i++){
        l[i]=arr[s+i];
    }

    for(int j=0;j<R;j++){
        r[j]=arr[m+1+j];
    }

    int i=0,j=0,k=s;

    while(i<L && j<R){
        if(l[i]<=r[j]){
            arr[k]=l[i];
            i++;
        } else{
            arr[k]=r[j];
            j++;
        }
        k++;
    }

    while(i<L){
        arr[k]=l[i];
        i++;
        k++;
    }

    while(j<R){
        arr[k]=r[j];
        j++;
        k++;
    }

}

void mergeSort(int arr[],int s,int f){
    if (s<f){
        int m=s+(f-s)/2;
        mergeSort(arr,s,m);
        mergeSort(arr,m+1,f);
        merge(arr,s,m,f);   
    }
}

int main(){
    int a[]={7,2,9,15,11,6,3,1};
    int len=sizeof(a)/sizeof(a[0]);
    mergeSort(a,0,len-1);
    for(auto i:a){
        cout<<i<<" ";
    }
    return 0;
}