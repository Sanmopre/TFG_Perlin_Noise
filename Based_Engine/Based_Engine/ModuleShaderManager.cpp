#include "Globals.h"
#include "Application.h"
#include "ModuleShaderManager.h"
#include "SDL_opengl.h"
#include "imgui.h"
#include "imgui_impl_sdl.h"
#include "imgui_impl_opengl3.h"
#include <gl/GL.h>
#include <gl/GLU.h>

ModuleShaderManager::ModuleShaderManager(Application* app, bool start_enabled) : Module(app, start_enabled)
{
}


ModuleShaderManager::~ModuleShaderManager()
{}


bool ModuleShaderManager::Init()
{
	return true;
}

update_status ModuleShaderManager::PreUpdate()
{

	return UPDATE_CONTINUE;
}

update_status ModuleShaderManager::PostUpdate()
{
	return UPDATE_CONTINUE;
}


bool ModuleShaderManager::CleanUp()
{
	return true;
}
