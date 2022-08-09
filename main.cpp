#include <QCoreApplication>
#include <iostream>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    if(argc != 2)return 0;
    char front[1024] = "start /B javaw -jar \"";
    char *str = strcat(front,argv[1]);
    int length = static_cast<int>(strlen(str));
    str[length] = '\"';
    str[length+1] = '\0';
    system(str);
    return 0;
}
