#include <iostream>
using namespace std;
static int num = 2;
#include <chrono>
#include <thread>
int main()
{
    try
    {
        while (true)
        {
            cout << "\033[H\033[2J";

            if (num % 2 == 0)
            {
                cout << "ROFL:ROFL:LOL:" << endl;
                cout << "           A" << endl;
                cout << "       /--------" << endl;
                cout << " LOL====      []\\" << endl;
                cout << "  L    \\         \\" << endl;
                cout << "        \\---------]" << endl;
                cout << "           I     I" << endl;
                cout << "        -----------/" << endl;
            }

            else
            {
                cout << "         :LOL:ROFL:ROFL" << endl;
                cout << "           A" << endl;
                cout << "  L    /--------" << endl;
                cout << " LOL====      []\\" << endl;
                cout << "       \\         \\" << endl;
                cout << "        \\---------]" << endl;
                cout << "           I     I" << endl;
                cout << "        -----------/" << endl;
            }

            ++num;
            if (num == 2147483646)
                num = 2; // Reset and make it unlimited when reaching limit of int
            if ((num >= 2) && (num <= 10))
                std::this_thread::sleep_for(std::chrono::milliseconds(300));
            else if ((num > 10) && (num <= 20))
                std::this_thread::sleep_for(std::chrono::milliseconds(200));
            else if ((num > 20) && (num <= 30))
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
            else if ((num > 30) && (num <= 40))
                std::this_thread::sleep_for(std::chrono::milliseconds(90));
            else if ((num > 40) && (num <= 50))
                std::this_thread::sleep_for(std::chrono::milliseconds(80));
            else if ((num > 50) && (num <= 60))
                std::this_thread::sleep_for(std::chrono::milliseconds(70));
            else
                std::this_thread::sleep_for(std::chrono::milliseconds(60));
        }
    }
    catch (const std::exception &e)
    {
        
    }

    return 0;
}