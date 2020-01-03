//Lab1-1 WP
#include <stdio.h>
void display(int A[],int len);
void printArray(int B[],int i, int len);
void printArrayRev(int B[],int i, int len);
int main(){
    int A[100] = {15,24,56,13,97,66,48,6,90,33};//update wah
    int length=10;
    int i,X,Y,Z;
    int flag=-1;

    //(a)PRINTING ARRAY USING LOOP
    for(i=0;i<length;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");

    //(b)INSERTING ANY VALUE AT 10th INDEX
    A[10] = 99;
    length++;
    display(A,length);

    //(c)UPDATING 5th INDEX WITH ANOTHER VALUE
    A[5] = 21;
    display(A,length);

    //(d)SEARCH FOR ANY VALUE IN THE ARRAY
    printf("Search for any value: ");
    scanf("%d",&X);
    for(i=0;i<length;i++){
        if(A[i]==X){
            flag=i;
            break;
        }
    }

    if(flag != -1)
        printf("Found & index is %d\n",flag);
    else
        printf("Not Found\n");

    //(e)INSERTING ANY VALUE AT 3rd INDEX AND SHIFTING ALL OTHER VALUE TO RIGHTT
    printf("Insert a value at 3rd index: ");
    scanf("%d",&Y);
    for(i=length-1;i>2;i--){
        A[i+1] = A[i];
    }

    A[3] = Y;
    length++;
    display(A,length);

    //(f)DELETING ANY VALUE FROM Zth INDEX AND SHIFTING ALL OTHER VALUE TO LEFT
    printf("Delete value from index of: ");
    scanf("%d",&Z);
    for(i=Z;i<length;i++){
        A[i] = A[i+1];
    }

    length--;
    display(A,length);

    //(g)PRINTING ARRAY WITH RECURSION
    printf("PRINTING ARRAY WITH RECURSION\n");
    printArray(A,0,length);

    //(h)PRINTING ARRAY WITH RECURSION IN REVERSE ORDER
    printf("\nPRINTING ARRAY WITH RECURSION IN REVERSE ORDER\n");
    printArrayRev(A,0,length);
    return 0;
}

void display(int A[],int len){
    int i;
    for(i=0;i<len;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
}

void printArray(int B[],int i, int len)
{
    if(i>=len)
        return;

    printf("%d\t", B[i]);
    printArray(B,i+1, len);
}
void printArrayRev(int B[],int i, int len)
{
    if(i>=len)
        return;

    printArrayRev(B,i+1, len);
    printf("%d\t", B[i]);
}

