//
//  RenderComponent.h
//  OpenGL
//
//  Created by Joseph Despain on 5/23/15.
//  Copyright (c) 2015 Joseph Despain. All rights reserved.
//
#ifndef RENDERNCOMP_H
#define RENDERNCOMP_H

#include "Component.h"
#include <GL/freeglut.h>
#include "HIDManager.h"

class RenderComponent : public Component
{
public:
    RenderComponent();
    ~RenderComponent();
    virtual void Update();
    virtual void Start();
private:
    void Draw();
};


#endif