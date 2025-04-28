#include <iostream>
#include <cstdlib>
#include <fstream>
#include <unistd.h> // For sleep function on Linux/macOS
using namespace std;

int main()
{
    int tot;
    cout << "Enter number of commits to put in: ";
    cin >> tot;

    for (int i = 0; i < tot; i++)
    {
        // Open temp.txt and write a random number along with iteration number for uniqueness
        ofstream f("temp.txt", ios::app); // Open in append mode
        f << "Random number: " << rand() << " (Commit " << i << ")" << endl;
        f.close();

        // Git commands
        system("git add .");
        system(("git commit -m \"Commit number " + to_string(i) + "\"").c_str());
        system("git push origin main");

        // Sleep for 10 seconds
        sleep(5); // Sleep for 10 seconds (Unix-based systems)

        cout << "Done push " << i + 1 << "..." << endl;
    }

    return 0;
}
