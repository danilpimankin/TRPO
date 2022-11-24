#include "PersonKeeper.h"
#include <cstring>
#include <vector>
#include <sstream>


PersonKeeper::PersonKeeper() {};

PersonKeeper::~PersonKeeper() {};

PersonKeeper &PersonKeeper::Instance()
{
    static PersonKeeper instance;
    return instance;
}


void PersonKeeper::readPersons(std::ifstream & tmp)
{
    std::string str;
    while(getline(tmp, str)) //читаем файл построчнo, каждую строку файла пишем в str,
    {
        std::vector <std::string> vecstr;
        std::string word;
        std::stringstream s(str);
        while (s >> word) vecstr.push_back(word);
       name_stack.Push(Person (vecstr[0], vecstr[1], vecstr[2]));
    }
}

void PersonKeeper::writePersons(std::ofstream & tmp)
{
    Person pers;
    while (name_stack.Size() > 0){
       pers = name_stack.Pop();
    tmp << pers.getLastName() <<" "<< pers.getFirstName() <<" "<< pers.getPatronymic()<< "\n";
    }
}
