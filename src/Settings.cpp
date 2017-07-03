//
//  Settings.cpp
//  Conjured
//
//  Created by Dalton on 7/2/17.
//  Copyright © 2017 Conjured. All rights reserved.
//

#include "Settings.hpp"

Settings* Settings::getInstance()
{
    if(instance == NULL)
        instance = new Settings();
    
    return instance;
}
