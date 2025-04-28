#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    system("git add .");
    system("git commit -m \"this is push from cpp\"");
    system("git push origin main");
    cout<<"done...";
    return 0;
}