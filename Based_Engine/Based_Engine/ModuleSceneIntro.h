#pragma once
#include "Module.h"
#include "Globals.h"

#define BOUNCER_TIME 200

struct PhysBody3D;
class Plane;
class Cube;
class GridRender;

class ModuleSceneIntro : public Module
{
public:
	ModuleSceneIntro(Application* app, bool start_enabled = true);
	~ModuleSceneIntro();

	bool Start();
	update_status Update(float dt);
	bool CleanUp();
	GridRender* grid;

private:

	Plane* plane;
	Cube* cube;
};
