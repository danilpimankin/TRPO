#ifndef PERSON_H
#define PERSON_H


#include <string>

class Person
{
public:
    Person();
    Person (std::string _last_name, std::string _first_name, std::string _patronymic);
    Person(const Person&);

    void setLastName(const std::string&);
    void setFirstame(const std::string&);
    void setPatronymic(const std::string&);
    const std::string& getLastName() const { return last_name; }
    const std::string& getFirstName() const { return first_name; }
    const std::string& getPatronymic() const { return patronymic; }

private:
    long key;
    std::string last_name;
    std::string first_name;
    std::string patronymic;
};




#endif // PERSON_H
