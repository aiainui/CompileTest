/*************************************************************************
	> File Name: main_d.cpp
	> Author: dyl
	> Mail: denyulong@100tal.com
	> Created Time: Wed 26 Dec 2018 06:01:43 PM CST
 ************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include "../include/Drawing.h" 
using namespace std;

void proc()
{
    int i = 0;
    cout<< "程序正在启动中.......\n";
    for (i = 1; i <=100; i++)
    {
        cout<<"=";
    }
    
    for (i = 1; i <= 100; i++)
    {
        cout << "\r" << "[" << i << "\%" << "]";
        for (int j = 1; j <= i; j++)
        {
            cout << ">";
            usleep(1000);
        }   
    }
    //system("pause");//暂停程序，查看效果
    //system("cls");
}

