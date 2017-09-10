#ifndef _SDL_H
	#define _SDL_H
	#include <SDL2/SDL.h>
#ifndef _BODY_PARTS_H
	#define _BODY_PARTS_H
	#include "parts.h"
#ifndef _MASTER_OBJECT_H
	#define _MASTER_OBJECT_H

class Octopus : object {
	private:
		Skeleton skeleton;
		Head head;
		Arm arms [8];
		//no clue what these arguments do.
		void build_o (int, int, int);

	public:
		Octopus();
		~Octopus();

		void run_octopus();
		void shut_down_octopus();
};
