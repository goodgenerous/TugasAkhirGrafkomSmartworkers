#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2, VBO3, VAO3, EBO3, texture3, VBO4, VAO4, EBO4, texture4, VBO5, VAO5, EBO5, texture5, VBO6, VAO6, EBO6, texture6, VBO7, VAO7, EBO7, texture7, VBO8, VAO8, EBO8, texture8, VBO9, VAO9, EBO9, texture9, VBO10, VAO10, EBO10, texture10, VBO13, VAO13, EBO13, texture13, VBO14, VAO14, EBO14, texture14, VBO15, VAO15, EBO15, texture15, VBO11, VAO11, EBO11, texture11, VBO16, VAO16, EBO16, texture16;
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	float angle = 0;
	float position = -1;
	float position2 = -2;
	float initpos = 0;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow* window);
	void BuildColoredPlane();
	void BuildRoad();
	void BuildLeftTrotoar();
	void BuildRightTrotoar();
	void BuildLeftFence();
	void BuildLeftFence2(); //baru
	void BuildLeftFencepanjang1(); //baru
	void BuildLeftFencepanjang2(); //baru
	void BuildRightFence();
	void BuildRightFence2(); //baru 
	void BuildRightFencepanjang1(); //baru
	void BuildRightFencepanjang2(); //baru
	void BuildHouseRoad();
	void BuildWindmillRoad();
	void DrawHouseRoad();
	void DrawWindmillRoad();
	void DrawLeftFence();
	void DrawLeftFence2(); //baru
	void DrawLeftFencepanjang1(); //baru
	void DrawLeftFencepanjang2(); //baru
	void DrawRightFence();
	void DrawRightFence2(); //baru
	void DrawRightFencepanjang1(); //baru
	void DrawRightFencepanjang2(); //baru
	void DrawLeftTrotoar();
	void DrawRightTrotoar();
	void buildRoof();
	void buildpillar();
	void buildpillar2();
	void builddoor();
	void buildwindow();
	void buildwindow2();
	void drawwindow();
	void drawwindow2();
	void drawdoor();
	void drawpillar2();
	void drawpillar();
	void buildHouse();
	void buildHouse2();
	void drawHouse();
	void drawHouse2();
	void drawRoof();
	void DrawColoredPlane();
	void DrawRoad();
	void BuildTrunk();
	void DrawTrunk();
	void BuildLeaf();
	void DrawLeaf();
	void BuildTrunk2();
	void BuildLeaf2();
	void DrawTrunk2();
	void DrawLeaf2();
	void builddoor2();
	void buildHouseWindmill();
	void buildwindow3();
	void buildwindow4();
	void buildwindow5();
	void buildHouseWindmill2();
	void drawHouseWindmill2();
	void drawdoor2();
	void drawHouseWindmill();
	void buildWindmillPillar();
	void drawWindmillPillar();
	void buildWindmill();
	void drawWindmill();
	void buildWindmill2();
	void drawWindmill2();
	void drawwindow3();
	void drawwindow4();
	void drawwindow5();
	void buildlamppillar();
	void buildlamppillar2();
	void buildlamp();
	void buildlamp2();
	void drawlamp();
	void drawlamp2();
	void drawlamppillar();
	void drawlamppillar2();
	void buildGate();
	void buildGate2();
	void buildGate3();
	void drawGate();
	void drawGate2();
	void drawGate3();
	void drawGate4();
	void drawGate5();
	void drawGate6();
	void drawGate7();
	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();

};