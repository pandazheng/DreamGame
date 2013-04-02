//
//  MainScene.cpp
//  TD001
//
//  Created by 黄 震杰 on 13-4-2.
//
//

#include "MainScene.h"

USING_NS_CC;
USING_NS_CC_EXT;

CCScene* MainScene::scene()
{
    CCScene *scene = CCScene::create();
    
    CCNodeLoaderLibrary *lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary(); //生成一个默认的Node Loader
    
    CCBReader *reader = new CCBReader(lib); //用node load lib 初始化一个ccb reader
    
    CCNode *node = reader->readNodeGraphFromFile("ip4-ccb/MainMenu.ccbi", scene); //从ccbi文件中加载node
    
    reader->release(); //注意手动释放内存
    
    if (node!=NULL)
    {
        scene->addChild(node); //将node 添加到scene中
    }
    
    return scene;
}