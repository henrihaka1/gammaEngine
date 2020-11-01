#pragma once

#ifdef GM_PLATFORM_WINDOWS
	
extern Gamma::Application* Gamma::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Gamma::CreateApplication();
	app->Run();
	delete app;
}

#endif
