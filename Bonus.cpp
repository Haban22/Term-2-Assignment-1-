#include <iostream>
#include <cstdlib>

using namespace std;

int worldRandomizer(int& worldA, int& worldB, int& cleanA, int& cleanB)
{
    int choice = rand() % 2;

    srand(time(NULL));

    if(choice == 1)
    {
        worldA = 1;
        worldB = 0;
    }
    else
    {
        worldB = 1;
        worldA = 0;
    }

    cleanA = rand() % 2;
    cleanB = rand() % 2;

    return 0;
}


int checkWorld()
{
    int worldA, worldB, cleanA, cleanB;

    if(worldA == 1)
    {
        if(cleanA == 1)
        {
            cout << "[A, Clean] Right\n";
            worldA = 0;
            worldB = 1;

        }
        else
        {
            cout << "[A, Dirty] Suck\n";
            cleanA = 1;
        }
    }
    if(worldB == 1)
    {
        if(cleanB == 1)
        {
            cout << "[B, Clean] Left\n";
            worldA = 1;
            worldB = 0;
        }
        else
        {
            cout << "[B, Dirty] Suck\n";
            cleanB = 1;
        }
    }
    return 0;
}



int main()
{
    int worldA, worldB, cleanA, cleanB;

    worldRandomizer(worldA, worldB, cleanA, cleanB);


    for (int i = 0; i <= 3; i++)
    {
        checkWorld();
    }

    
}