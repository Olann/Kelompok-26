#include <iostream>
using namespace std;

int main (){
int var = 2;
int var2 = 3;
int var3 = 4;

int* varptr = &var;
int* varptr2 = &var2;
int* varptr3 = &var3;

cout<<"\nnilai dari variabel  yang ditunjukkan varptr = "<<*varptr;
cout<<"\nnilai  dari variabel yang ditunjukkan varptr = "<<*varptr2;
cout<<"\nnilai  dari variabel yang ditunjukkan varptr = "<<*varptr3;
 
 return 0;
 
}

	
	
	
	

