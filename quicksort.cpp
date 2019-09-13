//Quick sorting

#include <iostream>
#include <string>
using namespace std;

void qs(int[],int,int);
int ps(int[],int,int);

void prntAry(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
}
int main()
{
     int a[] = {10, 21, 15, 11, 1, 4};
    int n = sizeof(a) / sizeof(a[0]);
    qs(a, 0, n - 1);
    cout << "Sorted array: \n";
    prntAry(a, n);
    return 0;
}


int ps(int a[],int l,int u){
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;
    do{
        do
        i++;
        while (a[i]<v && i<=u);
        do
        j--;
        while(v<a[j]);
        if (i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
}while(i<j);
a[l]=a[j];
a[j]=v;
return (j);
}

void qs (int a[],int l, int u){
    int j;
    if (l<u){
        j=ps (a, l, u);
        qs(a,l,j-1);
        qs(a,j+1, u);
        }

}
