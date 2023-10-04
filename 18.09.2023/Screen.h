#pragma once
#include <iostream>
using namespace std;
#include "Component.h"
class Screen :
    public Component
{
public: 
    void action() override;
};

