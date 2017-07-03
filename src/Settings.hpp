//
//  Settings.hpp
//  Conjured
//
//  Created by Dalton on 7/2/17.
//  Copyright © 2017 Conjured. All rights reserved.
//

#ifndef Settings_hpp
#define Settings_hpp

#include <stdio.h>

class Settings {
public:
    static Settings* getInstance();
private:
    static Settings* instance;
};

#endif
