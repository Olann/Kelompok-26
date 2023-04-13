#include<iostream>
using namespace std;

int main (){
int var = 5;
int var2 = 6;
int var3 = 7;
int* varptr = &var;
int* varptr2 = &var2;
int* varptr3 = &var3;
cout<<"\nnilai dari variabel  yang ditunjukkan varptr = "<<*varptr;
cout<<"\nnilai  dari variabel yang ditunjukkan varptr = "<<*varptr2;
cout<<"\nnilai  dari variabel yang ditunjukkan varptr = "<<*varptr3;
}
