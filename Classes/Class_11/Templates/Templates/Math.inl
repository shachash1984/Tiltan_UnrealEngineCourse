#pragma once

template <typename T>
T Max(T a, T b) //should we always copy?
{
	return a < b ? b : a;
}