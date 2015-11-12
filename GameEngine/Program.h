//
//  Program.h
//  OpenGL
//
//  Created by Joseph Despain on 5/23/15.
//  Copyright (c) 2015 Joseph Despain. All rights reserved.
//

#ifndef PROGRAM_H
#define PROGRAM_H

#include <iostream>
#define GLEW_STATIC
#include <GL/glew.h>

#include <stdio.h>
//#include <AL/alut.h>
#include <stdlib.h>
#include "ImageLibManager.h"
#include <vector>
#include "Entity.h"
#include "Level.h"
#include <glm/glm.hpp>

#include <GLFW/glfw3.h>

#include "Camera.h"


#include "PhysxManager.h"
#include "Model.h"
#include "Shader.h"
#include "PointLight.h"

class Program
{
public:
    
    Program();
    ~Program();
    
    Level* TheLevel;
    glm::vec3 hu;
    

    
    bool Init(int argc, char** argv);
    void render();
    void mainLoop();
    
    
    
    
    void SetLevel(Level* level);
    
    float testx;
    float testy;
    float testz;
    
    GLFWwindow* window;
    
    Shader* shaderGeometryPass;
    Shader* shaderLightingPass;
    Shader* stencilPassShader;
    
    // Crysis 2 Nanosuit Model.
    Model* Nanosuit;
    
    //Sphere Model for point lights.
    Model* SphereModel;
    
    
    glm::mat4 projection;
    glm::mat4 view;
    
    GLuint gBuffer;
    GLuint gPosition, gNormal, gAlbedoSpec;
    GLuint FinalTexture;
    GLuint rboDepth;
    
    float roughness = 0.1;
    bool bSwitch;
    
private:

    
    Texture* Panorama;
    double CurrentTime;
    int NBFrames;
    double LastTime;
    
    void GeoPass();
    void StencilPass();
    void LightPass();
    
    void CalcMS();
    
    int ScreenWidth;
    int ScreenHeight;
    
    void RenderQuad();
    
};
#endif