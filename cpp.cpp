#include <iostream>
#include <cstdlib>
#include <fstream>
#include <unistd.h>
using namespace std;
int main()
{
    int tot=3;
    for (int i = 0; i < tot; i++)
    {
        ofstream f("temp.txt", ios::app);
        f << "Random number: " << rand() << " (Commit " << i << ")" << endl;
        f.close();
        system("git add .");
        system(("git commit -m \"Commit number " + to_string(i) + "\"").c_str());
        system("git push origin main");
        sleep(3);
        cout << "Done push " << i + 1 << "..." << endl;
    }
    return 0;
}
