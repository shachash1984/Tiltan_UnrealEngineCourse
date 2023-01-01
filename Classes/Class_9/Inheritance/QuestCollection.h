#pragma once

#include "QuestBase.h"
#include "Achievement.h"

class QuestCollection : public QuestBase
{
public:
	QuestCollection();
	QuestCollection(int _id, std::string _name, std::string _description, unsigned int _itemsRequired);
	~QuestCollection();
	void Update() override;
	void AddItemsCollected(unsigned int _itemsCollected);
	void Print() const;

private:
	unsigned int itemsCollected;
	unsigned int itemsRequired;
	Achievement* achievement;
};