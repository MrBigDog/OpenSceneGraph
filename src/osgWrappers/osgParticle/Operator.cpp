// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/CopyOp>
#include <osg/Object>
#include <osgParticle/Operator>
#include <osgParticle/Particle>
#include <osgParticle/Program>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgParticle::Operator)
	I_DeclaringFile("osgParticle/Operator");
	I_BaseType(osg::Object);
	I_Constructor0(____Operator,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgParticle::Operator &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Operator__C5_Operator_R1__C5_osg_CopyOp_R1,
	                           "",
	                           "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(bool, isEnabled,
	          Properties::NON_VIRTUAL,
	          __bool__isEnabled,
	          "Get whether this operator is enabled. ",
	          "");
	I_Method1(void, setEnabled, IN, bool, v,
	          Properties::NON_VIRTUAL,
	          __void__setEnabled__bool,
	          "Enable or disable this operator. ",
	          "");
	I_Method2(void, operate, IN, osgParticle::Particle *, P, IN, double, dt,
	          Properties::PURE_VIRTUAL,
	          __void__operate__Particle_P1__double,
	          "Do something on a particle. ",
	          "This method is called by ModularProgram objects to perform some operations on the particles. You must override it in descendant classes. Common operations consist of modifying the particle's velocity vector. The dt parameter is the time elapsed from last operation. ");
	I_Method1(void, beginOperate, IN, osgParticle::Program *, x,
	          Properties::VIRTUAL,
	          __void__beginOperate__Program_P1,
	          "Do something before processing particles via the operate() method. ",
	          "Overriding this method could be necessary to query the calling Program object for the current reference frame. If the reference frame is RELATIVE_RF, then your class should prepare itself to do all operations in local coordinates. ");
	I_Method0(void, endOperate,
	          Properties::VIRTUAL,
	          __void__endOperate,
	          "Do something after all particles have been processed. ",
	          "");
	I_SimpleProperty(bool, Enabled, 
	                 0, 
	                 __void__setEnabled__bool);
END_REFLECTOR

