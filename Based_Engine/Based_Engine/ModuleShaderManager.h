#pragma once
#include "Module.h"
#include "Globals.h"
#include "glmath.h"
#include "Light.h"

#define MAX_LIGHTS 8

class ModuleShaderManager : public Module
{
public:
	ModuleShaderManager(Application* app, bool start_enabled = true);
	~ModuleShaderManager();

	bool Init();
	update_status PreUpdate();
	update_status PostUpdate();
	bool CleanUp();

public:

	Light lights[MAX_LIGHTS];
	mat3x3 NormalMatrix;
	mat4x4 ModelMatrix, ViewMatrix, ProjectionMatrix;
};