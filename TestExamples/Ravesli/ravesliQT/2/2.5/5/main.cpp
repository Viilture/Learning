#include <QCoreApplication>
#include <QTextStream>

int main(int argc, char *argv[])
{
    QTextStream out(stdout);

    QString s1 = "Eagle";

    QString s2 = "Eagle\n";

    QString s3 = "Eagle ";

    QString s4 = "орел";

    out << s1.length() << "\n";
    out << s2.length() << "\n";
    out << s3.length() << "\n";
    out << s4.length() << "\n";

    return 0;
}
