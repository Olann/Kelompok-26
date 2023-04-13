#include<stdio.h>
 
int main(){
int var;
int var2;
int var3;

int* varptr = &var;
int* varptr2 = &var2;
int* varptr3 = &var3;

printf("alamat dari var = %p \n", &var);
printf("alamat dari var2 = %p \n", &var);
printf("alamat dari var3 = %p \n\n", &var);


printf("alamat dari varptr = %p\n",&varptr);
printf("alamat dari varptr 2 = %p\n",&varptr);
printf("alamat dari varptr 3 = %p\n",&varptr);

}	#include<iostream>
using namespace std;
 
int main (){
int var;
int var2;
int var3;

int* varptr = &var;
int* varptr2 = &var2;
int* varptr3 = &var3;

cout<<"alamat memori var ="<<&var ;
cout<<"\nalamat memori var ="<<&var2 ;
cout<<"\nalamat memori var ="<<&var3 ;
 
cout<<"\nalamat memori varptr ="<<varptr;
cout<<"\nalamat memori varptr2 ="<<varptr2;
cout<<"\nalamat memori varptr3 ="<<varptr3;
}

