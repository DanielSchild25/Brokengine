#include <Brokengine.h>

class Sandbox : public Brokengine::Application
{
public:
	Sandbox()
	{
			
	}
	~Sandbox()
	{

	}
};


Brokengine::Application* Brokengine::CreateApplication()
{
	return new Sandbox();
}