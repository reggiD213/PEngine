#include "pepch.h"
#include "Application.h"

#include "PE/Events/ApplicationEvent.h"
#include "PE/Log.h"

namespace PE
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
		PE_TRACE(e);

		while (true);
	}
}