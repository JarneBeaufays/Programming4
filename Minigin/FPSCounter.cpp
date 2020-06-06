#include "MiniginPCH.h"
#include "FPSCounter.h"
#include "Time.h"
#include "Font.h"

FPSCounter::FPSCounter(std::shared_ptr<dae::Font> font)
	: m_Text{ "0", font }
	, m_Current{ 0.f }
{
	m_Text.SetPosition(10.f, 10.f);
}

void FPSCounter::Update()
{
	m_Text.SetText(std::to_string(Time::GetInstance().GetFPS()));
	m_Text.Update();
}

void FPSCounter::Render() const
{
	m_Text.Render();
}
