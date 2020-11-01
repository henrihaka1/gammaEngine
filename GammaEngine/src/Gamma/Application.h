#pragma once

#include "Core.h"

namespace Gamma {

	class GAMMA_API Application
	{
	public:
		Application();
		virtual ~Application();
		//methods
		void Run();
	};

	//This method needs to be defined in the client
	Application* CreateApplication();
}


