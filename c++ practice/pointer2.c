// pointer to pointer - when one pointer store address of any variable and its pointers address is store by
// any another pointer is known by pointer to pointer 
//  syntax for pointer to pointer is - int **pptr 
#include<stdio.h>
int main (){
    int day = 6;
    int  *ptr = &day;
    int **pptr = &ptr;
    return 0;
}
