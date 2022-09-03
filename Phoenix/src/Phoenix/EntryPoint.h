#pragma once

#ifdef PH_PLATFORM_WINDOWS

extern Phoenix::Application* Phoenix::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Phoenix::CreateApplication();
	app->Run();
	delete app;
}

#endif 
