#pragma once

#ifdef BE_PLATFORM_WINDOWS

extern Brokengine::Application* Brokengine::CreateApplication();

int main(int argc, char** argv)
{
	Brokengine::Log::Init();
	BE_CORE_WARN("Warn");
	int a = 5;
	BE_INFO("Info {0}", a);

	auto app = Brokengine::CreateApplication();
	app->Run();
	delete app;
}

#endif