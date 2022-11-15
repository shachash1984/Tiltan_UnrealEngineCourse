#pragma once

struct Point 
{
	private:
		int x, y, z;

	public:
		Point();
		int GetX() { return x; }
		int GetY() { return y; }
		int GetZ() { return z; }
};