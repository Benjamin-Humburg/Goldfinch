#pragma once

#include "Core.h"

namespace Finch {

	class FINCH_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// Defined in client
	Application* CreateApplication();

}

