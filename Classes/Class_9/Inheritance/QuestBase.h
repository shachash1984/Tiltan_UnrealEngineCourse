#pragma once
#include <string>



class QuestBase

{

public:
	QuestBase();
	QuestBase(int _id, std::string _name, std::string _description);
	virtual ~QuestBase();
	bool IsCompleted() const;
	virtual void Update();
	void Print() const;

protected:
	int id;
	std::string name;
	std::string description;
	float progress;
	
};
