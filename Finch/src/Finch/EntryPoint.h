#pragma once

#ifdef FINCH_PLATFORM_WINDOWS

extern Finch::Application* Finch::CreateApplication();

int main(int argc, char** argv) 
{
	auto app = Finch::CreateApplication();
	app->Run();
	delete app;
}

#endif