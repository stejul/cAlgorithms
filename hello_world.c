#include <stdio.h>
int x = 100; 
int myNumbers[] = {25, 50, 75, 100};

char myString[] = "Hello this is a string, that is in reality a array of chars";

//pointers
int myAge = 23;
int* ptr = &myAge;

int main()
{
    if(x > 10) {
        printf("Hello world: %d", myNumbers[0]);
        printf("String printing: %s", myString);
        printf("--------------\n");

        printf("myAge: %d \n", myAge);
        printf("myAge but with pointer &: %p\n", &myAge);
        printf("myPointerAge: %p\n", ptr);
        printf("my pointer with dereference: %d\n", *ptr); //*varName => dereference
        return 0;
    }
}