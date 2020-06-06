#pragma once
#include "GameObject.h"
#include "Transform.h"
#include "TextObject.h"
#include "Time.h"

class FPSCounter : public dae::GameObject
{
public:
	FPSCounter(std::shared_ptr<dae::Font> font);
	void Update() override;
	void Render() const override;

private:
	dae::TextObject m_Text;
	float m_Current;

};

