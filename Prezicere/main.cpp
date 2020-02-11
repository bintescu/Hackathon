#include <iostream>
#include <cstring>
#include <time.h>
#include <windows.h>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout ("ValoriStiri.txt");
    int b=rand()%10;
    int min = -1;
    for(int i=-100;i<100;i++)
    {

    srand(time(NULL));
    float a = (-min)*(i + rand()%7 + (-min)*b)%5;
     Sleep(100);
    srand(rand());
    fout<<a<<"\n";
    }
    cout<<endl<<"\n";
    fout.close();

    return 0;
}
