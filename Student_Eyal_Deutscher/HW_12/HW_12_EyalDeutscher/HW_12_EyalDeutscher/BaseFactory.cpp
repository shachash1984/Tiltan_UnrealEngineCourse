#include "BaseFactory.h"
template<typename T>
BaseFactory<T>::BaseFactory()
{
}
template<typename T>
shared_ptr<T> BaseFactory<T>::Create(string name)
{
	return make_shared<T>;
}
