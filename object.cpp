#ifndef _OBJECT_H
	#define _OBJECT_H
	#include "/home/ken/Documents/Source/octopus/object.h"
#endif

object::object(int start=0)
{
	this.make_id();

void object::make_id(int start=0)
{
	this.identification = identificationTracker++;
	return;
}

