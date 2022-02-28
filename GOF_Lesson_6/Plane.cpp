
#include <iostream>

#include "Plane.h"
#include "MyTools.h"

using namespace std;
using namespace MyTools;

//Class Plane
void Plane::Draw()
{
    MyTools::ScreenSingleton::getInstance().SetColor(CC_LightBlue);
    DrawBody();
    DrawTail();
    DrawWings();
}

void Plane::DrawBody()
{    
    ScreenSingleton::getInstance().GotoXY(x, y);
    cout << "=========>";
}    
     
void Plane::DrawWings()
{   
    ScreenSingleton::getInstance().GotoXY(x + 3, y - 1);
    cout << "\\\\\\\\";
    ScreenSingleton::getInstance().GotoXY(x + 3, y + 1);
    cout << "////";
}    
     
void Plane::DrawTail()
{
    ScreenSingleton::getInstance().GotoXY(x - 2, y - 1);
    cout << "===";
}

//Class ColorPlane
void ColorPlane::DrawBody()
{
    MyTools::ScreenSingleton::getInstance().SetColor(CC_LightRed);
    ScreenSingleton::getInstance().GotoXY(x, y);
    cout << "=========>";
}

void ColorPlane::DrawWings()
{
    MyTools::ScreenSingleton::getInstance().SetColor(CC_LightBlue);
    ScreenSingleton::getInstance().GotoXY(x + 3, y - 1);
    cout << "\\\\\\\\";
    ScreenSingleton::getInstance().GotoXY(x + 3, y + 1);
    cout << "////";
}

void ColorPlane::DrawTail()
{
    MyTools::ScreenSingleton::getInstance().SetColor(CC_LightGreen);
    ScreenSingleton::getInstance().GotoXY(x - 2, y - 1);
    cout << "===";
}

//Class BigPlane
void BigPlane::DrawBody()
{
    ScreenSingleton::getInstance().GotoXY(x, y);
    cout << "============>";
}

void BigPlane::DrawWings()
{
    ScreenSingleton::getInstance().GotoXY(x - 4, y - 1);
    cout << "=====";
}

void BigPlane::DrawTail()
{
    ScreenSingleton::getInstance().GotoXY(x + 3, y - 1);
    cout << "\\\\\\\\\\";
    ScreenSingleton::getInstance().GotoXY(x + 3, y + 1);
    cout << "/////";

}
