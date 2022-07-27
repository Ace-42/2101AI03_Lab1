#include <stdio.h>
void swap(int *a, int *b) {
  int temp=*a;
  *a=*b;
  *b=temp;
}
int main() {
  int i,j,n;
  printf("Enter how many numbers are for input: ");
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++){
      printf("Enter element %d: ",i+1);
      scanf("%d",&arr[i]);
  }
  void insertionsort(int array[], int size){
   int temp;
   for(i=1;i<n;i++){
         temp=arr[i];
         j=i-1;
         while((temp<arr[j])&&(j>=0)){
            arr[j+1]=arr[j];
            j=j-1;
         }
         arr[j+1]=temp;
      }
      printf("The elements in sorted order: ");
      for(i=0;i<n;i++){
         printf("%d ",arr[i]);
      }
  }
  void bubblesort(int array[],int size){
      for (int i=0;i<size-1;i++) {
      for(int j=0;i<size-j-1;j++){
         if (array[j]>array[j+1]){
         int temp=array[j];
         array[j]=array[j+1];
         array[j+1]=temp;
         }
      }
   }
   printf("The elements in sorted order: ");
      for(i=0;i<n;i++){
         printf("%d ",arr[i]);
      }
  }
   void selectionsort(int array[],int size){
      for (int step = 0; step < size - 1; step++) {
      int min_idx = step;
      for (int i = step + 1; i < size; i++) {
         if (array[i] < array[min_idx]){
         min_idx = i;
         }
      }
      swap(&array[min_idx], &array[step]);
      }
      printf("The elements in sorted order: ");
         for(i=0;i<n;i++){
            printf("%d ",arr[i]);
         }
      }
  insertionsort(arr,n);
  bubblesort(arr,n);
  selectionsort(arr,n);
  return 0;
}
