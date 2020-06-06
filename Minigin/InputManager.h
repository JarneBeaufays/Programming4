#pragma once
#include <XInput.h>
#include "Singleton.h"
#include "Button.h"

namespace dae
{
	enum class ControllerButton
	{
		ButtonA,
		ButtonB,
		ButtonX,
		ButtonY
	};

	class InputManager final : public Singleton<InputManager>
	{
	public:

		InputManager();

		bool ProcessInput();
		bool IsPressed(ControllerButton button) const;
	
	private:

		void InitializeControls();
		void HandleControllerInput() const;

		XINPUT_STATE m_CurrentState{};
		Button *buttonY = nullptr;
		Button *buttonX = nullptr;
		Button *buttonA = nullptr;
		Button *buttonB = nullptr;
	
	};
}
