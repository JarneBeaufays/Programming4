#pragma once

// This is the main parent Object Component class
class ObjectComponent
{
public:
	// Rule of 5
	ObjectComponent(std::string name = "");

	// Functions
	void virtual Update() = 0;
	void virtual Render() const { };

	// Setters
	// Getters
	std::string GetName() const;

protected:

private:
	// Datamembers
	std::string m_Name;
};

