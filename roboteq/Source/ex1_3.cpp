#include <iostream>
#include <stdio.h>
#include <string.h>
#include "RoboteqDevice.h"


using namespace std;

int main(int argc, char *argv[])
{
    for(int i = 0; i < 10; i++)
    {
        cout<<"Wait for: "<<10 - i<<" second(s)."<<endl;
        //sleepms(1000);
        int milliseconds = 1000;
        RoboteqDevice device;
        sleepms(milliseconds * 1000);
    }
    return 0;
}