/*Write a program to implement Quicksort.
 Also implement one of the slow sorts (Bubble, Insertion...). 
 After you have tested both, generate a very large array (30,000 or more)  
 of bytes and sort increasingly larger portions of the array (5000, 10000, ..., 30000) 
 with both algorithms. 
Draw a graph of execution time versus number of elements for both algorithms. 
What are your conclusions? 
Programmar: Bradley Stillings*/ 
#include <iostream>
using namespace std;

void output(int *a, int n)
{
    int i=0;
    while(i<n){
        cout<<a[i]<<",";
        i++;
    }
}

void position_Change(int i,int k, int *a){
    int variable = a[i];
    a[i] = a[k];
    a[k] = variable;
}


void quicksort(int *array, int l, int r){
    int minimum_Value = (l+r)/2;
    cout<<"QuickSort:"<<l<<","<<r<<"\n";

    int i = l;
    int k = r;
    int pivot = array[minimum_Value];

    while(l<k || i<r)
    {
        while(array[i]<pivot)
        i++;
        while(array[k]>pivot)
        k--;

        if(i<=k){
            position_Change(i,k,array);
            i++;
            k--;
        }
        else{
            if(l<k)
                quicksort(array, l, k);
            if(i<r)
                quicksort(array,i,r);
            return;
        }
    }
}


int main() {
    cout << "Before QuickSort Operation :" << endl;
    
    int array[10] = {1000, 5, 10,50000 ,2200, 5000, 1, 10000,3000,4250};
    quicksort(array, 0, (sizeof(array)/sizeof(array[0]))-1);
    output(array, (sizeof(array)/sizeof(array[0])));
    return 0;
}


