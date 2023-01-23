#pragma once

template <typename T>
class Achievement
{
private:
	T count;

public:
	Achievement(T _count) : count(_count) {};
	T operator+=(T const& other) { return count = count + other; }
	T GetCount() const { return count; }


};


template <>
class Achievement<Pickup>
{
	private:
	int count;

public:
	Achievement(int _count) : count(_count) {};
	int operator+=(Pickup const& other) { return count = count + other.value; }
	int GetCount() const { return count; }
};