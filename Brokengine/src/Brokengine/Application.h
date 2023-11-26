#pragma once

#include "Core.h"

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

