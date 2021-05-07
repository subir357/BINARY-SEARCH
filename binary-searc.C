#include<stdio.h>
#include <math.h>
int binarysearch(int *arr, int l, int m,int j);


int main(){
  int n,i,j;
  int *arr;
  printf("Number of integer in the array\n" );
  scanf("%d",&n );
  printf("Enter the number you want to search\n" );
  scanf("%d",&j );
  arr=(int*) malloc(n * sizeof(int));
  for(i=0;i<n;i++){
    printf("Enter the %d th elemrnt of the array \n",(i+1) );
    scanf("%d",&arr[i]);
  }
  binarysearch(arr,0,n-1,j);
  return 0;

}

//binary search algorethm
int binarysearch(int *arr, int l, int m,int j){
  int s;
  while (l <= m){
    s=((l+m)/2);
    if(arr[l]>j){
      printf("%d is not in the array\n", j);
      break;
    }
    else if(arr[m]<j){
      printf("%d is not in the array\n", j);
      break;
    }
    else{
      if(arr[s]==j){
        printf("the number %d present at %d\n", j,(s+1));
        break;
      }
      else if(arr[s]>j){
        m=s-1;
      }
      else if(arr[s]<j){
        l=s+1;
      }
    }
  }
  return -1;
}
