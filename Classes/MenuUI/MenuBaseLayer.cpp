//
//  MenuBaseLayer.cpp
//  tribewar
//
//  Created by 黄 震杰 on 13-3-22.
//
//

#include "MenuBaseLayer.h"

USING_NS_CC;
USING_NS_CC_EXT;

MenuBaseLayer::MenuBaseLayer()
: mMenuItemStatusLabelBMFont(NULL)
{}

MenuBaseLayer::~MenuBaseLayer()
{
    CC_SAFE_RELEASE(mMenuItemStatusLabelBMFont);
}

SEL_MenuHandler MenuBaseLayer::onResolveCCBCCMenuItemSelector(CCObject * pTarget, const char * pSelectorName) {
    CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this, "onMenuItemAClicked", MenuBaseLayer::onMenuItemAClicked);
    CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this, "onMenuItemBClicked", MenuBaseLayer::onMenuItemBClicked);
    CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this, "onMenuItemCClicked", MenuBaseLayer::onMenuItemCClicked);
    
    return NULL;
}

SEL_CCControlHandler MenuBaseLayer::onResolveCCBCCControlSelector(CCObject * pTarget, const char * pSelectorName) {
    return NULL;
}

bool MenuBaseLayer::onAssignCCBMemberVariable(CCObject * pTarget, const char * pMemberVariableName, CCNode * pNode) {
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "mMenuItemStatusLabelBMFont", CCLabelBMFont *, this->mMenuItemStatusLabelBMFont);
    
    return false;
}

void MenuBaseLayer::onMenuItemAClicked(cocos2d::CCObject *pSender) {
    this->mMenuItemStatusLabelBMFont->setString("Menu Item A clicked.");
}

void MenuBaseLayer::onMenuItemBClicked(cocos2d::CCObject *pSender) {
    this->mMenuItemStatusLabelBMFont->setString("Menu Item B clicked.");
}

void MenuBaseLayer::onMenuItemCClicked(cocos2d::CCObject *pSender) {
    this->mMenuItemStatusLabelBMFont->setString("Menu Item C clicked.");
}