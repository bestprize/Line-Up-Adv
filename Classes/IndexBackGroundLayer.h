#ifndef __INDEX_BACKGROUND_LAYER
#define __INDEX_BACKGROUND_LAYER

#include "cocos2d.h"



class IndexBackGroundLayer : public cocos2d::LayerColor
{
public:
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  
    
    // implement the "static create()" method manually
    CREATE_FUNC(IndexBackGroundLayer);
	virtual void update(float dt);



	

};

#endif // __INDEX_BACKGROUND_LAYER
