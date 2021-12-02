#include <iostream>

struct Data
{
	unsigned int	x;
};

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main()
{
	uintptr_t	nb;
	Data		*des = NULL;
	Data		*ptr = new Data;

	ptr->x = 42;
	nb = serialize(ptr);
	des = deserialize(nb);
	std::cout << "ptr address : " << ptr << std::endl;
	std::cout << "ptr value : " << ptr->x << std::endl;
	std::cout << "des address : " << des << std::endl;
	std::cout << "des value : " << des->x << std::endl;
	delete ptr;
	return 0;
}
