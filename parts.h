#ifndef _SDL_H
	#define _SDL_H
	#include <SDL2/SDL.h>
#endif

class Brain : object {
	private:
		
};
class Graphics : Brain {
	private:
	public:	
		Graphics();
		bool load_surface(std::string);
		void start();
};

