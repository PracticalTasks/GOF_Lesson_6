#pragma once

#include <stdint.h>
#include "mediator.h"

#include "DestroyableGroundObject.h"

class Tank : public DestroyableGroundObject
{
public:
	Tank()
	{
		mesVec.push_back("\"!!!!!\"");
		mesVec.push_back("\"!?@&!\"");
		mesVec.push_back("\"?????\"");
		
	}
	bool __fastcall isInside(double x1, double x2) const override;
	inline uint16_t GetScore() const override { return score; }
	void Draw() override;
	void setMediator(std::shared_ptr<Mediator> pMed);

private:
	std::vector<std::string> mesVec;
	std::shared_ptr<Mediator> mediator;
	const uint16_t score = 30;
};

