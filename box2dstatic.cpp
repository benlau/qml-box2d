#include <QtQml>
#include "box2dworld.h"
#include "box2dbody.h"
#include "box2ddebugdraw.h"
#include "box2dfixture.h"
#include "box2djoint.h"
#include "box2ddistancejoint.h"
#include "box2dprismaticjoint.h"
#include "box2drevolutejoint.h"
#include "box2dmotorjoint.h"
#include "box2dweldjoint.h"
#include "box2dpulleyjoint.h"
#include "box2dfrictionjoint.h"
#include "box2dwheeljoint.h"
#include "box2dmousejoint.h"
#include "box2dgearjoint.h"
#include "box2dropejoint.h"
#include "box2dcontact.h"
#include "box2draycast.h"

void init()
{    
    int versionMajor = 2;
    int versionMinor = 0;

    qmlRegisterType<Box2DWorld>("Box2D", versionMajor, versionMinor, "World");
    qmlRegisterUncreatableType<Box2DProfile>("Box2D", versionMajor, versionMinor, "Profile",
                                             QStringLiteral("Property group of World"));
    qmlRegisterType<Box2DBody>("Box2D", versionMajor, versionMinor, "Body");
    qmlRegisterUncreatableType<Box2DFixture>("Box2D", versionMajor, versionMinor, "Fixture",
                                             QStringLiteral("Base type for Box, Circle etc."));
    qmlRegisterType<Box2DBox>("Box2D", versionMajor, versionMinor, "Box");
    qmlRegisterType<Box2DCircle>("Box2D", versionMajor, versionMinor, "Circle");
    qmlRegisterType<Box2DPolygon>("Box2D", versionMajor, versionMinor, "Polygon");
    qmlRegisterType<Box2DChain>("Box2D", versionMajor, versionMinor, "Chain");
    qmlRegisterType<Box2DEdge>("Box2D", versionMajor, versionMinor, "Edge");
    qmlRegisterType<Box2DDebugDraw>("Box2D", versionMajor, versionMinor, "DebugDraw");
    qmlRegisterUncreatableType<Box2DJoint>("Box2D", versionMajor, versionMinor, "Joint",
                                           QStringLiteral("Base type for DistanceJoint, RevoluteJoint etc."));
    qmlRegisterType<Box2DDistanceJoint>("Box2D", versionMajor, versionMinor, "DistanceJoint");
    qmlRegisterType<Box2DPrismaticJoint>("Box2D", versionMajor, versionMinor, "PrismaticJoint");
    qmlRegisterType<Box2DRevoluteJoint>("Box2D", versionMajor, versionMinor, "RevoluteJoint");
    qmlRegisterType<Box2DMotorJoint>("Box2D", versionMajor, versionMinor, "MotorJoint");
    qmlRegisterType<Box2DWeldJoint>("Box2D", versionMajor, versionMinor, "WeldJoint");
    qmlRegisterType<Box2DPulleyJoint>("Box2D", versionMajor, versionMinor, "PulleyJoint");
    qmlRegisterType<Box2DFrictionJoint>("Box2D", versionMajor, versionMinor, "FrictionJoint");
    qmlRegisterType<Box2DWheelJoint>("Box2D", versionMajor, versionMinor, "WheelJoint");
    qmlRegisterType<Box2DMouseJoint>("Box2D", versionMajor, versionMinor, "MouseJoint");
    qmlRegisterType<Box2DGearJoint>("Box2D", versionMajor, versionMinor, "GearJoint");
    qmlRegisterType<Box2DRopeJoint>("Box2D", versionMajor, versionMinor, "RopeJoint");
    qmlRegisterType<Box2DRayCast>("Box2D", versionMajor, versionMinor, "RayCast");

    qmlRegisterUncreatableType<Box2DContact>("Box2D", versionMajor, versionMinor, "Contact", QStringLiteral("Contact class"));
}

Q_COREAPP_STARTUP_FUNCTION(init)
