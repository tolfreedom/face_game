//Standard library shit
#include <stdio.h>

//Engine Shit
#include "ww.h"

//sprites shit
#include "face.h"

int main( int argc, char * argv[] ) {
	
	if(ww_window_create(argc, argv, "Pixarray", 1024, 576)) {
		printf("Closing..\n");
		return 1;
	}
	
	init_face();
	
	//primary loop
	while(!ww_window_received_quit_event()) {
		
	
		
		//update events
		ww_window_update_events();	
		
		if( keystate.esc == 1){
			printf ("ESC pressed\n") ;
		}
		
		ww_draw_sprite(face) ; 
		
		
		ww_window_update_buffer();
	}
	
	//Cleanup and exit
	ww_window_destroy();
	return 0;
}
