#include "Application.h"

#include "Brokengine/Events/ApplicationEvent.h"
#include "Brokengine/Log.h"

namespace Brokengine
{
	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		BE_TRACE(e);

		while (true);
	}
}
