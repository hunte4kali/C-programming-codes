#include <stdio.h>
void sort_function(int arr[])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            if(arr[i]>arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr [j] = tmp;
            }
        }
           
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }
    

}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int arr[3];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    sort_function(arr);
    printf("\n%d\n%d\n%d", a, b, c);
    
    
    
    return 0;
}