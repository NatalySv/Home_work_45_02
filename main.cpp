#include <QCoreApplication>
#include <QArrayData>
#include <iostream>
#include <windows.h>
#include <array>
#include <algorithm>
#include <time.h>

void rand_num(std::array<int, 20> &mymass)
{
    srand(time(NULL));
    qDebug() << "Вхідний масив: ";
    for (int i = 0; i < 20; i++)
    {
        mymass[i] = rand () %50;
        std::cout << mymass[i] << " ";
    }
    std::cout << std::endl;
    return;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::array<int, 20> mymass;
    rand_num(mymass);

    int min = mymass[0];
    int max = mymass[0];

    for (int i = 1; i < 20; i++)
    {
        if (mymass[i] < min)
        {
            min = mymass[i];
        }
        if (mymass[i] > max)
        {
            max = mymass[i];
        }

    }
    qDebug() << "\nМінімальне число масива = " << min << "\n";
    qDebug() << "\nМаксимальне число масива = " << max << "\n";


    return a.exec();
}


