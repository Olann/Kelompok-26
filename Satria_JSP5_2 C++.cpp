#include<iostream>
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


