#include <QCoreApplication>
#include <iostream>

#include <QTextStream>


int main(int argc, char *argv[])
{   using namespace std;
    QString a = "Rectangle";
    QTextStream out(stdout);

    out << a[0] << "\n";

    out << a[5] << "\n";

    out << a.at(0) << "\n";



    return 0;
}
