#include <iostream>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
    system("color 5e");
    int lagi, pilih;
    a:cout<<"=============================="<<endl;
    cout<<"selamat datang di game kumarayana"<<endl;
    cout<<"================================="<<endl;
    cout<<"kamu pilih ?" << "\n\n";
    cout<<" 1. Gajah, \n 2. semut, \n 3. orang" << "\n";
    cout<<"silakan dipilih 1/2/3 : => ";
    cin>>pilih;
    if (pilih===1)
    {
        cout<<" computer  = Gajah" << "\n\n";
        cout<<"==========="<<endl;
        cout<<"==>seri<==="<<endl;
        cout<<"==========="<<endl;
    }
    else if (com<=6 && com>=4)
    {
        cout<<"computer = orang" << "\n\n";
        cout<<"================"<<endl;
        cout<<"===>kamu menang<"<<endl;
        cout<<"================"<<endl;
    }
    else
    {
        cout<<"computer = semut" << "\n\n";
        cout<<"================="<<endl;
        cout<<"==>kamu kalah<==="<<endl;
        cout<<"================="<<endl;
    }cout << endl;
}
else if(pilih==2)
{
    cout<<"\n kamu = semut"<<endl;
    srand(time(NULL));
    int com = rand() % 10;
    if (com<=3 && com>=1)
    {
        cout<<"computer = semut" << "\n\n";
        cout<<"=================="<<endl;
        cout<<"==> seriii !<====="<<endl;
        cout<<"=================="<<endl;
    }
    else if (com<=6 && com>=4)
    {
        cout<<"computer = Gajah" << "\n\n";
        cout<<"================="<<endl;
        cout<<"===>kamu menang<="<<endl;
        cout<<"================="<<endl;
    }
    else 
    {
        cout<<"computer = orang" << "\n\n";
        cout<<"================="<<endl;
        cout<<"===>kamu kalah<=="<<endl;
        cout<<"================="<<endl;
    }
}
else if (pilih==3)
{
    cout<<"\n kamu = orang"<<endl;
    srand(time(NULL))
    int com = rand() % 10;
    if (com<=3 && com>=1)
    {
        cout<<"computer = orang" << "\n\n";
        cout<<"=================="<<endl;
        cout<<"====> seri <======"<<endl;
        cout<<"=================="<<endl;
    }
    else if (com<=6 && com>=4)
    {
        cout<<"computer = semut" << "\n\n";
        cout<<"================="<<endl;
        cout<<"===>kamu menang<="<<endl;
        cout<<"================="<<endl;
    }cout << endl;
}
else
{
    cout<<"yang anda pilih salah input !!"<<endl;
}

cout<<"pilih lagi = [0] : ";
cin>>lagi;b:

if (lagi==0)
{
    system("clear")
    goto a;
}