/*FileName:T8_16.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 30,2022
Function:input a set of numbers and report error information*/
#include <iostream>
#include <vector>
#include <stdexcept>
#include <cmath>

using namespace std;

int main()
{
   int num;
   cin>>num;
   int s=0;
   vector<int >memory;
   while(num!=-1)
   {
       memory.push_back(num);

       while(abs(num)>9999)
       {
           cout<<"please input a number again. "<<endl;
           cin>>num;
           s=1;}
       if(s==0)
        cin>>num;
   }
   int sum=0;
   for(int i=0;i<memory.size();i++)
   {
       sum+=memory[i];
   }
   if(abs(sum)>9999)
   {
       cout<<"***Attempt to divide by zero ***"<<endl;
       cout<<"*** Simpletron execution abnormally terminated ***"<<endl;
   }
    return 0;
}
