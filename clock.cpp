#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;
int main()
{
   	//getting local time
    time_t t = time(NULL);
    tm *timePtr = localtime(&t);
   	//store local time in variables
    int sec = (timePtr->tm_sec);
    int min = (timePtr->tm_min);
    int hours = (timePtr->tm_hour);
    string timestr;
   	//convert time to 12 hrs format
    if (hours > 12)
    {
        hours = hours % 12;
        timestr = "PM";
    }
    else
    {
        timestr = "AM";
    }
    while (true)
    {
        system("cls");
       	//printing time
        cout << "\n\nProgrammopedia Clock Local time\n";
        cout << "_______________________________\n\n";
        cout << "      |" << hours << " : " << min << " : " << sec << " " << timestr << " |" << endl;
        cout << "_______________________________\n\n";
       	//increment sec min and hours	
        sec++;
        if (sec > 59)
        {
            sec = 0;
            min++;
        }
        if (min > 59)
        {
            min = 0;
            hours++;
        }
        if (hours > 12)
        {
            hours = 1;
        }
        Sleep(1000);
    }
    return 0;
}
