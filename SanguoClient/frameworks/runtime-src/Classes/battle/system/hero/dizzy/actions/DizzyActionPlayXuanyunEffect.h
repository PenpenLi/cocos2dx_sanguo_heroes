//
//  DizzyActionPlayXuanyunEffect.h
//  sanguoClient
//
//  Created by fuchenhao on 5/27/15.
//
//

#ifndef __sanguoClient__DizzyActionPlayXuanyunEffect__
#define __sanguoClient__DizzyActionPlayXuanyunEffect__

#include "DizzyAction.h"

class DizzyActionPlayXuanyunEffect : public DizzyAction
{
public:
    virtual ~DizzyActionPlayXuanyunEffect();
    
    virtual void enter(entityx::Entity& entity);
    virtual void exit(entityx::Entity& entity);
    virtual void update(entityx::Entity& entity, float dt);
};

#endif /* defined(__sanguoClient__DizzyActionPlayXuanyunEffect__) */
