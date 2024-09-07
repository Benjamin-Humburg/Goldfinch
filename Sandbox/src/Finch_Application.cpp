#include <Finch.h>

class Sandbox : public Finch::Application 
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Finch::Application* Finch::CreateApplication()
{
	return new Sandbox();
}