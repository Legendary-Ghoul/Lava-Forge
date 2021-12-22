#include <Forge.h>

class Sandbox : public Forge::App
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Forge::App* Forge::CreateApp()
{
	return new Sandbox();
}