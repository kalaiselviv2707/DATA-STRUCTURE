//program to implement list as arrays


#include<stdio.h>
#define MAX 50

//Global Declaration
int arr[MAX],num,pos,loop;
void delete()
{
 if(num == 0){
    printf("array is empty.delete not possible.\n ");
    return ;
 }
    printf("Enter position to delete(1 to %d):",num+1);
    scanf("%d",&pos);
    if(pos<1||pos>num){
          printf("Invalid position.\n");
          return ;
    }
     for( int i=pos-1;i<num-1;i++){
        arr[i]=arr[i+1];
     }
     num--;
     printf("Element deleted successfully.\n");

     printf("Array after deleted:\n");
     for(int i=0;i<num;i++){
        printf("%d ",arr[i]);
     }
     printf("\n");
}
int main()
{
   printf("Enter the number of to be used\n");
   scanf("%d",&num);
   printf("Enter the elements:");
   for(int i=0;i<num;i++)
   {
        scanf("%d",&arr[i]);
   }
   delete();
}
