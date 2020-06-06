#include "MiniginPCH.h"
#include "GameObject.h"
#include "ResourceManager.h"
#include "Renderer.h"

dae::GameObject::~GameObject() 
{
	// Deleting all the game objects
	for (ObjectComponent* pObject : m_pComponents) 
	{
		delete pObject;
		pObject = nullptr;
	}
	m_pComponents.clear();
};

void dae::GameObject::Update(){}

void dae::GameObject::Render() const
{
	const auto pos = m_Transform.GetPosition();
	//Renderer::GetInstance().RenderTexture(*m_Texture, pos.x, pos.y);
}

void dae::GameObject::AddComponent(ObjectComponent* component)
{
	m_pComponents.push_back(component);
}

void dae::GameObject::SetPosition(float x, float y)
{
	m_Transform.SetPosition(x, y, 0.0f);
}
