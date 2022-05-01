/*FileName:T8_8.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 30,2022
Function:write a statement to complete the task*/
#include <iostream>

using namespace std;

int main()
{
    //a
    int SIZE=5;
    unsigned int values[SIZE]={2,4,6,8,10};
    //b
     unsigned int *vPtr;
     //c
     for(size_t i = 0; i < SIZE; i++)
        cout<<values[i];
     //d
     vPtr = values;
     vPtr = &values[0];
     //e
     for(size_t k = 0; k < SIZE; k++)
     {
         cout<<*( vptr +k) <<" ";
     }
     //f
     for(size_t k = 0; k < SIZE; k++)
     {
         cout<<*( values +k) <<" ";
     }
     //g
     for(size_t k = 0; k < SIZE; k++)
     {
         cout<<vPtr[k]<<" ";
     }
     //h
     values[4];
     *(values + 4);
     vPtr[4];
     *(vPtr + 4);


    return 0;
}
