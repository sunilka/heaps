#include<stdio.h>
#include<stdlib.h>

int a[10];
int n=6;

void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void print()
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

void deleteheap()
{
    int ele = a[n-1];
    a[0] = ele;
    n--;
    int parentindex = 0;
    int lchildindex = (2 * parentindex + 1);
    int rchildindex = (2 * parentindex + 2);

    while(lchildindex < (n-1) && rchildindex < (n-1))
    {
        if( a[lchildindex] > a[rchildindex])
        {
            swap(&a[parentindex],&a[lchildindex]);
            parentindex = lchildindex;
        }

        else
        {
            swap(&a[parentindex],&a[rchildindex]);
            parentindex = rchildindex;
        }
        lchildindex = (2*parentindex +1);
        rchildindex = (2*parentindex +2);
    }
}

void insert(int childvalue)
{
    int childindex  = 5;
    int parentindex = (childindex - 1 )/2;
    a[5] = childvalue;

    while(parentindex >=0 && a[parentindex] < childvalue)
    {
        parentindex = (childindex - 1)/2;
        //swapping operation
        int temp = a[parentindex];
        a[parentindex] = childvalue;
        a[childindex] = temp;
        childindex = parentindex;
        //new parent
        parentindex  = (childindex -1)/2;
    }
}

int main()
{

    a[0] = 90;
    a[1] = 75;
    a[2] = 90;
    a[3] = 25;
    a[4] = 50;
    a[5] = 30;

    printf("\n the heap before deleting was :\n");
    print();
    printf("\n the heap after deleting is :\n");

    deleteheap();
    print();
    printf("\n");
    deleteheap();
    print();
}
