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
    /const int read = 10;//�Ӽ��̽�һ���ֶ��뵽�ڴ���ض�λ��
    const int write = 11;//���ڴ����ض�λ�õ�һ����д����Ļ
    const int load = 20;//���ڴ����ض�λ�õ�һ�������뵽�ۼ���
    const int store = 21;//���ۼ����е�һ���ִ洢���ڴ��е��ض�λ��
    const int add = 30;//���ڴ����ض�λ�õ�һ���ּӵ��ۼ����е����У�����������ۼ����У�
    const int subtract = 31;//���ۼ����е��ּ�ȥ�ڴ����ض�λ�õ�һ���֣�����������ۼ����У�
    const int divide = 32;//�ۼ����е��ֳ����ڴ����ض�λ�õ�һ���֣�����������ۼ����У�
    const int multiply = 33;//�ڴ����ض�λ�õ�һ���ֳ����ۼ����е��֣�����������ۼ����У�
    const int branch = 40;//ת�Ƶ��ڴ���ض�λ��
    const int branchneg = 41;//����ۼ����Ǹ�ֵ��ת�Ƶ��ڴ���ض�λ��
    const int branchzero =42;//����ۼ���Ϊ�㣬ת�Ƶ��ڴ���ض�λ��
    const int halt = 43;//ֹͣ�����������������
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
