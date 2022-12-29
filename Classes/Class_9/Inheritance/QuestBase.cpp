#include "QuestBase.h"

#include <iostream>

QuestBase::QuestBase()
	: id(0)
	, name("Default")
	, description("Default")
	, progress(0.0f)
	
{
	std::cout << "QuestBase " << name << " Created!" << std::endl;
}

QuestBase::QuestBase(int _id, std::string _name, std::string _description)
	: id(_id)
	, name(_name)
	, description(_description)
	, progress(0.0f)
	
{
	std::cout << "QuestBase " << name << " Created!" << std::endl;
}

QuestBase::~QuestBase()
{
	
	std::cout << "QuestBase " << name << " Destroyed!" << std::endl;
}

bool QuestBase::IsCompleted() const
{
	return progress >= 100.0f;
}

void QuestBase::Update()
{
	std::cout << "QuestBase " << name << " Updated!" << std::endl;
}

void QuestBase::Print() const
{
	const std::string status = IsCompleted() ? "Completed!" : "In Progress...";
	std::cout << "**QuestBase** Name: " << name << " Description:" << description << " Status: " << status << std::endl;
}
