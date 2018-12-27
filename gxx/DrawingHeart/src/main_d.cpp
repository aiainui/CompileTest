/*************************************************************************
	> File Name: main_d.cpp
	> Author: dyl
	> Mail: denyulong@100tal.com
	> Created Time: Wed 26 Dec 2018 06:01:43 PM CST
 ************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

void proc()
{
    int i = 0;
    cout<< "程序正在启动中.......\n";
    for (i = 1; i <=100; i++)//首先打印出100个等号，增强进度条的效果
    {
        cout<<"=";
    }
    
    for (i = 1; i <= 100; i++)
    {
        cout << "\r" << "[" << i << "\%" << "]";//在这一行的首位置打印出进度条百分比
        for (int j = 1; j <= i; j++)
        {
            cout << ">";
            usleep(1000);//让程序休眠一会儿，以防进度条过快完成
        }   
    }
    //system("pause");//暂停程序，查看效果
    //system("cls");
}

void print()
{

}


int main()
{
    proc();
}
