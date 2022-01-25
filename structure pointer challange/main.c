#include <stdio.h>
#include <stdlib.h>

struct item
{
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct item *ptr);

void printItem(struct item *ptr);

int main()
{
    struct item item1;
    struct item *pitem1;

    pitem1 = &item1;

    pitem1->itemName = (char*)malloc(30 * sizeof(char));

    if(pitem1 == NULL)
        exit(-1);

    //read item
    readItem(pitem1);

    //print item
    printItem(pitem1);

    free(pitem1->itemName);

    return 0;
}

void readItem(struct item *ptr)
{
    printf("Enter Product name : ");
    scanf("%s", ptr->itemName);

    printf("Enter quantity : ");
    scanf("%d", &ptr->quantity);

    printf("Enter price : ");
    scanf("%f", &ptr->price);

    ptr->amount = (float)ptr->quantity * ptr->price;

}

void printItem(struct item *ptr)
{

    printf("\nItem details\n");
    printf("Item name : %s\n", ptr->itemName);

    printf("Price : %.2f\n", ptr->price);

    printf("Quantity : %d\n", ptr->quantity);

    printf("Amount : %.2f", ptr->amount);

}
