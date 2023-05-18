//  datatype name [row size ][column size ]; declaration of 2d array 
//  array is kind of matrix  int m[3][5] so it will be called as 3x5 matrix 
// to access the particular number of the matrix syntax is int array[2][3] first row number then column no
// at compile time int a[2][3] = {{0,0,0},{1,1,1}}; 
// also int a [2][3] = {0,0,0,1,1,1};
// to calculate number of element of in 2d array multiply row x column 
// program to scan or to take input from user ;
#include<stdio.h>
int a[2][3];
int main (){
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            scanf("%d", &a[i][j]);

        }  
    }
    return 0 ;
    }