#include<stdio.h>

int main(){
int var= 1;
int var2= 2;
int var3=3;
int* varptr= &var;
int* varptr2= &var2;
int* varptr3= &var3;
printf("\nnilai yang ditunjukkan varptr = %d", *varptr);
printf("\nnilai yang ditunjukkan varptr2 = %d", *varptr2);
printf("\nnilai yang ditunjukkan varptr3 = %d", *varptr3);
}		

	 

