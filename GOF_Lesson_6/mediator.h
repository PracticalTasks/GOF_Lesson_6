#pragma once
#include<vector>
#include<memory>
#include<string>
#include"LevelGUI.h"


class Mediator
{
public:
	Mediator(LevelGUI* _pLevelGui) :pLevelGui(_pLevelGui) {}
	void say(std::string str)
	{
		pLevelGui->strQue.push(str);
	}

private:
	LevelGUI *pLevelGui;
};
