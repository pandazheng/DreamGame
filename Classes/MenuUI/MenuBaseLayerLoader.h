//
//  MenuBaseLayerLoader.h
//  tribewar
//
//  Created by 黄 震杰 on 13-3-22.
//
//

#ifndef tribewar_MenuBaseLayerLoader_h
#define tribewar_MenuBaseLayerLoader_h

#include "MenuBaseLayer.h"

/* Forward declaration. */
class CCBReader;

class MenuBaseLayerLoader : public cocos2d::extension::CCLayerLoader {
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(MenuBaseLayerLoader, loader);
    
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(MenuBaseLayer);
};


#endif
