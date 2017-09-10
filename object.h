#ifndef _SDL_H
	#define _SDL_H
	#include <SDL2/SDL.h>
#endif

class object { 
	private:
		static int identificationTracker = 0;
		int identification;
		void make_id(int);
	public:
		object();
		int return_identification() {return this.identification;}
		
};
