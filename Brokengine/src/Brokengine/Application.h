#pragma once

#include "Core.h"
#include "Events/Event.h"

namespace Brokengine
{
	class Brokengine_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();

}

