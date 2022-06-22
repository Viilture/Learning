#include <QCoreApplication>

#include <QTextStream>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

  QTextStream out(stdout);

  // Создаем строку типа QString
  QString a = "love";

  // Добавляем текст в конец строки
  a.append(" chess");

  // Добавляем текст в начало строки
  a.prepend("I ");

  // Выводим строку
  cout << a.toStdString() << endl;

  // Выводим количество символов строки
  cout << "The a string has " << a.count() << " characters" << endl;

  // Выводим всю строку в верхнем регистре
  cout << a.toUpper().toStdString() << endl;

  // Выводим всю строку в нижнем регистре
  cout << a.toLower().toStdString() << endl;

  return 0;
}
