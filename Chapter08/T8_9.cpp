/*FileName:T8_9.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 30,2022
Function:write a statement to complete the task*/
#include <iostream>

using namespace std;

int main()
{
    //a
    long *longPtr;
    //b
    longPtr=&value1;
    //c
    cout<<"The value of longPtr is "<<longPtr <<endl;
    //d
    value2=*longPtr;
    //e
    cout<<"The value of value2 is "<<value2<<endl;
    //f
    cout<<"The address of value1 is "<<&value1<<endl;
    //g
    cout<<"The address of longPtr is "<<&longPtr<<endl;
    if(&value1 == &longPtr)
        cout<<"Yes" <<endl;
    else cout<< "No" <<endl;
    return 0;
}
