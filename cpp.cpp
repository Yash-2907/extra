#include<iostream>
#include<cstdlib>
#include<fstream>
#include<unistd.h>
using namespace std;
int main(){
    int tot;
    cout<<"enter number of commits to put in : ";
    cin>>tot;
    for(int i=0;i<tot;i++)
    {
        std::ofstream f("temp.txt");
        f << rand();
        system("git add .");
        system("git commit -m \"this is push from cpp\"");
        system("git push origin main");
        usleep(10000000);
        cout << "done push " << i << "...";
    }
    return 0;
}