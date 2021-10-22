#include <iostream>

using namespace std;

void mergeSort(int input[], int size){
    int i=si;
    int j=mid+1;
    int k=0;
    int arr[ei-si+1];
    while(i<=mid && j<=ei){
        if(input[i]>input[j]){
            arr[k]=input[j];
            k++;
            j++;
        }
        else{
            arr[k]=input[i];
            k++;
            i++;
        }
    }
    while(i<=mid){
        arr[k]=input[i];
        k++;
        i++;
        
    }
    while(j<=ei){
        arr[k]=input[j];
        k++;
        j++;
        
    }
    k=0;
    for(int i=si;i<=ei;++i){
        input[i]=arr[k];
        k++;
    }
    return ;
}





void mergeSort_helper(int a[], int si, int ei)
    {
        
        if(si>=ei)
        {
            return;
        }
        int mid = (si+ei)/2;
        mergeSort_helper(a, si, mid);
        mergeSort_helper(a, mid+1, ei);
        merge(a, si,mid, ei);
        return ;
  }





void mergeSort(int input[], int size)
{
    mergeSort_helper(input,0,size-1);
    return;
	
        
}


int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}
