#include <iostream>
#include <list>
class ASet
{
private:
    std::list<int> sum;
    int _a;
    int _b;
public:
    ASet();
    ASet(int a, int b);
    ASet(int b);      // a по умолчанию 0
    ~ASet();
    void incl(int obj);  // включить число в множество
                     // если такое число уже есть, то ничего не делать
    void excl(int obj);  // исключить
    bool contain(int obj); // содержится в множестве?
    void print(); // распечатать состояние объекта
};
