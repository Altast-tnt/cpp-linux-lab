#include <iostream>
#include <memory>
class Item
{
public:
	Item() { std::cout << "Item acquired\n"; }
	~Item() { std::cout << "Item destroyed\n"; }
};

class Something; // предположим, что Something - это класс, который может выбросить исключение

int main()
{
    doSomething(std::make_shared<Something>(), std::make_shared<Something>());

	auto ptr1 = std::make_shared<Item>();
	auto ptr2(ptr1);
    return 0;
}
