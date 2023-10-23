#include<stdio.h>
#include<stdlib.h>
//BUBBLE SORTING
void bubbleSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                 int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}
//INSERTION SORTING
void insertSort(int a[],int n){
    for(int i=1;i<n;i++){
      int temp =a[i];
        int j=i-1;
        while(j>=0&&a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
//SELECTION SORTING
void selectSort(int a[], int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]) {
                min=j;
            }
        }
        if(min!=i){
           int t=a[i];
           a[i]=a[min];
           a[min]=t; 
        }
    }
}
//PRINTING THE ARRAY 
void printARRAY(int a[], int n){
    for(int k=0;k<n;k++){
        printf("%d \t",a[k]);
    }
}
int main(){
    //int a[]={23,69,27,184,9};
    //int n= sizeof(a)/sizeof(a[0]);
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf(" \nunsorted shit \n");
    printARRAY(a,n);
    //bubbleSort(a,n);
    //insertSort(a,n);
    selectSort(a,n);
    printf("\nYO BITCHES, The Sorted Array is here: \n");
    printARRAY(a,n);

}
