#pragma once
#include<memory>
template <typename T>
class Factory
{
	public:
		std::shared_ptr<T> Create();
};

template<typename T>
inline std::shared_ptr<T> Factory<T>::Create()
{
	return std::make_shared<T>();
}
