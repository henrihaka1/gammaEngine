#include <Gamma.h>

class Sandbox : public Gamma::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

int main() 
{
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;
}