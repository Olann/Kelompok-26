#include <iostream>
using namespace std;

int main()
{
    int var1 = 2, var2 = 5, var3 = 10;
    int *pVar = &var1;

    cout<<"var1 = "<<&var1<<endl;
    cout<<"pVar = "<<pVar<<endl;
pVar=&var2;
    cout<<"var2 = "<<&var2<<endl;
    cout<<"pVar = "<<pVar<<endl; pVar=&var3;
    cout<<"var3 = "<<&var<<endl;
    cout<<"pVar = "<<pVar<<endl;

    return 0;
}

