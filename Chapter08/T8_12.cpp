/*FileName:T8_12.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 30,2022
Function:simulate the return race according to the rules*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int moveTortoise(int n,int &place)
{
    if(n>=1&&n<=5)
        place += 3;
    else if(n>=6 && n <= 7)
        {
            place -= 6;
            if(place <= 0)
                place = 0;
        }
    else place += 1;
    return place;
}
int moveHare(int n,int &place2)
{
    if(n >= 1 && n <= 2)
        place2 += 0;
    else if(n >= 3 && n <= 4)
        place2 += 9;
    else if(n == 5)
        {
            place2 -= 12;
            if(place2 <= 0)
                place2 = 0;
        }
    else if(n >= 6 && n <= 8)
        place2 += 1;
    else place2 += 2;
    return place2;
}
int main()
{
    cout<< "BANG !!!!!" <<endl;
    cout<< "AND THEY'RE OFF !!!!!" <<endl;
    string a[70];
    string b[70];
    int place1=0;
    int place3 = 0;
    srand(static_cast<unsigned int >(time(0)));
    do
    {
        int m = 1 + rand()%10;

        place1 =moveTortoise( m,place1) ;
        place3 = moveHare(m,place3);

        if(place1 == place3)
    {
        a[place1]="OUCH!!!";
    }
        else
        {
            a[place1]="T";
            b[place3]="H";
        }

    for(int i=0;i<70;i++)//print a[70] b[70] to display the places of tortoise and hare
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<70;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    a[place1]=" ";
    b[place3]=" ";
    }
    while(place1 <70 && place3 <70 );
        if(place1 = place3 && place1 >= 70)
        cout<<"It's a tie. "<<endl;
    else {if(place1 >=70)
        cout<<"TORTOISE WINS!!! YAY!!!"<<endl;
    else
        if(place3 >=70)
        cout<<"Hare wins. Yuch. "<<endl;}
    return 0;
}
