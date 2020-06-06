#include "MiniginPCH.h"
#include "InputManager.h"
#include <SDL.h>


dae::InputManager::InputManager()
{
	InitializeControls();
}

void dae::InputManager::InitializeControls()
{
	// In here we define what button is connected to what command
	buttonA = new Button(new JumpCommand());
	buttonB = new Button(new JumpCommand());
	buttonX = new Button(new JumpCommand());
	buttonY = new Button(new JumpCommand());
}

bool dae::InputManager::ProcessInput()
{
	// Keyboard input
	SDL_Event e;
	while (SDL_PollEvent(&e)) {
		if (e.type == SDL_QUIT) {
			return false;
		}
		if (e.type == SDL_KEYDOWN) {
			
		}
		if (e.type == SDL_MOUSEBUTTONDOWN) {
			
		}
	}

	// Controller input via XInput
	ZeroMemory(&m_CurrentState, sizeof(XINPUT_STATE));
	XInputGetState(1, &m_CurrentState);
	HandleControllerInput();

	return true;
}

bool dae::InputManager::IsPressed(ControllerButton button) const
{
	switch (button)
	{
	case ControllerButton::ButtonA:
		return m_CurrentState.Gamepad.wButtons & XINPUT_GAMEPAD_A;
	case ControllerButton::ButtonB:
		return m_CurrentState.Gamepad.wButtons & XINPUT_GAMEPAD_B;
	case ControllerButton::ButtonX:
		return m_CurrentState.Gamepad.wButtons & XINPUT_GAMEPAD_X;
	case ControllerButton::ButtonY:
		return m_CurrentState.Gamepad.wButtons & XINPUT_GAMEPAD_Y;
	default: return false;
	}
}

void dae::InputManager::HandleControllerInput() const
{
	if (IsPressed(ControllerButton::ButtonA))
	{
		buttonA->Execute();
	}
	else if (IsPressed(ControllerButton::ButtonB))
	{

	}
	else if (IsPressed(ControllerButton::ButtonX))
	{

	}
	else if (IsPressed(ControllerButton::ButtonY))
	{

	}
}

