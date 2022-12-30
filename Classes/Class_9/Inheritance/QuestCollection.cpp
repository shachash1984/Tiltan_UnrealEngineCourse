#include "QuestCollection.h"

#include <iostream>

QuestCollection::QuestCollection()
	: QuestBase()
	, itemsCollected(0)
	, itemsRequired(1)
	, achievement(new Achievement(id, "Default"))
{
	std::cout << "QuestCollection " << name << " constructor called" << std::endl;
}

QuestCollection::QuestCollection(int _id, std::string _name, std::string _description, unsigned int _itemsRequired)
	: QuestBase(_id, _name, _description)
	, itemsCollected(0)
	, itemsRequired(_itemsRequired)
	, achievement(new Achievement(_id, "Achievement for " + _name))
{
	std::cout << "QuestCollection " << name << " Created!" << std::endl;
}

QuestCollection::~QuestCollection()
{
	delete achievement;
	std::cout << "QuestCollection " << name << " Destroyed!" << std::endl;
}

void QuestCollection::AddItemsCollected(unsigned _itemsCollected)
{
	itemsCollected += _itemsCollected;
}

void QuestCollection::Print() const
{
	const std::string status = IsCompleted() ? "Completed" : "In Progress";
	std::cout << "**QuestCollection** Name: " << name << " Description:" << description << " Status: " << status << std::endl;
}

void QuestCollection::Update()
{
	//QuestBase::Update();

	progress = (static_cast<float>(itemsCollected) / static_cast<float>(itemsRequired));
	progress *= 100.0f;

	if (progress > 100.0f)
	{
		progress = 100.0f;
	}

	std::cout << "QuestCollection " << name << " Updated!" << std::endl;
}
