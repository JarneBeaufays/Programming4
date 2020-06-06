#include "MiniginPCH.h"
#include "ObjectComponent.h"

ObjectComponent::ObjectComponent(std::string name)
	: m_Name{ name }
{
}

std::string ObjectComponent::GetName() const
{
	return m_Name;
}
