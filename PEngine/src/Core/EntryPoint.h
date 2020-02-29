#pragma once

#ifdef PE_PLATFORM_WINDOWS

extern PE::Application* PE::CreateApplication();

int main(int argc, char** argv)
{
	PE::Log::Init();
	PE_CORE_WARN("Initizialed Log!");
	int a = 5;
	PE_INFO("Hello! Var={0}, {0:b}", a);


	auto app = PE::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error Only Windows support for now.
#endif