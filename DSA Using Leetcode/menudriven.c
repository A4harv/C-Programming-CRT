#include <stdio.h>
#define MaxSize 100
int stack[MaxSize];
int index1 = -1;

int Add(int value)
{
    if (index1 < MaxSize - 1) {
        stack[++index1] = value;
    } else {
        printf("Stack overflow\n"); 
    }
}

int Delete()
{
    if (index1 >= 0) {
        return stack[index1--];
    } else {
        printf("Stack underflow\n");
        return -1;
    }
}

int Display()
{
    if (index1 == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= index1; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int Exit()
{
    printf("Exit.");
}
int main()
{
    int choice = 0;
    int index1 = 0;
    do {
        printf("1.Add\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter Your Choice: \n");
        scanf("%d", &choice);
        
        switch (choice) {
        case 1: {
            int value;
            printf("Enter value to add: ");
            scanf("%d", &value);
            Add(value);
            printf("\nElement is added\n");
            break;
        }
        case 2:
            if (Delete() != -1) {
                printf("\nElement is deleted\n");
            }
            break;
        case 3:
            Display();
            break;
        case 4:
            Exit();
            break;
        default:
            printf("Invalid choice!\n");
            break;
        }
    }while (choice != 4);
    return 0;  
}

