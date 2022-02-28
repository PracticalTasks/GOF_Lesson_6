#pragma once

#include "DynamicObject.h"

class Plane : public DynamicObject {
public:
    void Draw() override;
    inline void ChangePlaneY(double dy) { yDirection += dy; }
 
protected:
    virtual void DrawBody();
    virtual void DrawWings();
    virtual void DrawTail();

};

class ColorPlane : public Plane
{
public:
    void DrawBody()override;
    void DrawWings()override;
    void DrawTail()override;
};

class BigPlane : public Plane
{
public:
    void DrawBody()override;
    void DrawWings()override;
    void DrawTail()override;
};


