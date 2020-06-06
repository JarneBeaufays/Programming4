#pragma once
#include "Command.h"

class Button
{
public:

	Button(Command* pCommand) { m_pCommand = pCommand; };
	~Button() { delete m_pCommand; m_pCommand = nullptr; };
	void Execute() { if (m_pCommand != nullptr) m_pCommand->Execute(); };
	void Undo() { if (m_pCommand != nullptr) m_pCommand->Undo(); };

private:

	Command* m_pCommand;

};
