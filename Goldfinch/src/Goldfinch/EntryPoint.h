#pragma once

#ifdef GOLDFINCH_PLATFORM_WINDOWS

extern Goldfinch::Application* Goldfinch::CreateApplication();

int main(int argc, char** argv) 
{
	auto app = Goldfinch::CreateApplication();
	app->Run();
	delete app;
}

#endif