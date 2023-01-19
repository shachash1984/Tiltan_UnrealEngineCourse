#include "Animation.h"

Animation::Animation()
{
  
}

Animation::~Animation()
{
}

Animation::Animation(Animation& other)
{
    _name = other._name;
}

Animation& Animation::operator=(const Animation& other)
{
    _name = other._name;
    return *this;
}

void Animation::Play()
{
    std::cout << _name << "\n";
}
