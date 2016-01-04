#include <stdio.h>
#define N 5

int top = -1 ;

void isEmpty(int a[])
{
    if(top == -1)
        printf("Your stack is empty !\n") ;
    else
        printf("Stack is not empty it contains %d elements.",top+1);
}

void pop(int a[],int n)
{
    if(top != -1)
    {
        top -= 1;
        printf("element removed.\n");
    }

    else
        printf("Your stuck is empty.!\n");
}

void push(int a[],int n)
{
     int p ;

     if(top != n-1)
     {
        printf("Enter the number to pop in stuck.\n");
        scanf("%d",&p);
        a[top+1]=p;
        top += 1;
    }
    else
        printf("Your stuck is full.\n");

}

void show(int a[],int n)
{
    int i ;

    printf("Your stuck is: ");
    for(i = 0; i < top+1; i++)
        printf("%3d ",a[i]);
    printf("\n");
}

void shutdown()
{
    printf("Shuting down.\n");

}
int main(void)
{
    int stuck[N];
    int answer = 1;

    while (answer != 5)
    {
        printf("Enter your choice: \n");
        printf("1.Push \n");
        printf("2.Pop \n");
        printf("3.Show \n");
        printf("4.IsEmpty\n");
        printf("5.Exit \n");

        scanf("%d",&answer);

        switch(answer){
            case 1:
                push(stuck,N);
                break;
            case 2:
                pop(stuck,N);
                break;
            case 3:
                show(stuck,N);
                break;
            case 4:
                isEmpty(stuck);
                break;
            case 5:
                shutdown();
                break;
            }
    }
    return 0;
}
