#include <stdio.h>
#define SIZE 15
int arr[SIZE];
int n;
void input_arr()
{
    int i;
    printf("enter the size of array : ");
    scanf("%d", &n);
    if (n > 15)
    {
        printf("OVERFLOW");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            printf("enter value of %d element : ", i + 1);
            scanf("%d", &arr[i]);
        }
    }
}
void print_arr()
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("value of %d element is : %d\n ", i + 1,arr[i]);
    }
}
void delete_arr(){
    int i,k;
    printf("enter position of element to remove : ");
    scanf("%d", &k);
    for(i = k ; i<n-1 ; i++){
        arr[i]=arr[i+1];
    }
    n--;
}
void insert_arr( int x){
    int i,k;
    printf("enter position of element to add : ");
    scanf("%d", &k);
    for(i = n ; i>=k ; i--){
        arr[i+1]=arr[i];
    }
    arr[k]=x;
    n++;
}
int main()
{
    input_arr();
    print_arr();
    insert_arr(69);
    print_arr();
    delete_arr();
    print_arr();
    return 0;
}
