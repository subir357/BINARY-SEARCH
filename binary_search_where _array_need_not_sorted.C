#include<stdio.h>
#include<stdlib.h>


int binarySearch(int arr1[], int l, int r, int x);



int main(){
  int n,*arr1,i=0,x,l,r,result,j=0,tmp;

      //Asking user to inupt number of integer he want to input
  printf("Enter the arr1 elements in arr1 of integer\n" );
  scanf("%d", &n);


      //Dinamic memory allocation
  arr1 = (int*)malloc(n * sizeof(int));
  for(i=0;i<n;i++){
    printf("Enter %d th integer \n", i );
    scanf("%d",&arr1[i] );
  }
    //Sorting the array in ascending order
  for(i=0; i<n; i++){
    for(j=i+1; j<n; j++){
        if(arr1[j] <=arr1[i]){
            tmp = arr1[i];
            arr1[i] = arr1[j];
            arr1[j] = tmp;
        }
    }
}


    //Asking user to input integer to check if that is in the previous entry
  printf("Enter a integer x= " );
  while (scanf("%d", &x) != 1) {
    printf("Error: please enter a positive integer for the value of x\n");
    break;
  }
    //Using binarySearch to find if the element is in the previous entry
  l=arr1[0];
  r=arr1[n-1];
  result = binarySearch(arr1, 0, n - 1, x);
  (result != -1) ? printf("Element is not present in arr1ay")
                   : printf("Element is present at index %d in the sorted arr1ay\n",
                            result);

  return(0);
}

    //binarySearch algorethm
int binarySearch(int arr1[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr1[mid] == x){
            return mid;
        }

        if (arr1[mid] > x){
            return binarySearch(arr1, l, mid - 1, x);
        }
        else{
        return binarySearch(arr1, mid + 1, r, x);
      }
    }
    return -1;
}
