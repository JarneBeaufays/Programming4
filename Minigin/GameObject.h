#pragma once
#include "Transform.h"
#include "SceneObject.h"
#include "ObjectComponent.h"

namespace dae
{
	class GameObject : public SceneObject
	{
	public:
		void Update() override;
		void Render() const override;

		void AddComponent(ObjectComponent* component);
		void SetPosition(float x, float y);

		GameObject() = default;
		virtual ~GameObject();
		GameObject(const GameObject& other) = delete;
		GameObject(GameObject&& other) = delete;
		GameObject& operator=(const GameObject& other) = delete;
		GameObject& operator=(GameObject&& other) = delete;

	private:
		Transform m_Transform;
		std::vector<ObjectComponent*> m_pComponents;
	};
}
