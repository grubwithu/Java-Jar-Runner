#include <QCoreApplication>
#include <iostream>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    if(argc != 2)return 0;
    char front[100] = "start /B javaw -jar ";
    char *str = strcat(front,argv[1]);
    system(str);
    return 0;
}
