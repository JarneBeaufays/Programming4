#pragma once
class Command
{
public:
	// The base Command class used for input managing
	virtual ~Command() = default;
	virtual void Execute() = 0;
	virtual void Undo() = 0;
};

class JumpCommand : public Command
{
	void Execute() override;
	void Undo() override;
};

class FireCommand : public Command
{
	void Execute() override;
	void Undo() override;
};

class DuckCommand : public Command
{
	void Execute() override;
	void Undo() override;
};

class FartCommand : public Command
{
	void Execute() override;
	void Undo() override;
};