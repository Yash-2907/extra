#include <iostream>
#include <cstdlib>
#include <fstream>
#include <unistd.h>
using namespace std;

int main()
{
    int tot;
    cout << "Enter number of commits to put in: ";
    cin >> tot;
    for (int i = 0; i < tot; i++)
    {
        ofstream f("temp.txt");
        f.close();
        system("git add .");
        system(("git commit -m \"Commit number " + to_string(i) + "\"").c_str());
        system("git push origin main");
        usleep(10000000);
        cout << "Done push " << i + 1 << "..." << endl;
    }
    return 0;
}
