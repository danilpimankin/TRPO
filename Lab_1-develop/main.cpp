#include <QCoreApplication>

#include <iostream>
#include <string>

using namespace std;

#include "EStackEmpty.h"
#include "Stack.h"

#include "PersonKeeper.h"

void readfile (ifstream& tmp)
{
    char ch;
    while (tmp.get(ch)) {
    cout<<"0"<<ch;
    }
}


int main(int argc, char *argv[])
{
    //Считываем из файла
    ifstream instr ("C:\\Users/tikho/Documents/Lab_1/Name_Source.txt"); //Пока не разобрался с открытием файлов не на локальной машине, "File.txt" не видит
    if (!instr) cout << "error";
    PersonKeeper::Instance().readPersons(instr);
    instr.close();

    //Записываем в файл
    ofstream outstr ("C:\\Users/tikho/Documents/Lab_1/Name_Reciever.txt");
    PersonKeeper::Instance().writePersons(outstr);
    outstr.close();


    return 0;
    //a.exec();

}
