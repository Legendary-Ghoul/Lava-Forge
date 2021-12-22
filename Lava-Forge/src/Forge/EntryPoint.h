#pragma once


#ifdef FG_PLATFORM_WINDOWS

extern Forge::App* Forge::CreateApp();

int main(int argc, char* argv[])
{
	auto app = Forge::CreateApp();
	app->Run();
	delete app;
}

#endif