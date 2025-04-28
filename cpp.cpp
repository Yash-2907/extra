#include <iostream>
#include <cstdlib>
#include <fstream>
#include <unistd.h> // For sleep function
using namespace std;

int main()
{
    int tot;
    cout << "Enter number of commits to put in: ";
    cin >> tot;

    for (int i = 0; i < tot; i++)
    {
        // Open temp.txt and close it immediately (this is your file write step)
        ofstream f("temp.txt");
        f.close();

        // Git commands
        system("git add .");
        system(("git commit -m \"Commit number " + to_string(i) + "\"").c_str());
        system("git push origin main");

        // Sleep for 10 seconds
        sleep(10); // Sleep for 10 seconds (Unix-based systems)

        cout << "Done push " << i + 1 << "..." << endl;
    }

    return 0;
}
