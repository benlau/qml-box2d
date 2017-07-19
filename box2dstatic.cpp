#include <QtQml>
#include "box2dplugin.h"

void init()
{
    Box2DPlugin plugin;
    plugin.registerTypes("Box2D");
}

Q_COREAPP_STARTUP_FUNCTION(init)
