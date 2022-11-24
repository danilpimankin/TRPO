#ifndef STACK_H
#define STACK_H

#include "EStackEmpty.h"

template <class T> class Stack
{
public:
    void Push(const T &value); //помещение объекта в стек
    const T Pop(); //извлечение объекта из стека
    int Size(); //получение размерности стека
    void Clear(); //очистка стек
    ~Stack();//деструктор стека

private:
    struct Node //элемент стека
    {
        const T value_; //хранимое значение элемета стека
        Node* prev = nullptr; //указатель на предыдущий элемент стека
    };

    Node* top = nullptr; //вершина стека (стек пустой - вершины нет)
    int size = 0; //размерность стека
};

/*определения*/

template <class T> void Stack<T>::Push(const T &value)
{
    Node* new_node = new Node {value, top};
    top = new_node;
    size ++;
}

template <class T> const T Stack<T>::Pop()
{
    if (top == nullptr){
        throw EStackEmpty();
    }

    const T value = top->value_;
    Node* temp = top;
    top = top->prev;
    delete temp;
    size--;
    return value;
}

template <class T> int Stack<T>::Size()
{
    return size;
}

template <class T> void Stack<T>::Clear()
{
    while (top !=nullptr){
        Node* temp = top;
        top = top->prev;
        delete temp;
    }

}

template <class T> Stack<T>::~Stack<T>()
{
    Clear();
};


#endif // STACK_H
