#include <Goldfinch.h>

class Sandbox : public Goldfinch::Application 
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Goldfinch::Application* Goldfinch::CreateApplication()
{
	return new Sandbox();
}