#include<iostream>
using namespace std;
 
int main (){
int var = 3;
int var2 = 4;
int var3 = 8;

int* varptr = &var;
int* varptr2 = &var2;
int* varptr3 = &var3;

cout<<"\nnilai dari variabel  yang ditunjukkan varptr = "<<*varptr;
cout<<"\nnilai  dari variabel yang ditunjukkan varptr = "<<*varptr2;
cout<<"\nnilai  dari variabel yang ditunjukkan varptr = "<<*varptr3;
}


