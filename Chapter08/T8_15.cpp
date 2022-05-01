/*FileName:T8_15.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 30,2022
Function:
          a:print the sum of positive numbers
          b:calculte the average of seven numbers
          c:print the max number of a set of numbers inputed*/
#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int main()
{
    /const int read = 10;//从键盘将一个字读入到内存的特定位置
    const int write = 11;//将内存中特定位置的一个字写到屏幕
    const int load = 20;//将内存中特定位置的一个字载入到累加器
    const int store = 21;//将累加器中的一个字存储到内存中的特定位置
    const int add = 30;//将内存中特定位置的一个字加到累加器中的字中（结果保留在累加器中）
    const int subtract = 31;//从累加器中的字减去内存中特定位置的一个字（结果保留在累加其中）
    const int divide = 32;//累加器中的字除以内存中特定位置的一个字（结果保留到累加器中）
    const int multiply = 33;//内存中特定位置的一个字乘以累加器中的字（结果保留到累加器中）
    const int branch = 40;//转移到内存的特定位置
    const int branchneg = 41;//如果累加器是负值，转移到内存的特定位置
    const int branchzero =42;//如果累加器为零，转移到内存的特定位置
    const int halt = 43;//停止——程序已完成任务
    int a[100];
    int a1,b,c;
    int s=0;
    int sum=0;
    cin>>a1;
    while(s!=1)
    {
    b=a1/100;
    c=a1%100;
    switch(b)
    {
    case 10: int m;cin>>m;a[c]=m;break;
    case 11: cout<<a[c];break;
    case 20: sum+=a[c];break;
    case 21: a[c]=sum;break;
    case 30: sum += a[c];break;
    case 31: sum-= a[c];break;
    case 32: sum/=a[c];break;
    case 33: a[c]*=sum;break;
    case 40:  a[45]=sum;break;
    case 41:a[54]=sum;break;
    case 42: a[50]=sum;break;
    case 43:s=1;break;
    default :break;
    }
    cin>>a1;}
    cout<<sum;


    //a
    int bo[100];
    int a2=0;
    int sum=0;
    cin>>a2;
    int s=0;
    int b1,c1;
    while(s!=1)
    {
    b1=a2/100;
    c1=a2%100;
    switch(b1)
    {
    case 10: int m;cin>>m;
                    if(m>0)
                      bo[c1]=m;
                     else s=1;break;

    case 20: sum+=bo[c1];break;

    default:break;
    }
    cin>>a2;
    }
    cout<<sum;
    //b
    int number;
    int sum=0;
    for(int i=0;i<7;i++)
    {
        cin>>number;
        sum+=number;
    }
    cout<<sum/7;
    //c
    int num;
    int maxn;
    vector<int>n;
    while(num!=-1)
    {cin >> num;
    n.push_back(num);}
    maxn=n[0];


    for(int i=0;i<n.size();i++)
    {
        if(maxn<n[i])
            maxn=n[i];
            cout<<n[i]<<" ";

    }
    cout<<maxn;
    return 0;
}
