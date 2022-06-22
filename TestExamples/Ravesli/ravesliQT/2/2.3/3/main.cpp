#include <QCoreApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    // Инициализация №1: Традиционный вариант
    QString str1 = "The night train";
    std::cout << str1.toStdString() << std::endl;

    // Инициализация №2: Объектный способ
    QString str2 ("A Yellow rose");
    std::cout << str2.toStdString() << std::endl;

    // Инициализация №3
    std::string s1 = "A blue sky";
    QString str3 = s1.c_str();
    str3 = "sa";

    // Инициализация №4
   std::string s2 = "A thick fog";
   QString str4 = QString::fromLatin1(s2.data(),s2.size());
   std::cout << str4.toStdString() << std::endl;

   // Инициализация №5
   char s3[] = "A deep forest";
   QString str5(s3);
   std::cout << str5.toStdString() << std::endl;

    return 0;
}
