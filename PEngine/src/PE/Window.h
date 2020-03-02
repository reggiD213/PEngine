#pragma once
#include "pepch.h"

#include "PE/Core.h"
#include "PE/Events/Event.h"

namespace PE
{

	struct WindowProps
	{
		std::string Title;
		unsigned int Width;
		unsigned int Height;

		WindowProps(const std::string& title = "Window Title",
					unsigned int width = 1280,
					unsigned int height = 720)
			: Title(title), Width(width), Height(height)
		{
		}
	};

	// Window interface
	class PE_API Window
	{
	public:
		using EventCallbackFn = std::function<void(Event&)>;

		virtual ~Window() {}

		virtual void OnUpdate() = 0;

		virtual unsigned int GetWidth() const = 0;
		virtual unsigned int GetHeight() const = 0;

		// Window attributes
		virtual void SetEventCallback(const EventCallbackFn& callback) = 0;
		virtual void SetVSync(bool enabled) = 0;
		virtual bool IsVSync() const = 0;

		static Window* Create(const WindowProps& props = WindowProps());
	};

}