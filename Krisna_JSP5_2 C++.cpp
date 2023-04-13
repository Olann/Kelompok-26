#include<iostream>
using namespace std;

int main (){
int var;
int var2;
int var3;
int* varptr = &var;
int* varptr2 = &var2;
int* varptr3 = &var3;
cout<<"var ="<<&var ;
cout<<"\nvar ="<<&var2 ;
cout<<"\nvar ="<<&var3 ;
cout<<"\nvarptr ="<<varptr;
cout<<"\nvarptr2 ="<<varptr2;
cout<<"\nvarptr3 ="<<varptr3;
}
