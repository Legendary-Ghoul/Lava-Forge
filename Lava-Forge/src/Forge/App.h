#pragma once

#include "Core.h"

namespace Forge{
	class FORGE_API App
	{
	public:
		App();
		virtual ~App();

		void Run();
	};

	App* CreateApp();
}